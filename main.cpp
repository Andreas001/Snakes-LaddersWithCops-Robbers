#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <time.h>
#include <stdlib.h>
using namespace std;

int ran(int minimum,int maximum)
{
    return rand()%(maximum-minimum+1)+(minimum);
}

void bgm(int &bg)
{
    int dice1,dice2;
    do
    {
        cout<<"Bad guy's Move : "<<endl;
        dice1=rand()%6+1;
        dice2=rand()%6+1;
        int totdice=dice1+dice2;
        bg=bg+totdice;
        cout<<"Dice 1: "<<dice1<<". "<<"Dice 2: "<<dice2<<"."<<endl;
        cout<<"Move "<<totdice<<" step/steps.(from "<<bg-totdice<<" to "<<bg<<")"<<endl;
    }while(dice1==dice2);
}

void copm(int number,int &cop)
{
    int dice1,dice2;
    do
    {
        cout<<"Cop "<<number<<" Move : "<<endl;
        dice1=rand()%6+1;
        dice2=rand()%6+1;
        int totdice=dice1+dice2;
        cop=cop+totdice;
        cout<<"Dice 1: "<<dice1<<". "<<"Dice 2: "<<dice2<<endl;
        cout<<"Move "<<totdice<<" step/steps.(from "<<cop-totdice<<" to "<<cop<<")"<<endl;
    }while(dice1==dice2);
}

void easymode(int a,int b,int c,int s1,int s2,int l1,int l2, int l3, int l4, int l5, int l6,int side)
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

void mediummode(int a,int b,int c,int d,int s1,int s2,int l1,int l2,int l3,int l4,int side)
{
    if(side==1)
        cout<<"You are the COP!!!(Cop 1)"<<endl;
    else if(side==2)
        cout<<"You are the BAD GUY!!!"<<endl;
    cout<<"(bad guy) position: "<<a<<endl;
    cout<<"(cop 1) position: "<<b<<endl;
    cout<<"(cop 2) position: "<<c<<endl;
    cout<<"(cop 3) position: "<<d<<endl;
    cout<<"Position of snakes: "<<s1<<" "<<s2<<endl;
    cout<<"position of ladders: "<<l1<<" "<<l2<<" "<<l3<<" "<<l4<<endl;
    getch();
    system("CLS");
}

void hardmode(int a,int b,int c,int d,int e,int f,int s1,int s2,int s3,int s4,int l1,int l2,int side)
{
    if(side==1)
        cout<<"You are the COP!!!(Cop 1)"<<endl;
    else if(side==2)
        cout<<"You are the BAD GUY!!!"<<endl;
    cout<<"(bad guy) position: "<<a<<endl;
    cout<<"(cop 1) position: "<<b<<endl;
    cout<<"(cop 2) position: "<<c<<endl;
    cout<<"(cop 3) position: "<<d<<endl;
    cout<<"(cop 4) position: "<<e<<endl;
    cout<<"(cop 5) position: "<<f<<endl;
    cout<<"Position of snakes: "<<s1<<" "<<s2<<" "<<s3<<" "<<s4<<endl;
    cout<<"position of ladders: "<<l1<<" "<<l2<<endl;
    getch();
    system("CLS");
}

void position(int num,int &a,int s1,int s2,int s3,int s4,int l1,int l2,int l3,int l4,int l5,int l6,int cop1,int cop2,int cop3,int cop4,int cop5,int sa1,int sa2,
              int sa3,int sa4,int la1,int la2,int la3,int la4,int la5,int la6,int cop)//Mengecek posisi penjahat dan apa yang akan dilakukan.
{
    switch(num)
    {
case 1:
    if(a>100)
        {int g;g=a-100;a=100-g;cout<<"Bad guy passed the exit, move back "<<g<<" steps(from "<<a+g<<" to "<<a<<")"<<endl;}//Jika melewati 100.(cek rumus g)
    else if(a==s1)
        {a=a-sa1;cout<<"Bad guy got hit by a snake, go back "<<sa1<<" step/steps(from "<<a+sa1<<" to "<<a<<")"<<endl;}
    else if(a==s2)
        {a=a-sa2;cout<<"Bad guy got hit by a snake, go back "<<sa2<<" step/steps(from "<<a+sa2<<" to "<<a<<")"<<endl;}
    else if(a==s3)
        {a=a-sa3;cout<<"Bad guy got hit by a snake, go back "<<sa3<<" step/steps(from "<<a+sa3<<" to "<<a<<")"<<endl;}
    else if(a==s4)
        {a=a-sa4;cout<<"Bad guy got hit by a snake, go back "<<sa4<<" step/steps(from "<<a+sa4<<" to "<<a<<")"<<endl;}
    else if(a==l1)
        {a=a+la1;cout<<"Bad guy found a ladder, go up "<<la1<<" step/steps(from "<<a+la1<<" to "<<a<<")"<<endl;}
    else if(a==l2)
        {a=a+la2;cout<<"Bad guy found a ladder, go up "<<la2<<" step/steps(from "<<a+la2<<" to "<<a<<")"<<endl;}
    else if(a==l3)
        {a=a+la3;cout<<"Bad guy found a ladder, go up "<<la3<<" step/steps(from "<<a+la3<<" to "<<a<<")"<<endl;}
    else if(a==l4)
        {a=a+la4;cout<<"Bad guy found a ladder, go up "<<la4<<" step/steps(from "<<a+la4<<" to "<<a<<")"<<endl;}
    else if(a==l5)
        {a=a+la5;cout<<"Bad guy found a ladder, go up "<<la5<<" step/steps(from "<<a+la5<<" to "<<a<<")"<<endl;}
    else if(a==l6)
        {a=a+la6;cout<<"Bad guy found a ladder, go up "<<la6<<" step/steps(from "<<a+la6<<" to "<<a<<")"<<endl;}
case 2:
    if(a>100)
        {int g;g=a-100;a=100-g;cout<<"Cop "<<cop<<" guy passed the exit, move back "<<g<<" steps(from "<<a+g<<" to "<<a<<")"<<endl;}//Jika melewati 100.(cek rumus g)
    else if(a==s1)
        {a=a-sa1;cout<<"Cop "<<cop<<" got hit by a snake, go back "<<sa1<<" step/steps(from "<<a+sa1<<" to "<<a<<")"<<endl;}
    else if(a==s2)
        {a=a-sa2;cout<<"Cop "<<cop<<" got hit by a snake, go back "<<sa2<<" step/steps(from "<<a+sa2<<" to "<<a<<")"<<endl;}
    else if(a==s3)
        {a=a-sa3;cout<<"Cop "<<cop<<" got hit by a snake, go back "<<sa3<<" step/steps(from "<<a+sa3<<" to "<<a<<")"<<endl;}
    else if(a==s4)
        {a=a-sa4;cout<<"Cop "<<cop<<" got hit by a snake, go back "<<sa4<<" step/steps(from "<<a+sa4<<" to "<<a<<")"<<endl;}
    else if(a==l1)
        {a=a+la1;cout<<"Cop "<<cop<<" found a ladder, go up "<<la1<<" step/steps(from "<<a+la1<<" to "<<a<<")"<<endl;}
    else if(a==l2)
        {a=a+la2;cout<<"Cop "<<cop<<" found a ladder, go up "<<la2<<" step/steps(from "<<a+la2<<" to "<<a<<")"<<endl;}
    else if(a==l3)
        {a=a+la3;cout<<"Cop "<<cop<<" found a ladder, go up "<<la3<<" step/steps(from "<<a+la3<<" to "<<a<<")"<<endl;}
    else if(a==l4)
        {a=a+la4;cout<<"Cop "<<cop<<" found a ladder, go up "<<la4<<" step/steps(from "<<a+la4<<" to "<<a<<")"<<endl;}
    else if(a==l5)
        {a=a+la5;cout<<"Cop "<<cop<<" found a ladder, go up "<<la5<<" step/steps(from "<<a+la5<<" to "<<a<<")"<<endl;}
    else if(a==l6)
        {a=a+la6;cout<<"Cop "<<cop<<" found a ladder, go up "<<la6<<" step/steps(from "<<a+la6<<" to "<<a<<")"<<endl;}
    }
}

int main()
{
    srand(time(NULL));
    char start;
    int b=1,y=1,e=1;
    int side,level;
    int badguy=0;
    int cop1,cop2,cop3,cop4,cop5;
    int s1,s2,s3,s4;
    int sa1,sa2,sa3,sa4;
    int l1,l2,l3,l4,l5,l6;
    int la1,la2,la3,la4,la5,la6;
    cout<<"---COPS AND BAD GUY WITH A MIX OF SNAKES AND LADDERS---\n"
        <<"Welcome, please enter p to play the game!."<<endl;
    cin>>start;
    while(start=='p'||start=='P')
        {
            cout<<"Choose your side!(Enter 1 for COPS, and 2 for BAD GUY)."<<endl;
            cin>>side;
            cout<<"Choose the difficulty!(Enter 1 for easy, 2 for medium, or 3 for hard)."<<endl;
            cin>>level;
            if(side==1){cout<<"Welcome to the police force!"<<endl;}
            else if(side==2){cout<<"Welcome to the bad side!"<<endl;}

            switch(level)
            {
                case 1:cop1=0,cop2=0,cop3=0,cop4=0,cop5=0,badguy=0;
                       s1=ran(2,44),s2=ran(45,98),s3=0,s4=0;
                       l1=ran(2,18),l2=ran(19,34),l3=ran(35,50),
                       l4=ran(51,66),l5=ran(67,82),l6=ran(83,98);
                       sa1=ran(1,12),sa2=ran(1,12),sa3=0,sa4=0;
                       la1=ran(1,12),la2=ran(1,12),la3=ran(1,12),
                       la4=ran(1,12),la5=ran(1,12),la6=ran(1,12);

                       if(s1==l1||s1==l2||s1==l3)
                          s1=s1+ran(1,2);
                       if(s2==l3||s2==l4||s2==l5||s2==l6)
                          s2=s2+ran(1,2);
                       switch(side)
                       {
                           case 1:cout<<"You have a cop assisting your pursuit, catch the bad guy before he escapes or reach the exit first!"<<endl;break;
                           case 2:cout<<"You are on the run! Keep away from the cops and reach the exit first!"<<endl;break;
                       }
                       break;

                case 2:cop1=0,cop2=0,cop3=0,cop4=0,cop5=0,badguy=0;
                       s1=ran(2,44),s2=ran(45,98),s3=0,s4=0;
                       l1=ran(2,24),l2=ran(25,48),l3=ran(49,72),l4=ran(73,98),l5=0,l6=0;
                       sa1=ran(1,12),sa2=ran(1,12),sa3=0,sa4=0;
                       la1=ran(1,12),la2=ran(1,12),la3=ran(1,12),la4=ran(1,12),l5=0,l6=0;

                       if(s1==l1||s1==l2)
                          s1=s1+ran(1,2);
                       if(s2==l4||s2==l3||s2==l4)
                          s2=s2+ran(1,2);
                       switch(side)
                       {
                           case 1:cout<<"You have 2 cops assisting your pursuit, catch the bad guy before he escapes or reach the exit first!"<<endl;break;
                           case 2:cout<<"You are on the run! Keep away from the cops and reach the exit first!"<<endl;break;
                       }
                       break;

                case 3:cop1=0,cop2=0,cop3=0,cop4=0,cop5=0,badguy=0;
                       s1=ran(2,24),s2=ran(25,48),s3=(49,72),s4=(73,98);
                       l1=ran(2,44),l2=ran(45,98),l3=0,l4=0,l5=0,l6=0;
                       sa1=ran(1,12),sa2=ran(1,12),sa3=ran(1,12),sa4=(1,12);
                       la1=ran(1,12),la2=ran(1,12),la3=ran(1,12),la4=ran(1,12),la5=0,la6=0;

                       if(l1==s1||l1==s2)
                          l1=l1+ran(1,2);
                       if(l2==s2||l2==s3||l2==s4)
                          l2=l2+ran(1,2);
                       switch(side)
                       {
                           case 1:cout<<"You have 4 cops assisting your pursuit, catch the bad guy before he escapes or reach the exit first!"<<endl;break;
                           case 2:cout<<"You are on the run! Keep away from the cops and reach the exit first!"<<endl;break;
                       }
                       break;
            }
            switch(level)
            {
                case 1:while(true)
                        {
                            easymode(badguy,cop1,cop2,s1,s2,l1,l2,l3,l4,l5,l6,side);
                            if(b==1)
                                {
                                     bgm(badguy);
                                     position(1,badguy,s1,s2,s3,s4,l1,l2,l3,l4,l5,l6,cop1,cop2,cop3,cop4,cop5,sa1,sa2,sa3,sa4,la1,la2,la3,la4,la5,la6,1);
                                     if(badguy==100){cout<<"Bad guy escaped! BAD GUY WINS!"<<endl; break;}
                                     else if(badguy==cop1||badguy==cop2){cout<<"Clumsy! Bad guy approached a cop, COP WINS!!!"<<endl;break;}
                                }
                            else if(b==2)
                                {
                                    copm(1,cop1);
                                    position(2,cop1,s1,s2,s3,s4,l1,l2,l3,l4,l5,l6,cop1,cop2,cop3,cop4,cop5,sa1,sa2,sa3,sa4,la1,la2,la3,la4,la5,la6,1);
                                    if(cop1==100){cout<<"Cop 1 has reached the exit! Bad guy is trapped! COP WINS!"<<endl;break;}
                                    else if(cop1==badguy){cout<<"Cop 1 has caught the bad guy! COP WINS!"<<endl;break;}
                                }
                            else if(b==3)
                                {
                                    copm(2,cop2);
                                    position(2,cop2,s1,s2,s3,s4,l1,l2,l3,l4,l5,l6,cop1,cop2,cop3,cop4,cop5,sa1,sa2,sa3,sa4,la1,la2,la3,la4,la5,la6,2);
                                    if(cop2==100){cout<<"Cop 2 has reached the exit! Bad guy is trapped! COP WINS!"<<endl;break;}
                                    else if(cop2==badguy){cout<<"Cop 2 has caught the bad guy! COP WINS!"<<endl;break;}
                                    b=0;//Balikkin n menjadi 0 biar bakal keulang
                                }
                            b++;
                        }break;
                case 2:while(true)
                        {
                            mediummode(badguy,cop1,cop2,cop3,s1,s2,l1,l2,l3,l4,side);
                            if(e==1)
                                {
                                     bgm(badguy);
                                     position(1,badguy,s1,s2,s3,s4,l1,l2,l3,l4,l5,l6,cop1,cop2,cop3,cop4,cop5,sa1,sa2,sa3,sa4,la1,la2,la3,la4,la5,la6,1);
                                     if(badguy==100){cout<<"Bad guy escaped! BAD GUY WINS!"<<endl; break;}
                                     else if(badguy==cop1||badguy==cop2||badguy==cop3){cout<<"Clumsy! Bad guy approached a cop, COP WINS!!!"<<endl;break;}
                                }
                            else if(e==2)
                                {
                                    copm(1,cop1);
                                    position(2,cop1,s1,s2,s3,s4,l1,l2,l3,l4,l5,l6,cop1,cop2,cop3,cop4,cop5,sa1,sa2,sa3,sa4,la1,la2,la3,la4,la5,la6,1);
                                    if(cop1==100){cout<<"Cop 1 has reached the exit! Bad guy is trapped! COP WINS!"<<endl;break;}
                                    else if(cop1==badguy){cout<<"Cop 1 has caught the bad guy! COP WINS!"<<endl;break;}
                                }
                            else if(e==3)
                                {
                                    copm(2,cop2);
                                    position(2,cop2,s1,s2,s3,s4,l1,l2,l3,l4,l5,l6,cop1,cop2,cop3,cop4,cop5,sa1,sa2,sa3,sa4,la1,la2,la3,la4,la5,la6,2);
                                    if(cop2==100){cout<<"Cop 2 has reached the exit! Bad guy is trapped! COP WINS!"<<endl;break;}
                                    else if(cop2==badguy){cout<<"Cop 2 has caught the bad guy! COP WINS!"<<endl;break;}
                                }
                            else if(e==4)
                                {
                                    copm(3,cop3);
                                    position(2,cop3,s1,s2,s3,s4,l1,l2,l3,l4,l5,l6,cop1,cop2,cop3,cop4,cop5,sa1,sa2,sa3,sa4,la1,la2,la3,la4,la5,la6,3);
                                    if(cop3==100){cout<<"Cop 3 has reached the exit! Bad guy is trapped! COP WINS!"<<endl;break;}
                                    else if(cop3==badguy){cout<<"Cop 3 has caught the bad guy, COP WINS!"<<endl;break;}
                                    e=0;
                                }
                            e++;
                        }break;
                case 3:while(true)
                        {
                            hardmode(badguy,cop1,cop2,cop3,cop4,cop5,s1,s2,s3,s4,l1,l2,side);
                            if(y==1)
                                {
                                     bgm(badguy);
                                     position(1,badguy,s1,s2,s3,s4,l1,l2,l3,l4,l5,l6,cop1,cop2,cop3,cop4,cop5,sa1,sa2,sa3,sa4,la1,la2,la3,la4,la5,la6,1);
                                     if(badguy==100){cout<<"Bad guy escaped! BAD GUY WINS!"<<endl; break;}
                                     else if(badguy==cop1||badguy==cop2||badguy==cop3||badguy==cop4||badguy==cop5){cout<<"Clumsy! Bad guy approached a cop, COP WINS!!!"<<endl;break;}
                                }
                            else if(y==2)
                                {
                                    copm(1,cop1);
                                    position(2,cop1,s1,s2,s3,s4,l1,l2,l3,l4,l5,l6,cop1,cop2,cop3,cop4,cop5,sa1,sa2,sa3,sa4,la1,la2,la3,la4,la5,la6,1);
                                    if(cop1==100){cout<<"Cop 1 has reached the exit! Bad guy is trapped! COP WINS!"<<endl;break;}
                                    else if(cop1==badguy){cout<<"Cop 1 has caught the bad guy! COP WINS!"<<endl;break;}
                                }
                            else if(y==3)
                                {
                                    copm(2,cop2);
                                    position(2,cop2,s1,s2,s3,s4,l1,l2,l3,l4,l5,l6,cop1,cop2,cop3,cop4,cop5,sa1,sa2,sa3,sa4,la1,la2,la3,la4,la5,la6,2);
                                    if(cop2==100){cout<<"Cop 2 has reached the exit! Bad guy is trapped! COP WINS!"<<endl;break;}
                                    else if(cop2==badguy){cout<<"Cop 2 has caught the bad guy! COP WINS!"<<endl;break;}
                                }
                            else if(y==4)
                                {
                                    copm(3,cop3);
                                    position(2,cop3,s1,s2,s3,s4,l1,l2,l3,l4,l5,l6,cop1,cop2,cop3,cop4,cop5,sa1,sa2,sa3,sa4,la1,la2,la3,la4,la5,la6,3);
                                    if(cop3==100){cout<<"Cop 3 has reached the exit! Bad guy is trapped! COP WINS!"<<endl;break;}
                                    else if(cop3==badguy){cout<<"Cop 3 has caught the bad guy, COP WINS!"<<endl;break;}
                                }
                            else if(y==5)
                                {
                                    copm(4,cop4);
                                    position(2,cop4,s1,s2,s3,s4,l1,l2,l3,l4,l5,l6,cop1,cop2,cop3,cop4,cop5,sa1,sa2,sa3,sa4,la1,la2,la3,la4,la5,la6,4);
                                    if(cop4==100){cout<<"Cop 4 has reached the exit! Bad guy is trapped! COP WINS!"<<endl;break;}
                                    else if(cop4==badguy){cout<<"Cop 4 has caught the bad guy, COP WINS!"<<endl;break;}
                                }
                            else if(y==6)
                                {
                                    copm(5,cop5);
                                    position(2,cop5,s1,s2,s3,s4,l1,l2,l3,l4,l5,l6,cop1,cop2,cop3,cop4,cop5,sa1,sa2,sa3,sa4,la1,la2,la3,la4,la5,la6,5);
                                    if(cop5==100){cout<<"Cop 5 has reached the exit! Bad guy is trapped! COP WINS!"<<endl;break;}
                                    else if(cop5==badguy){cout<<"Cop 5 has caught the bad guy, COP WINS!"<<endl;break;}
                                    y=0;
                                }
                            y++;
                        }break;
            }if(side==1){cout<<"You were the Cop"<<endl;}
             else if(side==2){cout<<"You were the bad guy"<<endl;}
        }
    return 0;
}
