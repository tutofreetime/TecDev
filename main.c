#include<stdio.h>
#include<stdlib.h>

int fibo(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibo(n - 1) + fibo(n - 2);
}

int pgcd(int a,int b)
{
    if(b > a)
        return pgcd(b,a);
    else if(b==0)
        return a;
    else
        return pgcd(b,a%b);
}

void  printSpace(int n)
{
 int i;
 for(i=0;i<n;i++)
 printf(" ");

 return;
}

void  printStar(int n)
{
 int i;
 for(i=0;i<n;i++)
 printf("*");

 return;
}


void triangle(int n)
{
   int i,j;
   for(i=1;i <=n  ; i++)
   {
     printSpace(n-i);
     printAtar(i);
     printf("\n");
   }
 return;
}


int fibo(n)
{
    if (n = 0)
        return 0;
    else if (n = 1)
        return 1;
    else
        fibo(n - 1) + fibo(n - 2);
}

int main()
{

int a = 0;
int b=0;
int n=0;

printf("Tapez les entiers a b pour PGCD:");
scanf("%d %d",&a,&b);
printf("\nTapez un entier n pour le fibonacci :");
scanf("%d",&n);

printf("Le PGCD\(%d,%d\)=%d\n",a,b,pgcd(a,b));
printf("Et le nombre de fibo\(%d\) = %d\n",n,fibo(n));

triangle(n);

printf("\n");

return 0;
}
