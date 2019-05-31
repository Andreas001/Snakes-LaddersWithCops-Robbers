#include <iostream>
#include <cstdlib>
#include <time.h>
#include <conio.h>
using namespace std;

int ran(int bawah,int atas)
{
    return rand()%(atas-bawah+1)+(bawah);
}

void positioneasy(int a,int b,int c,int s1,int s2,int l1,int l2, int l3, int l4, int l5, int l6,int side)
{
    if(side==1)
        cout<<"You are the COP!!!(Cop 1)"<<endl;
    else if(side==2)
        cout<<"You are the BAD GUY!!!"<<endl;
    cout<<"(bad guy) position: "<<a<<endl;
    cout<<"(cop 1) position: "<<b<<endl;
    cout<<"(cop 2) position: "<<c<<endl;
    cout<<"Position of snakes: "<<s1<<" "<<s2<<endl;
    cout<<"position of ladders: "<<l1<<" "<<l2<<" "<<l3<<" "<<l4<<" "<<l5<<" "<<l6<<endl;
    getch();
    system("CLS");
}

void positionmedium(int a,int b,int c,int d)
{
    cout<<"(bad guy) position: "<<a<<endl;
    cout<<"(cop 1) position: "<<b<<endl;
    cout<<"(cop 2) position: "<<c<<endl;
    cout<<"(cop 3) position: "<<d<<endl;
    getch();
    system("CLS");
}

void positionhard(int a,int b,int c,int d,int e,int f)
{
    cout<<"(bad guy) position: "<<a<<endl;
    cout<<"(cop 1) position: "<<b<<endl;
    cout<<"(cop 2) position: "<<c<<endl;
    cout<<"(cop 3) position: "<<d<<endl;
    cout<<"(cop 4) position: "<<e<<endl;
    cout<<"(cop 5) position: "<<f<<endl;
    getch();
    system("CLS");
}

void copm(int number, int &cop)
{
    cout<<"Cop "<<number<<" Move : ";
    int dice1=rand()%6+1;
    int dice2=rand()%6+1;
    int totdice=dice1+dice2;
    cop=cop+totdice;
    cout<<"Move "<<totdice<<" step/steps.(from "<<cop-totdice<<" to "<<cop<<")"<<endl;
}

int main()
{
    srand(time(NULL));
    cout<<"Welcome to Cops and Bad Guy in Snakes and Ladders Game!!!\n"<<"Press P to start"<<endl;
    char start;
    int side,badguy,cops,cop1,cop2,cop3,cop4,cop5,ladder1,ladder2,ladder3,ladder4,ladder5,ladder6,snake1,snake2,snake3,snake4,level;
    cin>>start;

    while(start='p'||'P')
    {
        cout<<"Enter 1 for Cops and 2 for Bad Guy"<<endl;
        cin>>side;
        cout<<"Enter 1 for easy, 2 for medium, 3 for hard"<<endl;
        cin>>level;
    switch(level)
    {
        case 1: cop1=1,cop2=1,badguy=1,snake1=ran(2,44),snake2=ran(44,96),ladder1=ran(2,18),ladder2=ran(19,34),ladder3=ran(35,50),
                ladder4=ran(51,66),ladder5=ran(67,82),ladder6=ran(83,98);
                if(snake1==ladder1||snake1==ladder2||snake1==ladder3)
                    snake1=snake1+ran(1,2);
                if(snake2==ladder3||snake2==ladder4||snake2==ladder5||snake2==ladder6)
                    snake2=snake2+ran(1,2);
                switch(side)
                {
                    case 1: cout<<"You have 1 cop assisting the pursuit,catch him before he escapes or reach the exit first"<<endl;
                            break;
                    case 2: cout<<"There are 2 cops, don't get caught or reach the exit first"<<endl;
                            break;
                }
                break;
        case 2: cop1=1,cop2=1,cop3=1,badguy=1,snake1=2,ladder1=4;
                switch(side)
                {
                    case 1: cout<<"You have 2 cops assisting the pursuit, catch him before he escapes or reach the exit first"<<endl;
                            break;
                    case 2: cout<<"There are 3 cops, don't get caught or reach the exit first"<<endl;
                            break;
                }
                break;
        case 3: cop1=1,cop2=1,cop3=1,cop4=1,cop5=1,badguy=1,snake1,ladder1;
                switch(side)
                {
                    case 1: cout<<"You have 4 cops assisting the pursuit, catch him before he escapes or reach the exit first"<<endl;
                            break;
                    case 2: cout<<"There are 5 cops, don't get caught or reach the exit first"<<endl;
                            break;
                }
                break;
    }
    switch(level)
    {
        case 1:int n=1; while(true)
        {
           positioneasy(badguy,cop1,cop2,snake1,snake2,ladder1,ladder2,ladder3,ladder4,ladder5,ladder6,side);
           if(n==1)
            {
               cout<<"Bad guy's Move : ";
               int dice1=ran(1,6);
               int dice2=ran(1,6);
               int totdice=dice1+dice2;
               badguy=badguy+totdice;
               cout<<"Move "<<totdice<<"step/steps.(from "<<badguy-totdice<<" to "<<badguy<<")"<<endl;
            if(badguy==100)
                {cout<<"Bad guy escaped!\n"; break;}
            else if(badguy>100)
                {int g;g=badguy-100;badguy=100-g;cout<<"Bad guy passed the exit, move back "<<g<<" steps(from "<<badguy+g<<" to "<<badguy<<")"<<endl;}
            else if(badguy==cop1||badguy==cop2)
                {cout<<"Bad guy got caught by a cop, COP WINS!!!"<<endl;break;}
            else if(badguy==snake1||badguy==snake2)
                {int f=ran(1,12);badguy=badguy-f;if(badguy<0){badguy+=1;}cout<<"Bad guy got hit by a snake, go back "<<f<<" step/steps(from "<<badguy+f<<" to "<<badguy<<")"<<endl;}
            else if(badguy==ladder1||badguy==ladder2||badguy==ladder3||badguy==ladder4||badguy==ladder5||badguy==ladder6)
                {int q=ran(1,12);badguy=badguy+q;cout<<"Bad guy found a ladder, go up "<<q<<" step/steps(from "<<badguy-q<<" to "<<badguy<<")"<<endl;}
            }
           else if(n==2)
            {
                copm(1,cop1);
                if(cop1==100)
                    {cout<<"Cop 1"<<"has reached the exit, the bad guy is trapped. COPS WINS!!!"<<endl;break;}
                else if(cop1==snake1||snake2)
                    {}
                else if(cop1==ladder1||cop1==ladder2||cop1==ladder3||cop1==ladder4||cop1==ladder5||cop1==ladder6)
                    {}
                else if(cop1>100)
                    {int m;m=cop1-100;cop1=100-m;cout<<"cop 1 Passed the exit, will move back "<<m<<" steps"<<endl;}
                else if(cop1==badguy)
                    {cout<<"Bad Guy is caught by Cop 1, COPS WINS!!!"<<endl;break;}
            }
           else if(n==3)
            {
                copm(2,cop2);
                if(cop2==100){cout<<"Cop 2"<<"has reached the exit, the bad guy is trapped. COPS WINS!!!"<<endl;break;}
                else if(cop2>100){int m;m=cop2-100;cop2=100-m;cout<<"cop 2 Passed the exit, will move back "<<m<<" steps"<<endl;}
                else if(cop2==badguy){cout<<"Bad Guy is caught by Cop 2, COPS WINS!!!"<<endl;break;}
                n=0;
            }
            n++;
        }
   }
   }
   return 0;
}
