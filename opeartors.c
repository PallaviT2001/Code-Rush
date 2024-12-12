#include<stdio.h>
#include "task.h"

void operators()
{
    // int a = 10;
    // printf("a = %d\n",++a);//a = 11
    // printf("a = %d\n",a++);//a = 11
    // printf("a = %d\n",a);//a = 12
    // printf("a = %d\n",--a);//a = 11
    // printf("a = %d\n",a--);//a = 11
    // printf("a = %d\n",a);//a = 10

    // int b = 5,c;
    // c = b++;
    // printf("%d\n",b);
    // c = ++b;
    // printf("%d",b);
    // return 0;

    // int b = 5;                    //undefined behaviour due to multiple unsequenced modifications of the variable b.
    // b = b++;
    // printf("%d\n",b);
    // b = ++b;
    // printf("%d",b);

    // int i = 1,2,3;//compile time error
    // printf("%d",i);


    /*int i = 3;
    printf("%d", (++i)++);//compile time error*/

    /*if(void)
    {
        printf("HII");
    }
    else
    {
        printf("Byyeee");
    }*/

    /*if(printf(""))
    {
        printf("hii\n");
    }
    else
    {
        printf("Byee\n");
    }*/

    /*if(function())
    {
        printf("hii\n");
    }
    else
    {
        printf("byee\n");
    }*/

    /*while(printf("M"))                 //output:MHi2 infinately
    {
        printf("%d\n",printf("Hi"));
        printf("%d\n",printf("\0"));
    }*/

    // while(printf('\0'))//output: 0 infinately
    // {
    //     printf("%d\n",printf("\0"));
    // }

    //int x = printf('\0');
    //printf("%d",x);

    // printf("%d\n",printf("H\0i"));//output:H1
    // printf("%d\n",printf("\0"));//output:0
    // printf("%d\n",printf('\0'));//output:-1

    // int *x = &5;
    // printf("%d",x);

    // int y;
    // int *x = & y;
    // printf("%u",x);

    // int y;
    // int *x = &y;
    // int * *z = &x;
    // printf("%u",z);

    // int a = 10;
    // printf("%d",++a++);

    // int a = 10;
    // ++++a;
    // printf("%d",a);

    // int g = 10;
    // printf("%d\n",++g-g++);
    // printf("%d\n",g);

    // int a=65;
    // char b=(char)a;
    // int d=(int)b;
    // printf("%c\n",a);
    // printf("%d\n",b);

    // int x=25;
    // int y=2;
        // x=x=>>y;//wrong syntax
        // printf("%d\n",x);
    // x=x>>=y;
    // printf("%d\n",x);
    //printf("%p\n",&x);



}
