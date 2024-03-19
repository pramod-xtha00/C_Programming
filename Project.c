

// WRITE A C PROGRAM TO PRINTF FOLLOWING OUTPUT
// Input a character:'A'
// Ascii value is 65.then find details of 65
// a. even of odd
// b. positive or negative
// c.find it's factors
// d. find factorial
// e. prime or not
// f. pallindrome or not
// g. fibnocii series upto the number
// h. check it is armstrong number or not
// i. convert this decimal value to binary



#include <stdio.h>
#include <math.h>
int main()
{

    char a;
    printf("Enter any character: ");
    scanf("%c", &a);
    printf("ASCII value of the %c is %d \n\n", a, a);

    odd_Even(a);

    positive_Negative(a);

    factors(a);

    prime(a);

    pallindrome(a);

    binary(a);

    armstrong(a);

    factorial(a);

    fibonacci(a);

    return 0;
}

//  ODD_EVEN

odd_Even(int a)
{

    if (a == 0)
    {
        printf("%d is Zero\n\n", a);
    }
    else if (a % 2 == 0)
    {
        printf("%d is Even number\n\n", a);
    }
    else
    {
        printf("%d is Odd number\n\n", a);
    }
    return 0;
}

//    POSITIVE_NEGATIVE

positive_Negative(int a)
{
    if (a < 0)
    {
        printf("%d is Negative number\n\n", a);
    }
    else if (a == 0)
    {
        printf("%d is Zero\n\n", a);
    }
    else
    {
        printf("%d is Positive number\n\n", a);
    }
    return 0;
}

//    FACTORS

factors(int a)
{
    printf("Factors of %d are :\t", a);

    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            printf("%d\t", i);
        }
    }
    printf("\n\n");
    return 0;
}

//    PRIME 0R NOT

int prime(int a)
{

    if (a <= 1)
    {
        printf("%d is not Prime number\n\n", a);
    }
    else
    {
        if (primeRecursion(a, 2))
        {
            printf("%d is Prime number\n\n", a);
        }
        else
        {
            printf("%d is not Prime number\n\n", a);
        }
    }
    return 0;
}
primeRecursion(int a, int i)
{
    if (a <= 2)
        return (a == 2) ? 1 : 0;

    if (a % i == 0)
        return 0;

    if (i * i > a)
        return 1;

    return primeRecursion(a, i + 1);
}

//      PALLINDROME OR NOT

pallindrome(int a)
{
    int original = a, rem, temp;
    if (a < 10 || a > 0)
    {
        printf("%d is not Pallindrome number\n\n", a);
    }
    else
    {
        rem = a % 10;
        temp = temp * 10 + rem;
        a /= 10;
        if (original == temp)
        {
            printf("%d is Pallindrome number\n\n", a);
        }
        else
        {
            printf("%d is not palindrome number\n\n", a);
        }
    }
    return 0;
}

//   Binary

binary(int a)
{

    int original = a;
    int b[32];
    int i = 0;
    while (a > 0)
    {
        b[i] = a % 2;
        a /= 2;
        i++;
    }
    printf("Binary number of %d is : ", original);
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", b[j]);
    }
    printf("\n\n");
}

//   Armstrong

armstrong(int a)
{
    int original = a, rem, n = 0;
    double result = 0.0;

    while (original != a)
    {
        original /= 10;
        ++n;
    }

    original = a;
    while (original != 0)
    {
        rem = original % 10;
        int power = 1;
        for (int i = 0; i < n; ++i)
        {
            power *= rem;
        }
        result += power;
        original /= 10;
    }
    if ((int)result == a)
        printf("%d is an Armstrong number.\n\n", a);

    else

        printf("%d is not an Armstrong number.\n\n", a);
}

//    FACTORIAL
factorial(long a)
{
    if (a < 0)
    {
        printf("Factorial is not defined for negative numbers\n\n");
    }
    else
    {
        printf("Factorial of %d = %d\n\n", a, factorialRecursion(a));
    }
    return 0;
}
factorialRecursion(long a)
{
    if (a >= 1)
    {
        return (a * factorialRecursion(a - 1));
    }
    else
    {
        return 1;
    }
}

//   FIBONACCI

fibonacci(int a)
{

    if (a <= 0)
    {
        printf("Invalid,Because %d is Negative number\n\n", a);
        return;
    }

    printf("Fibonacci series upto %d are:\n", a);
    for (int i = 0; i < a; i++)
    {
        printf("%d\t", fibonacciRecursion(i));
    }
}

fibonacciRecursion(int a)
{
    if (a <= 1)
    {
        return a;
    }
    else
    {
        return (fibonacciRecursion(a - 1) + fibonacciRecursion(a - 2));
    }
}
