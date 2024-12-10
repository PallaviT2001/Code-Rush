#include <stdio.h>

struct student{
    int id;
    float fees;
    char name[10];
    char contactnumber[10];
    double d;
};

int main()
{
    printf("%d\n",sizeof(int));
    printf("%d\n",sizeof(float));
    printf("%d\n",sizeof(char));
    printf("%d\n",sizeof(double));
    printf("%d\n",sizeof(void));

    printf("\n");//to print new line
    printf("%d\n",sizeof(struct student));

    printf("\n");
    printf("a=%llu\n",sizeof(5));
    printf("b=%llu\n",sizeof(9.8f));
    printf("c=%llu\n",sizeof(9.1));
    printf("d=%llu\n",sizeof('p'));
    printf("e=%llu\n",sizeof("Hello"));
    printf("f=%llu\n",sizeof(int*));
    printf("g=%llu\n",sizeof(char*));
    printf("h=%llu\n",sizeof(float*));
    printf("i=%llu\n",sizeof(double*));
    printf("j=%llu\n",sizeof(void*));

    return 0;
}
