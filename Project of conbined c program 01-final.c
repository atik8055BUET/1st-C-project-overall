/*"""Program details"""
    programmer  : MD. Atikul Islam
    Instructor  : MD. Imran Mostofa
    program time: Approximately 15 hours
==>NOTE:All the Program is written by programmer.This program does not copy
a single line from any where.In some program,Programmer has developed some logic
and you can under this logic easily
self made logic:
1)  For GCD calculation of n number
2)  For LCM calculation of n number
3)  For making head tail game
4)  For toss n times
5)  For playing tic tac toe game

This program can perform the following program:
1)General calculation like +,-,*,/
        1)Addition
        2)Subtraction
        2)Subtraction
        3)Multiplication
        3)Multiplication
        4)Division
        5)Division with module
        6)Sum of n number
        7)product of n number
2)Temperature calculation cel.kel.fer.
        1)c to f
        2)c to k
        3)f to c
        4)f to k
        5)k to c
        6)k to f
3)Series calculation like factorial
        1)Sum of Numbers
        2)Sum of positive Numbers
        3)Sum of negative Numbers
        4)Factorial
        5)Print Numbers
4)GCD & LCM calculation
        1)Define GCD of n numbers
        2)Define LCM of n numbers
5)Play a game or toss!
        1)play a game
        2)You can toss n time
        3)play can head-tail with computer
        4)play tic tac toe game
6)Other short program
        1)check prime number:
        2)print prime number:
OK,All about the program.Now see my program and calculate which you need!
*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
int ttt_start,ttt_endround;
int ttt_i,ttt_j,ttt_p=0;
char ttt_a[9]={'1','2','3','4','5','6','7','8','9'};
char name1[25];
char name2[25];
int readrule;
char program_pass[15]={"1100"},pre_program_pass[15],password_test=0;
int ttt_input()
{
        if(ttt_start%2!=0)
        {
            printf("\nEnter the position number for ('x') for %s=",name1);
        }
        else
        {
            printf("\nEnter the position number for ('o') for %s=",name2);
        }
        scanf("%d",&ttt_p);
        ttt_p=ttt_p-1;
        if(ttt_start==1||ttt_start==3||ttt_start==5||ttt_start==7||ttt_start==9)
        {
            ttt_a[ttt_p]='x';
        }
        if(ttt_start==2||ttt_start==4||ttt_start==6||ttt_start==8)
        {
            ttt_a[ttt_p]='o';
        }
        return 0;
}
int ttt_draw()
{
        for(ttt_i=1;ttt_i<=7;ttt_i=ttt_i+1)
        {
            for(ttt_j=1;ttt_j<=7;ttt_j=ttt_j+1)
            {
                if((ttt_i==1||ttt_i==7)&&(ttt_j==1||ttt_j==2||ttt_j==4||ttt_j==6||ttt_j==7))
                {
                    printf(" ");
                }
                else if((ttt_j==1||ttt_j==7)&&(ttt_i==2||ttt_i==4||ttt_i==6))
                {
                   printf(" ");
                }
                else if((ttt_j==2||ttt_j==4||ttt_j==6)&&(ttt_i==2||ttt_i==4||ttt_i==6))
                {
                    printf("%c",ttt_a[ttt_p]);
                    ttt_p=ttt_p+1;
                }
                else if((ttt_i==1||ttt_i==2||ttt_i==3||ttt_i==4||ttt_i==5||ttt_i==6||ttt_i==7)
                        &&(ttt_j==3||ttt_j==5))
                {
                    printf("|");
                }
                else
                {
                    printf("-");
                }
            }
            printf("\n");
        }
        return 0;
}
double scin(double numbervalue)
{
    double answer=0;
    while(numbervalue>=10)
    {
        numbervalue=numbervalue/10;
        answer=answer+1;
    }
    return answer;
}
main()
{
    for(;;)
    {
    system("cls");
    if(password_test!=0)
    {
        printf("\t\t\t\t\tWrong password!!!");
    }
            printf("Please Input Password:");
            scanf(" %s",pre_program_pass);
            password_test=strcmp(pre_program_pass,program_pass);

    if(password_test==0)
    {
    system("cls");
    //Introducing with program
    int loop_i;
    for(loop_i=1;;loop_i=loop_i+1)
    {
        system("cls");
        if(loop_i<2)
        {
            printf("Welcome to my program");
        }
        if(loop_i>=2)
        {
            printf("Welcome again to my program");
        }
    printf("\n\nHere you can do this function that are given below.");
    printf("\n1)General calculation like +,-,*,/");
    printf("\n2)Temperature calculation cel.kel.fer.");
    printf("\n3)Series calculation like factorial");
    printf("\n4)GCD & LCM calculation");
    printf("\n5)Play a game or toss!");
    printf("\n6)Other short program");
    printf("\nWrite the corresponding number that you wanted to do\n");
    //choosing the corresponding number program
    int road;
    printf("option inputed=");
    scanf("\t %d",&road);
    if(road==1)
    {
        //General calculation program code
        system("cls");
        printf("Under general calculation you can do:");
        printf("\n\t1)Addition");
        printf("\n\t2)Subtraction");
        printf("\n\t3)Multiplication");
        printf("\n\t4)Division");
        printf("\n\t5)Division with module");
        printf("\n\t6)Sum of n number");
        printf("\n\t7)product of n number");
        printf("\n\tWrite the corresponding number that you wanted to do");
        //choosing option program
        int road1;
        printf("\noption inputed=");
        scanf("\n\t%d",&road1);
        float gen1,gen2,gen;
        //taking number for add,subs,mult,div
        if(road1==1)
        {
            //addition program
            printf("\n\tEnter two values only\n");
        printf("value inputed=");
        scanf("\t%f",&gen1);
        printf("\nvalue inputed=");
        scanf("\t%f",&gen2);
            gen=gen1+gen2;
            printf("\n\t\tThe result is=%f",gen);
        }
        else if(road1==2)
        {
            //Subtraction program
            printf("\n\tEnter two values only\n");
        printf("value inputed=");
        scanf("\t%f",&gen1);
        printf("\nvalue inputed=");
        scanf("\t%f",&gen2);
            gen=gen1-gen2;
            printf("\n\t\tThe result is=%f",gen);
        }
        else if(road1==3)
        {
            //Multiplication program
            printf("\n\tEnter two values only\n");
        printf("value inputed=");
        scanf("\t%f",&gen1);
        printf("\nvalue inputed=");
        scanf("\t%f",&gen2);
            gen=gen1*gen2;
            printf("\n\t\tThe result is=%f",gen);
        }
        else if(road1==4)
        {
            //Division program
            printf("\n\tEnter two values only\n");
        printf("value inputed=");
        scanf("\t%f",&gen1);
        printf("\nvalue inputed=");
        scanf("\t%f",&gen2);
            gen=gen1/gen2;
            printf("\n\t\tThe result is=%f",gen);
        }
        else if(road1==5)
        {
            //Division with module program
            printf("\n\tEnter two values only\n");
        printf("value inputed=");
        scanf("\t%f",&gen1);
        printf("\nvalue inputed=");
        scanf("\t%f",&gen2);
            gen=(int)(gen1/gen2);
            printf("\n\t\tDivision=%f",gen);
            int mod;
            mod=(int)gen1%(int)gen2;
            printf("\n\t\tModule=%d",mod);
        }
        else if(road1==6)
        {
            long int n_sum[31],n_n,n_i,total_sum=0;
            printf("\nhow many number=");
            scanf("%ld",&n_n);
            for(n_i=1;n_i<=n_n;n_i=n_i+1)
            {
                printf("\nvalue inputed=");
                scanf("\t%ld",&n_sum[n_i]);
                total_sum=total_sum+n_sum[n_i];
            }
            printf("\n\t\tThe result is=%ld",total_sum);
        }
        else if(road1==7)
        {
            long int ns_sum[31],ns_n,ns_i,total_product=1;
            printf("\nhow many number=");
            scanf("%ld",&ns_n);
            for(ns_i=1;ns_i<=ns_n;ns_i=ns_i+1)
            {
                printf("\nvalue inputed=");
                scanf("\t%ld",&ns_sum[ns_i]);
                total_product=total_product*ns_sum[ns_i];
            }
            printf("\n\t\tThe result is=%ld",total_product);
        }
        else
        printf("\n\t\tWRONG INPUT!!!");
    }
    else if(road==2)
    {
        //temperature calculation
        system("cls");
        printf("Here \"c\" stands for celcius & \"f\" stands for farenhight & \"k\"stands for kelvin");
        printf("\n1)c to f");
        printf("\n2)c to k");
        printf("\n3)f to c");
        printf("\n4)f to k");
        printf("\n5)k to c");
        printf("\n6)k to f");
        printf("\nWrite the corresponding number that you wanted to do");
        int road2;
        printf("\noption inputed=");
        scanf("%d",&road2);
        if(road2==1)
        {
            printf("\nEnter the Temperature=");
            float temp1,temp;
            scanf("\n%f",&temp1);
          temp=(float)((9.0/5.0)*temp1)+32.0;
          printf("\nThe result of temperture is %f",temp);
        }
        else if(road2==2)
        {
            printf("\nEnter the Temperature=");
            float temp1,temp;
            scanf("\n%f",&temp1);
            temp=temp1+273.0;
            printf("\nThe result of temperture is %f",temp);
        }
        else if(road2==3)
        {
            printf("\nEnter the Temperature=");
            float temp1,temp;
            scanf("\n%f",&temp1);
            temp=(float)(5.0/9.0)*(temp1-32.0);
            printf("\nThe result of temperture is %f",temp);
        }
        else if(road2==4)
        {
            printf("\nEnter the Temperature=");
            float temp1,temp;
            scanf("\n%f",&temp1);
            temp=(float)(5.0/9.0)*(temp1-32.0)+273.0;
            printf("\nThe result of temperture is %f",temp);
        }
        else if(road2==5)
        {
            printf("\nEnter the Temperature=");
            float temp1,temp;
            scanf("\n%f",&temp1);
            temp=temp1-273.0;
            printf("\nThe result of temperture is %f",temp);
        }
        else if(road2==6)
        {
            printf("\nEnter the Temperature=");
            float temp1,temp;
            scanf("\n%f",&temp1);
            temp=(float)(9.0/5.0)*(temp1-273.0)+32.0;
            printf("\nThe result of temperture is %f",temp);
        }
        else
            printf("wrong input!!!");
    }
    //let's start series calculation
    else if(road==3)
    {
        system("cls");
        printf("Here you can:");
        printf("\n1)Sum of Numbers");
        printf("\n2)Sum of positive Numbers");
        printf("\n3)Sum of negative Numbers");
        printf("\n4)Factorial");
        printf("\n5)Print Numbers");
        printf("\nWrite the corresponding number that you wanted to do");
        int road3;
        printf("\noption inputed=");
        scanf("%d",&road3);
        int s=0,i;
        if(road3==1)
        {
            printf("\nEnter the value of \"n\"=");
            int ser1,ser;
            scanf("%d",&ser1);
            printf("\nThe result is=");
            for(i=0;i<=ser1;i=i+1)
            {
                s=s+i;
            }
            printf("%d",s);

        }
        else if(road3==2)
        {
            printf("\nEnter the value of \"n\"=");
            int ser1,ser;
            scanf("%d",&ser1);
            printf("\nThe result is=");
            for(i=0;i<=ser1;i=i+2)
            {
                s=s+i;
            }
            printf("%d",s);
        }
        else if(road3==3)
        {
            printf("\nEnter the value of \"n\"=");
            int ser1,ser;
            scanf("%d",&ser1);
            printf("\nThe result is=");
            for(i=1;i<=ser1;i=i+2)
            {
                s=s+i;
            }
            printf("%d",s);
        }
        else if(road3==4)
        {
            printf("\nEnter the value of \"n\"=");
            int ser1,ser;
            scanf("%d",&ser1);
            double s1=1;
            for(i=1;i<=ser1;i=i+1)
            {
                s1=s1*i;
            }
            printf("\nThe result is=");
            double power_s1=0;
            power_s1=scin(s1);
            //power_s1=(int)power_s1;
            s1=(s1)/(pow(10,power_s1));
            printf("%lf x 10^%0.0lf",s1,power_s1);
        }
        else if(road3==5)
        {
            printf("\nEnter the value of \"n\"=");
            int ser1,ser;
            scanf("%d",&ser1);
            printf("\nThe result is=");
            for(i=0;i<=ser1;i=i+1)
            {
                printf("\t%d",i);
            }
            printf("%d",s);
        }
        else
            printf("\nWrong input");

    }
    else if(road==4)
    {
        //GCD & LCMcalculation
        system("cls");
        printf("\n1)Define GCD of n numbers");
        printf("\n2)Define LCM of n numbers");
        int road4;
        printf("\nWrite the corresponding number that you wanted to do");
        printf("\noption inputed=");
        scanf("%d",&road4);
        //gcd for n number
        if(road4==1)
        {
                int gcd_a[20],gcd_n,gcd_i,gcd_product=1,gcd,gcd_j,gcd_x;
        printf("\nHere you can calculate gcd for n number");
        printf("\nHow many numbers to calculate:");
        scanf("%d",&gcd_n);
        //taking number
        for(gcd_i=1;gcd_i<=gcd_n;gcd_i=gcd_i+1)
        {
            printf("\nEnter the number:");
            scanf("%d",&gcd_a[gcd_i]);
            gcd_product=gcd_product*gcd_a[gcd_i];
        }
        int gcd_min;
        gcd_min=gcd_a[1];
        for(gcd_i=2;gcd_i<=gcd_n;gcd_i=gcd_i+1)
        {
            if(gcd_min>gcd_a[gcd_i])
            {
                gcd_min=gcd_a[gcd_i];
            }
        }
        for(gcd_i=1;gcd_i<=gcd_min;gcd_i=gcd_i+1)
        {
            for(gcd_j=1;gcd_j<=gcd_n;gcd_j=gcd_j+1)
            {
                gcd_x=gcd_a[gcd_j]%gcd_i;
                if(gcd_x!=0)
                {
                    break;
                }
                else if(gcd_x==0 && gcd_j==gcd_n)
                {
                    gcd=gcd_i;
                }

            }
        }
        printf("\ngcd is=%d\n\n\n",gcd);
        }
        //lcm
        else if(road4==2)
        {
                int lcm_a[20],lcm_n,lcm_i,lcm_product=1,lcm,lcm_j,lcm_x;
        printf("\nHere you can calculate lcm for n number");
        printf("\nHow many numbers to calculate:");
        scanf("%d",&lcm_n);
        //taking number
        for(lcm_i=1;lcm_i<=lcm_n;lcm_i=lcm_i+1)
        {
            printf("\nEnter the number:");
            scanf("%d",&lcm_a[lcm_i]);
            lcm_product=lcm_product*lcm_a[lcm_i];
        }
        //minimum number
        int lcm_min;
        lcm_min=lcm_a[1];
        for(lcm_i=2;lcm_i<=lcm_n;lcm_i=lcm_i+1)
        {
            if(lcm_min>lcm_a[lcm_i])
            {
                lcm_min=lcm_a[lcm_i];
            }
        }
        //maximum number
        int lcm_max;
        lcm_max=lcm_a[1];
        for(lcm_i=2;lcm_i<=lcm_n;lcm_i=lcm_i+1)
        {
            if(lcm_max<lcm_a[lcm_i])
            {
                lcm_max=lcm_a[lcm_i];
            }
        }
        //finding lcm
        for(lcm_i=lcm_product;lcm_i>=lcm_min;lcm_i=lcm_i-1)
        {
            for(lcm_j=1;lcm_j<=lcm_n;lcm_j=lcm_j+1)
            {
                lcm_x=(lcm_i)%(lcm_a[lcm_j]);
                if(lcm_x==0)
                {
                    if(lcm_j==lcm_n)
                    {
                        lcm=lcm_i;
                    }
                }
                else
                {
                    break;
                }
            }
        }
        printf("\nLCM is=%d\n\n\n",lcm);
        }
        else
            printf("\nWrong Input!!!");
    }
    else if(road==5)
    {
        //program of play game and tossing
        system("cls");
        printf("\tHere you can:");
        printf("\n\t1)play a game of identify number.");
        printf("\n\t2)You can toss n time");
        printf("\n\t3)play head-tail with computer");
        printf("\n\t4)play tic tac toe game");
        printf("\n\tWrite the corresponding number that you wanted to do");
        //choosing option program
        int road5;
        printf("\noption input=");
        scanf("\n\t%d",&road5);

        if(road5==1)
        {//program of identifying game
            system("cls");
            int fav1,fav2,fav,maxfav,minfav,number,rnumber;
    //printf("\n");
    //scanf("\n%d");
    //taking number
    printf("Hello!Let's play a game together of number identification.");
    printf("\n1)Read rules.(recommended)");
    printf("\n2)start game.");
    printf("\noption input=");
    scanf("%d",&readrule);
    if(readrule==1)
    {
    printf("Rules:\n\tAt first, you should give two number.");
    printf("\n\tThen, Computer will remind a number between your two number.");
    printf("\n\tThen, You will get get 5 times to gauss the number.");
    printf("\n\t**If you can correctly gauss the number in 5 times then you will win.");
    printf("\n\t**Else Computer will show his number.");
    }
    system("pause");
    int round;
     for(round=1;;round=round+1)
    {

        if(round>=2)
        {
            printf("\n\n\n\nlet's play another game!");
        }
    printf("\nAt first,say your two favourite number.");
    printf("\nfavorite no 1 is=");
    scanf("%d",&fav1);
    printf("\nfavorite no 2 is=");
    scanf("%d",&fav2);
    //identify min max number
    if(fav1>fav2)
        {
            maxfav=fav1;
            minfav=fav2;
        }
    else
        {   maxfav=fav2;
            minfav=fav1;
        }
    fav=maxfav-minfav+1;
    printf("\nI have a number in my mind between %d to %d.",maxfav,minfav);
    printf("\nCan you guass the number?Let's guass it!");

    //generate random number




    srand(time(NULL));
    rnumber=(rand()%fav)+minfav;
    int start,endstart=5;
    //loop for round(1-n)
    for(start=1;start<=endstart;start=start+1)
    {

    printf("\nguass number=");
    scanf("%d",&number);


    //condition
    if(number==rnumber)
  {
      printf("\t\tYou win.Best of luck!");
      break;
  }
  else if(number>rnumber)
  {
      printf("\t\tYour number is greater than my number");
      if(start==5)
        printf("\n\t\aMy number was=%d",rnumber);
  }
  else if(rnumber>number)
  {
      printf("\t\tYour number is smaller than my number");
      if(start==5)
        printf("\n\t\aMy number was=%d",rnumber);
  }
    number=0;
    }
    rnumber=0;
    int exitgame;
    printf("\nDo you to want play again.if you want write \"0\" else anynumber :");
    scanf("%d",&exitgame);
    if(exitgame==0)
        continue;
    else
        break;
    }
   printf("\n\n\t\t\t\t\tLet's end for today\n\n\n\n");
        }
        else if(road5==2)
        {
            system("cls");
            int toss;
    srand(time(NULL));
    long int toss_n,toss_i,head=0,tail=0;
    printf("Welcome to the world of tossing. Let's start a bit! Are you ready!!!!!");
    printf("Rules:\n\tAt first, you should give a number that how much times computer will toss.");
    printf("\n\tThen, Computer will toss n times.");
    printf("\n\tThen, computer will show the result that,");
    printf("\n\t**How many times times \"Head\" arise");
    printf("\n\t**And how many times times \"Tail\" arise\n");
    system("pause");
    while(1)
    {
    printf("\n\tEnter the number toss=");
    scanf("%ld",&toss_n);
    for(toss_i=1;toss_i<=toss_n;toss_i=toss_i+1)
    {
    toss=rand()%2;
    if(toss==1)
        head=head+1;
    else
        tail=tail+1;
    }
    printf("\nThe number of Head is=%ld",head);
    printf("\nThe number of tail is=%ld",tail);
    head=0,tail=0;
    int exittoss;
    printf("\nDo you to want toss again.if you want write \"0\" else write \"any number\":");
    scanf("%d",&exittoss);
    if(exittoss==0)
        continue;
    else
        break;
    }
        }
    else if(road5==3)
    {
        system("cls");
        int rnum,num,n,i,mscore=0,cscore=0;
        char faketoss;
        int ctoss=0,toss,mtoss=1;
        srand(time(NULL));
    printf("Here you can play head tail");
    printf("\n1)Read rules.(recommended)");
    //printf("\n");
    printf("\n2)start game.");
    printf("\noption input=");
    scanf("%d",&readrule);
    if(readrule==1)
    {
    printf("Rules:\n\tHead-tail is a game that looks like a cricket game.");
    printf("\n\tAt first, you should toss with computer that who will bat first and who will ball first.");
    printf("\n\tWhose who win the toss,will \"bat\" first and another will \"ball\" first.");
    printf("\n\tThen,The batsman will give a number and also the baller will give a number.");
    printf("\n\t**if the both number is same than the batsman will be \"out\".");
    printf("\n\t**Else the batsman will get run.");
    //printf("\n\t");
    printf("\n\tThe batsman will get 5 ball to bat. and then the target will be set.");
    printf("\n\tThen the baller will bat in the same way.he should score bigger than target.");
    printf("\n\t**if He can across the target he will win.");
    printf("\n\t**Else He will loss the game.");
    }
    system("pause");
    printf("\nlet's start.");
    system("pause");
    system("cls");
    //try to make toss
    levelfaketoss:
    printf("let's toss.\nEnter head/tail.\nIf head click\"h\",If tail click\"t\"");
    printf("\ntoss= ");
    scanf(" %c",&faketoss);
    if(faketoss=='h'||faketoss=='t')
    {
    toss=rand()%2;
    if(toss==1)
    {
    printf("\nYou have winned toss!\nClick to start.");
    system("pause");
    system("cls");
    printf("let's start with you.");
    //user input
    for(i=1;i<=6;i=i+1)
    {
        levelnum1:
        printf("\n\n(%d) input number=",i);
        scanf("%d",&num);
        if(num>6)
        {
            printf("\nWrong input//Cheat");
            goto levelnum1;
        }
        //genarate random number
        {
            levelrnum1:
            rnum=rand()%7;
            if(rnum==0)
            {
                goto levelrnum1;
            }
        }
        if(num==rnum)
        {
            printf("\nYou OUT!");
            {
              break;
            }

        }
        else
        {
            mscore=mscore+num;
        }
        {
        system("cls");
        printf("You input=%d",num);
        printf("\nComputer input=%d",rnum);
        printf("\nyour score is=%d",mscore);
        }
        rnum=0;
        num=0;

        //system("cls");
    }

    printf("\nFinal score:");
    printf("\nYour final score is=%d",mscore);
    printf("\nClick any button");
    system("pause");
    system("cls");
    printf("Let's start with computer");
    //computer input
    for(i=1;i<=6;i=i+1)
    {
        //system("cls");
        levelnum2:

        printf("\ntarget=%d",mscore);
        printf("\n\n(%d) gaussing number=",i);
        scanf("%d",&num);
        if(num>6)
        {
            printf("\nWrong input//Cheat");
            goto levelnum2;
        }
        //genarate random number
        {
            levelrnum2:
            rnum=rand()%7;
            if(rnum==0)
            {
                goto levelrnum2;
            }
        }
        if(num==rnum)
        {
            printf("\ncomputer OUT!");

            {
              break;
            }
        }
        else
        {
            cscore=cscore+rnum;
        }


        {system("cls");
        printf("You input=%d",num);
        printf("\nComputer input=%d",rnum);
        printf("\ncomputer'c score is=%d",cscore);
        }
        rnum=0;
        num=0;
        if(cscore>mscore)
        {
            break;
        }
    }

    printf("\nFinal score:");
    printf("\nComputer's final score is=%d",cscore);
    printf("\nClick any button");
    system("pause");
    system("cls");
    printf("Final score:");
    printf("\nYour final score is=%d",mscore);
    printf("\nComputer's final score is=%d",cscore);
    if(mscore>cscore)
    {
        printf("\n\t\t\tYou win!!\n\n\n\n\n");
    }
    else if(cscore>mscore)
    {
        printf("\n\t\t\tcomputer win!!\n\n\n\n\n");
    }
    else
    {
        printf("\n\t\t\tMatch draw!!\n\n\n\n\n");
    }

    }

    else if(toss==0)
    {



        printf("\nYou have lossed toss!\nClick to start.");
        system("pause");
        system("cls");
        printf("let's start with computer.");
    //user input
    for(i=1;i<=6;i=i+1)
    {
        levelnum3:
        printf("\n\n(%d) gaussing number=",i);
        scanf("%d",&num);
        if(num>6)
        {
            printf("\nWrong input//Cheat");
            goto levelnum3;
        }
        //genarate random number
        {
            levelrnum3:
            rnum=rand()%7;
            if(rnum==0)
            {
                goto levelrnum3;
            }
        }
        if(num==rnum)
        {
            printf("\nComputer OUT!");

            {
              break;
            }
        }
        else
        {
            cscore=cscore+rnum;
        }

        {system("cls");
        printf("You input=%d",num);
        printf("\nComputer input=%d",rnum);
        printf("\nComputer's score is=%d",cscore);
        }
        rnum=0;
        num=0;
        //system("cls");
    }
    printf("\nFinal score:");
    printf("\nComputer's final score is=%d",cscore);
    printf("\nClick any button");
    system("pause");
    system("cls");
    printf("Let's start with you.");
    //computer input
    for(i=1;i<=6;i=i+1)
    {
        //system("cls");
        levelnum4:

        printf("\ntarget=%d",mscore);
        printf("\n\n(%d) input number=",i);
        scanf("%d",&num);
        if(num>6)
        {
            printf("\nWrong input//Cheat");
            goto levelnum4;
        }
        //genarate random number
        {
            levelrnum4:
            rnum=rand()%7;
            if(rnum==0)
            {
                goto levelrnum4;
            }
        }
        if(num==rnum)
        {
            printf("\nyou OUT!");

            {
              break;
            }
        }
        else
        {
            mscore=mscore+num;
        }


        {system("cls");
        printf("You input=%d",num);
        printf("\nComputer input=%d",rnum);
        printf("\nyour score is=%d",mscore);
        }
        rnum=0;
        num=0;
        if(cscore<mscore)
        {
            break;
        }
    }
    printf("\nFinal score:");
    printf("\nYour final score is=%d",mscore);
    printf("\nClick any button");
    system("pause");
    system("cls");
    printf("Final score:");
    printf("\nYour final score is=%d",mscore);
    printf("\nComputer's final score is=%d",cscore);
    if(mscore>cscore)
    {
        printf("\n\t\t\tYou win!!\n\n\n\n\n");
    }
    else if(cscore>mscore)
    {
        printf("\n\t\t\tcomputer win!!\n\n\n\n\n");
    }
    else
    {
        printf("\n\t\t\tMatch draw!!\n\n\n\n\n");
    }







    }
    }
    else
    {
        printf("\nWrong Input!");
        goto levelfaketoss;
    }
    }
    else if(road5==4)
    {
        system("cls");
            printf("\n1)Read rules.");
    //printf("\n");
    printf("\n2)start game.");
    printf("\noption input=");
    scanf("%d",&readrule);
    if(readrule==1)
    {
    printf("\nIf you don't know about this game game then go to you tube.");
    printf("\nIt's a most popular game that you may play in childhood.");
    printf("\nI will don't tell about this game.");
    printf("\nIf you start the game then you can understand about the game.");
    }
        printf("Enter 1st player name:");
    scanf(" %s",name1);
    printf("\nEnter 2nd player name:");
    scanf(" %s",name2);
    printf("\nWelcome %s and %s in the game of tic tac toe.\n Let's start.",name1,name2);
    system("pause");
    while(1)
    {
    for(ttt_start=1;ttt_start<=9;ttt_start=ttt_start+1)
    {
        system("cls");
        ttt_draw();
        ttt_input();
        ttt_p=0;
        {   //condition to break
            if((ttt_a[0]=='x'&&ttt_a[1]=='x'&&ttt_a[2]=='x')||(ttt_a[3]=='x'&&ttt_a[4]=='x'&&ttt_a[5]=='x')||(ttt_a[6]=='x'&&ttt_a[7]=='x'&&ttt_a[8]=='x')
            ||(ttt_a[0]=='x'&&ttt_a[3]=='x'&&ttt_a[6]=='x')||(ttt_a[1]=='x'&&ttt_a[4]=='x'&&ttt_a[7]=='x')||(ttt_a[2]=='x'&&ttt_a[5]=='x'&&ttt_a[8]=='x')
            ||(ttt_a[0]=='x'&&ttt_a[4]=='x'&&ttt_a[8]=='x')||(ttt_a[2]=='x'&&ttt_a[4]=='x'&&ttt_a[6]=='x'))
                {
                    system("cls");
                    ttt_draw();
                    break;
                }

            else if((ttt_a[0]=='o'&&ttt_a[1]=='o'&&ttt_a[2]=='o')||(ttt_a[3]=='o'&&ttt_a[4]=='o'&&ttt_a[5]=='o')||(ttt_a[6]=='o'&&ttt_a[7]=='o'&&ttt_a[8]=='o')
            ||(ttt_a[0]=='o'&&ttt_a[3]=='o'&&ttt_a[6]=='o')||(ttt_a[1]=='o'&&ttt_a[4]=='o'&&ttt_a[7]=='o')||(ttt_a[2]=='o'&&ttt_a[5]=='o'&&ttt_a[8]=='o')
            ||(ttt_a[0]=='o'&&ttt_a[4]=='o'&&ttt_a[8]=='o')||(ttt_a[2]=='o'&&ttt_a[4]=='o'&&ttt_a[6]=='o'))
                {
                    system("cls");
                    ttt_draw();
                    break;
                }
        }
    }

{
            //Result of ttt
        if((ttt_a[0]=='x'&&ttt_a[1]=='x'&&ttt_a[2]=='x')||(ttt_a[3]=='x'&&ttt_a[4]=='x'&&ttt_a[5]=='x')||(ttt_a[6]=='x'&&ttt_a[7]=='x'&&ttt_a[8]=='x')
        ||(ttt_a[0]=='x'&&ttt_a[3]=='x'&&ttt_a[6]=='x')||(ttt_a[1]=='x'&&ttt_a[4]=='x'&&ttt_a[7]=='x')||(ttt_a[2]=='x'&&ttt_a[5]=='x'&&ttt_a[8]=='x')
        ||(ttt_a[0]=='x'&&ttt_a[4]=='x'&&ttt_a[8]=='x')||(ttt_a[2]=='x'&&ttt_a[4]=='x'&&ttt_a[6]=='x'))
       {
           printf("\n\t\t\t\a %s is Winner\n",name1);
       }

    else if((ttt_a[0]=='o'&&ttt_a[1]=='o'&&ttt_a[2]=='o')||(ttt_a[3]=='o'&&ttt_a[4]=='o'&&ttt_a[5]=='o')||(ttt_a[6]=='o'&&ttt_a[7]=='o'&&ttt_a[8]=='o')
    ||(ttt_a[0]=='o'&&ttt_a[3]=='o'&&ttt_a[6]=='o')||(ttt_a[1]=='o'&&ttt_a[4]=='o'&&ttt_a[7]=='o')||(ttt_a[2]=='o'&&ttt_a[5]=='o'&&ttt_a[8]=='o')
    ||(ttt_a[0]=='o'&&ttt_a[4]=='o'&&ttt_a[8]=='o')||(ttt_a[2]=='o'&&ttt_a[4]=='o'&&ttt_a[6]=='o'))
       {
           printf("\n\t\t\t\a %s is Winner\n",name2);
       }
       else
       {
           printf("\n\t\t\t\a Match draw\n");
       }
       printf("\nDo you want to continue?if you want,write any number.or if you want exit write \"0\".What do you want:");
    int ttt_endround;
    scanf("%d",&ttt_endround);
    if(ttt_endround==0)
        break;
    else
        {
            ttt_a[0]='1';
            ttt_a[1]='2';
            ttt_a[2]='3';
            ttt_a[3]='4';
            ttt_a[4]='5';
            ttt_a[5]='6';
            ttt_a[6]='7';
            ttt_a[7]='8';
            ttt_a[8]='9';
            ttt_p=0;
        }

}
    }
    printf("\nThanks %s and %s",name1,name2);
    }
    else
    {
        system("cls");
        printf("wrong Input!!");
    }
    }

    else if(road==6)
    {
        //write other program
        int road6;
        system("cls");
        printf("here you can do:");
        printf("\n1)check prime number");
        printf("\n2)print prime number upto n");
        printf("\n3)print prime number between range");
        printf("\noption inputed=");
        scanf("\n\t%d",&road6);
        if(road6==1)
        {
    //check prime number
        system("cls");
        long int prime_n,p_i,p_x;
    //printf("\n");
    printf("Enter the number:");
    scanf("%ld",&prime_n);
    for(p_i=2;p_i<prime_n;p_i=p_i+1)
    {
        p_x=prime_n%p_i;
        if(p_x==0)
        {
            break;
        }
    }
    if(p_x!=0)
    {
        printf("\n%ld is a prime number.",prime_n);
    }
    else
    {
        printf("\n%ld is not a prime number.",prime_n);
    }
    }
        else if(road6==2)
        {
            system("cls");
    printf("print prime number upto n.");
    long int prime_np,p_ip,p_xp,p_jp,p_conut=0;
    //printf("\n");
    printf("Enter the value of n:");
    scanf("%ld",&prime_np);
    printf("\nPrime numbers are:\n");
    for(p_jp=2;p_jp<=prime_np;p_jp=p_jp+1)
    {
        for(p_ip=2;p_ip<p_jp;p_ip=p_ip+1)
        {
            p_xp=p_jp%p_ip;
            if(p_xp==0)
            {
                break;
            }
        }
        if(p_jp==2)
        {
            printf("\t%ld",p_jp);
            p_conut=p_conut+1;
        }
        if(p_xp!=0)
        {
            printf("\t%ld",p_jp);
            p_conut=p_conut+1;
        }
    }
    printf("\nTotal prime number between 0-%ld is=%ld",prime_np,p_conut);
    }
        else if(road6==3)
        {
            system("cls");
    printf("print prime number Between Range.");
    long int prime_np1,prime_np2,p_ip,p_xp,p_jp,p_conut=0;
    //printf("\n");
    printf("\nEnter the range starting number(small number):");
    scanf("%ld",&prime_np1);
    printf("Enter the range ending number(Big number):");
    scanf("%ld",&prime_np2);
    if(prime_np1>prime_np2)
    {
        int prime_np_temp;
        prime_np_temp=prime_np2;
        prime_np2=prime_np1;
        prime_np1=prime_np_temp;
    }
    printf("\nPrime Numbers are:\n");
    for(p_jp=prime_np1;p_jp<=prime_np2;p_jp=p_jp+1)
    {
        for(p_ip=2;p_ip<p_jp;p_ip=p_ip+1)
        {
            p_xp=p_jp%p_ip;
            if(p_xp==0)
            {
                break;
            }
        }
        if(p_jp==2)
        {
            printf("\t%ld",p_jp);
            p_conut=p_conut+1;
        }
        if(p_xp!=0)
        {
            printf("\t%ld",p_jp);
            p_conut=p_conut+1;
        }
    }
    printf("\nTotal prime number between %ld-%ld is=%ld",prime_np1,prime_np2,p_conut);
        }
        else
        {
            printf("\nWrong Input!");
        }
    }
    else
        {   system("cls");
            printf("\aWRONG INPUT!!!");}
        {
        int exit;
        printf("\n\n\nwrite any number to continue whole program or write \"0\" to exit.");
        printf("\noption Inputed=");
        scanf("%d",&exit);
        if(exit==0)
            break;
        else
            continue;
        printf("\nthanks\n\n\n\n\n\n\n\n\n\n\n\n");
        system("pause");
        }
    }
    break;
    }
    }
}


