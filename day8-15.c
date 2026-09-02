/*DAY 8
Q15. Uppercase, Lowercase, Digit or Special Character*/

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch >= 'A' && ch <= 'Z')
        printf("Uppercase alphabet");
    else if (ch >= 'a' && ch <= 'z')
        printf("Lowercase alphabet");
    else if (ch >= '0' && ch <= '9')
        printf("Digit");
    else
        printf("Special character");

    return 0;
}

//Q16. Largest of Three Numbers

#include <stdio.h>

int main()
{
    int a, b, c, largest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
        largest = a;
    else if (b >= a && b >= c)
        largest = b;
    else
        largest = c;

    printf("Largest number = %d", largest);

    return 0;
}

/*DAY 9
Q17. Roots of a Quadratic Equation*/

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    float d, root1, root2;
    float realPart, imaginaryPart;

    printf("Enter a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    // Calculate discriminant
    d = b * b - 4 * a * c;

    if (d > 0)
    {
        // Two distinct real roots
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);

        printf("Two distinct real roots\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    }
    else if (d == 0)
    {
        // Two equal roots
        root1 = -b / (2 * a);

        printf("Two equal real roots\n");
        printf("Root 1 = Root 2 = %.2f\n", root1);
    }
    else
    {
        // Complex roots
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-d) / (2 * a);

        printf("Complex roots\n");
        printf("Root 1 = %.2f + %.2fi\n", realPart, imaginaryPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imaginaryPart);
    }

    return 0;
}

//Q18. Grade Based on Percentage

#include <stdio.h>

int main()
{
    float percentage;

    printf("Enter percentage: ");
    scanf("%f", &percentage);

    if (percentage >= 90 && percentage <= 100)
        printf("Grade A");
    else if (percentage >= 80)
        printf("Grade B");
    else if (percentage >= 70)
        printf("Grade C");
    else if (percentage >= 60)
        printf("Grade D");
    else if (percentage >= 0)
        printf("Grade F");
    else
        printf("Invalid percentage");

    return 0;
}

/*DAY 10
Q19. Classify a Triangle*/

#include <stdio.h>

int main()
{
    float a, b, c;

    printf("Enter three sides of triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    // Checking whether the sides can form a triangle
    if (a + b <= c || a + c <= b || b + c <= a)
    {
        printf("Invalid triangle");
    }
    else if (a == b && b == c)
    {
        printf("Equilateral triangle");
    }
    else if (a == b || b == c || a == c)
    {
        printf("Isosceles triangle");
    }
    else
    {
        printf("Scalene triangle");
    }

    return 0;
}

//Q20. Day of Week Using Switch-Case

#include <stdio.h>

int main()
{
    int day;

    printf("Enter day number (1-7): ");
    scanf("%d", &day);

    switch (day)
    {
        case 1:
            printf("Monday");
            break;

        case 2:
            printf("Tuesday");
            break;

        case 3:
            printf("Wednesday");
            break;

        case 4:
            printf("Thursday");
            break;

        case 5:
            printf("Friday");
            break;

        case 6:
            printf("Saturday");
            break;

        case 7:
            printf("Sunday");
            break;

        default:
            printf("Invalid day number");
    }

    return 0;
}

/*DAY 11
Q21. Month Name and Number of Days*/

#include <stdio.h>

int main()
{
    int month;

    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    switch (month)
    {
        case 1:
            printf("January - 31 days");
            break;

        case 2:
            printf("February - 28 or 29 days");
            break;

        case 3:
            printf("March - 31 days");
            break;

        case 4:
            printf("April - 30 days");
            break;

        case 5:
            printf("May - 31 days");
            break;

        case 6:
            printf("June - 30 days");
            break;

        case 7:
            printf("July - 31 days");
            break;

        case 8:
            printf("August - 31 days");
            break;

        case 9:
            printf("September - 30 days");
            break;

        case 10:
            printf("October - 31 days");
            break;

        case 11:
            printf("November - 30 days");
            break;

        case 12:
            printf("December - 31 days");
            break;

        default:
            printf("Invalid month number");
    }

    return 0;
}

//Q22. Profit or Loss Percentage

#include <stdio.h>

int main()
{
    float cp, sp, profit, loss, percentage;

    printf("Enter cost price and selling price: ");
    scanf("%f %f", &cp, &sp);

    if (sp > cp)
    {
        profit = sp - cp;
        percentage = (profit / cp) * 100;

        printf("Profit = %.2f\n", profit);
        printf("Profit Percentage = %.2f%%", percentage);
    }
    else if (cp > sp)
    {
        loss = cp - sp;
        percentage = (loss / cp) * 100;

        printf("Loss = %.2f\n", loss);
        printf("Loss Percentage = %.2f%%", percentage);
    }
    else
    {
        printf("No Profit, No Loss");
    }

    return 0;
}

/*DAY 12
Q23. Library Fine*/

#include <stdio.h>
int main()
{
    int days;
    int fine;

    printf("Enter number of late days: ");
    scanf("%d", &days);

    if (days <= 5)
    {
        fine = days * 2;
        printf("Fine = Rs. %d", fine);
    }
    else if (days <= 10)
    {
        fine = (5 * 2) + ((days - 5) * 4);
        printf("Fine = Rs. %d", fine);
    }
    else if (days <= 30)
    {
        fine = (5 * 2) + (5 * 4) + ((days - 10) * 6);
        printf("Fine = Rs. %d", fine);
    }
    else
    {
        printf("Membership Cancelled");
    }

    return 0;
}

//Q24. Electricity Bill

#include <stdio.h>

int main()
{
    int units;
    float bill;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    if (units <= 100)
    {
        bill = units * 5;
    }
    else if (units <= 200)
    {
        bill = (100 * 5) + ((units - 100) * 7);
    }
    else if (units <= 300)
    {
        bill = (100 * 5) + (100 * 7) + ((units - 200) * 10);
    }
    else
    {
        bill = (100 * 5) + (100 * 7) + (100 * 10)
             + ((units - 300) * 12);
    }

    printf("Electricity Bill = Rs. %.2f", bill);

    return 0;
}

/*DAY 13
Q25. Basic Calculator Using Switch-Case*/

#include <stdio.h>

int main()
{
    float a, b;
    char operator;

    printf("Enter expression (example: 10 + 5): ");
    scanf("%f %c %f", &a, &operator, &b);

    switch (operator)
    {
        case '+':
            printf("Result = %.2f", a + b);
            break;

        case '-':
            printf("Result = %.2f", a - b);
            break;

        case '*':
            printf("Result = %.2f", a * b);
            break;

        case '/':
            if (b != 0)
                printf("Result = %.2f", a / b);
            else
                printf("Division by zero is not allowed.");
            break;

        case '%':
            printf("Modulo operator is only applicable to integers.");
            break;

        default:
            printf("Invalid operator");
    }

    return 0;
}

//Q26. Print Numbers from 1 to n

#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter n: ");
    scanf("%d", &n);

    // Loop from 1 to n
    for (i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }

    return 0;
}

/*DAY 14
Q27. Sum of First n Odd Numbers*/

#include <stdio.h>

int main()
{
    int n, i, odd, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        odd = 2 * i - 1;
        sum = sum + odd;
    }

    printf("Sum of first %d odd numbers = %d", n, sum);

    return 0;
}

//Q28. Product of Even Numbers from 1 to n

#include <stdio.h>

int main()
{
    int n, i;
    long long product = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i += 2)
    {
        product = product * i;
    }

    printf("Product of even numbers = %lld", product);

    return 0;
}

/*DAY 15
Q29. Factorial of a Number*/

#include <stdio.h>

int main()
{
    int n, i;
    long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Factorial is not defined for negative numbers.");
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            factorial = factorial * i;
        }

        printf("Factorial = %lld", factorial);
    }

    return 0;
}

//Q30. Reverse a Number

#include <stdio.h>

int main()
{
    int n, digit, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        // Extract last digit
        digit = n % 10;

        // Add digit to reversed number
        reverse = reverse * 10 + digit;

        // Remove last digit
        n = n / 10;
    }

    printf("Reversed number = %d", reverse);

    return 0;
}