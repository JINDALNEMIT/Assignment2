                        A JOB READY BOOTCAMP IN C++,DSA And IOT
                                     ASSIGNMENT-2
                              Operators in C Language

1. WAP to print unit digit of given number.

#include<stdio.h>
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);

    printf("Unit Digit=%d",n%10);
    return 0;
}

2. WAP To print given number without its last number.

#include<stdio.h>
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);

    printf("Number Without Unit Digit=%d",n/10);
    return 0;
}

3. WAP To Swap Two values of Two int Variables

#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter The Value of a,b:");
    scanf("%d%d",&a,&b);

    temp=a;
    a=b;
    b=temp;
    printf("After Swapping Values=%d%d",a,b);
    return 0;
}

4. WAP To Swap Two values of Two int Variables without using a third Variable

#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter The Value of a,b:");
    scanf("%d%d",&a,&b);

    printf("After Swapping Values=%d%d",b,a);
    return 0;
}

5. WAP To input 3 Digit Number And Display Sum of Number on screen

#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter 3 Digit Number:");
    scanf("%d",&n);
    printf("Sum of Number =%d",n/100+n/10%10+n%10);
    return 0;
}

6. WAP Which Takes a Character as an input and display its ASCII Code.
#include<stdio.h>
int main()
{
    char character;
    printf("Enter Character:");
    scanf("%c",&character);

    printf("ASCII Code=%d",character);
    return 0;
}

7. WAP To Find the position of First 1 in LSB.

#include<stdio.h>
#include<math.h>


  unsigned int getFirstsetbitPos(int n)
  {
      return log2(n & -n)+1;
  }
  int main()
  {
      int n=12;
      printf("Enter n:");
      scanf("%d",&n);
      printf("%u",getFirstsetbitPos(n));
      getchar();
      return 0;
  }


8. WAP To Check Whether The Given Number Is Even Or Odd Using a Bitwise Operator
#include<stdio.h>
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);

    if(n & 1)
    {
        printf("%d is odd",n);
    }
    else
        printf("%d is even",n);
        return 0;
}

9. WAP To Print Size Of int,a float,a char,a double type Variable

#include<stdio.h>
int main()
{
    int intType;
    float floatType;
    char charType;
    double doubleType;

    printf("Size Of Int=%zu bytes\n",sizeof(intType));
    printf("Size Of float=%zu bytes\n",sizeof(floatType));
    printf("Size Of char=%zu bytes\n",sizeof(charType));
    printf("Size Of double=%zu bytes\n",sizeof(doubleType));
    return 0;
}

10. WAP To make the last digit of a number stored in the variable as Zero

#include<stdio.h>
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);

    printf("%d",n/10*10);
    return 0;
}

11. WAP TO input a number from the user and also input a digit.Append the digit in the number and print the resulting number.

#include<stdio.h>
int main()
{
    int n,d;
    printf("Enter n,d:");
    scanf("%d%d",&n,&d);

    printf("Resulting Number=%d",n*10+d);
    return 0;
}

12. Assume Price of 1 USD is INR 76.23. Write a Program To Take the amount in INR and convert it into USD.

#include<stdio.h>
int main()
{
    float USD,INR;
    printf("Enter Currency in INR:");
    scanf("%f",&INR);

    USD=INR/76.23;
    printf("USD=%f",USD);
    return 0;
}

13. WAP to take a 3 digit number from the user and rotate its digit By one position towards right.

#include<stdio.h>
int main()
{
    int n;
     printf("Enter n:");
     scanf("%d",&n);
     printf("After Rotation=%d",n/10+n%10*100);
     return 0;

}



