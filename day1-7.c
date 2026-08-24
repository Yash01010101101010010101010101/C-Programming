/*DAY 1
Q1. Sum of Two Numbers*/
#include <stdio.h>

int main()
{
    int a, b, sum;

    // Taking input from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Calculating sum
    sum = a + b;

    // Displaying result
    printf("Sum = %d", sum);

    return 0;
}
/*Q2. Sum, Difference, Product and Quotient*/

#include <stdio.h>

int main()
{
    float a, b;

    // Taking two numbers as input
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    // Performing arithmetic operations
    printf("Sum = %.2f\n", a + b);
    printf("Difference = %.2f\n", a - b);
    printf("Product = %.2f\n", a * b);

    return 0;
}
/*DAY 2
Q3. Area and Perimeter of Rectangle*/

#include <stdio.h>

int main()
{
    float length, breadth, area, perimeter;

    // Taking length and breadth as input
    printf("Enter length and breadth: ");
    scanf("%f %f", &length, &breadth);

    // Calculating area and perimeter
    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("Area = %.2f\n", area);
    printf("Perimeter = %.2f\n", perimeter);

    return 0;
}

//Q4. Area and Circumference of Circle

#include <stdio.h>

int main()
{
    float radius, area, circumference;
    const float PI = 3.14159;

    // Taking radius as input
    printf("Enter radius: ");
    scanf("%f", &radius);

    // Calculating area and circumference
    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("Area = %.2f\n", area);
    printf("Circumference = %.2f\n", circumference);

    return 0;
}

/*DAY 3
Q5. Celsius to Fahrenheit*/

#include <stdio.h>

int main()
{
    float celsius, fahrenheit;

    // Taking temperature in Celsius
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Converting Celsius to Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    printf("Temperature in Fahrenheit = %.2f", fahrenheit);

    return 0;
}

/*Q6. Swap Two Numbers Using Third Variable*/
#include <stdio.h>

int main()
{
    int a, b, temp;

    // Taking input
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swapping using third variable
    temp = a;
    a = b;
    b = temp;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
/*DAY 4
Q7. Swap Without Third Variable*/

#include <stdio.h>

int main()
{
    int a, b;

    // Taking input
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swapping without third variable
    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}

//Q8. Sum of First n Natural Numbers

#include <stdio.h>

int main()
{
    int n, sum;

    // Taking n as input
    printf("Enter n: ");
    scanf("%d", &n);

    // Calculating sum
    sum = n * (n + 1) / 2;

    printf("Sum of first %d natural numbers = %d", n, sum);

    return 0;
}

/*DAY 5
Q9. Simple and Compound Interest*/

#include <stdio.h>
#include <math.h>

int main()
{
    float p, r, t;
    float simpleInterest, compoundInterest, amount;

    // Taking principal, rate and time
    printf("Enter principal, rate and time: ");
    scanf("%f %f %f", &p, &r, &t);

    // Calculating simple interest
    simpleInterest = (p * r * t) / 100;

    // Calculating compound amount
    amount = p * pow((1 + r / 100), t);

    // Calculating compound interest
    compoundInterest = amount - p;

    printf("Simple Interest = %.2f\n", simpleInterest);
    printf("Compound Interest = %.2f\n", compoundInterest);

    return 0;
}

//Q10. Convert Seconds to Hours:Minutes

#include <stdio.h>

int main()
{
    int totalSeconds, hours, minutes, seconds;

    // Taking total seconds
    printf("Enter time in seconds: ");
    scanf("%d", &totalSeconds);

    // Finding hours
    hours = totalSeconds / 3600;

    // Finding remaining seconds
    totalSeconds = totalSeconds % 3600;

    // Finding minutes
    minutes = totalSeconds / 60;

    // Finding remaining seconds
    seconds = totalSeconds % 60;

    printf("Time = %02d:%02d:%02d", hours, minutes, seconds);

    return 0;
}

/*DAY 6
Q11. Even or Odd*/

#include <stdio.h>

int main()
{
    int n;

    // Taking integer input
    printf("Enter an integer: ");
    scanf("%d", &n);

    // Checking divisibility by 2
    if (n % 2 == 0)
        printf("%d is even.", n);
    else
        printf("%d is odd.", n);

    return 0;
}

//Q12. Positive, Negative or Zero

#include <stdio.h>

int main()
{
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    // Nested if-else
    if (n >= 0)
    {
        if (n == 0)
            printf("The number is zero.");
        else
            printf("The number is positive.");
    }
    else
    {
        printf("The number is negative.");
    }

    return 0;
}

/*DAY 7
Q13. Leap Year*/

#include <stdio.h>

int main()
{
    int year;

    printf("Enter year: ");
    scanf("%d", &year);

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        printf("%d is a leap year.", year);
    else
        printf("%d is not a leap year.", year);

    return 0;
}

//Q14. Vowel or Consonant

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' ||
        ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' ||
        ch == 'O' || ch == 'U')
    {
        printf("%c is a vowel.", ch);
    }
    else
    {
        printf("%c is a consonant.", ch);
    }

    return 0;
}
