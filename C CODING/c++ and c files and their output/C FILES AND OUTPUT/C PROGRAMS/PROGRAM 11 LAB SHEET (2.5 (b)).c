/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <conio.h>

int main()
{
    int n;
 
   printf("Enter an integer\n");
   scanf("%d",&n);
 
   if ( n & 1 == 1 )
      printf("Odd\n");
   else
      printf("Even\n");

    return 0;
}
