/*DAY 16
Q31. Decimal Number to Binary*/

#include <stdio.h>

int main()
{
    int n, remainder;
    long long binary = 0;
    long long place = 1;

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    if (n == 0)
    {
        printf("Binary = 0");
    }
    else
    {
        while (n > 0)
        {
            // Find remainder after division by 2
            remainder = n % 2;

            // Build binary number
            binary = binary + remainder * place;

            place = place * 10;

            n = n / 2;
        }

        printf("Binary = %lld", binary);
    }

    return 0;
}

//Q32. Check Whether a Number is Palindrome

#include <stdio.h>

int main()
{
    int n, original, digit, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n != 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    if (original == reverse)
        printf("%d is a palindrome.", original);
    else
        printf("%d is not a palindrome.", original);

    return 0;
}

/*DAY 17
Q33. Armstrong Number*/

#include <stdio.h>

int main()
{
    int n, original, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n != 0)
    {
        digit = n % 10;

        sum = sum + digit * digit * digit;

        n = n / 10;
    }

    if (sum == original)
        printf("%d is an Armstrong number.", original);
    else
        printf("%d is not an Armstrong number.", original);

    return 0;
}

//Q34. Check Whether a Number is Prime

#include <stdio.h>

int main()
{
    int n, i, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1)
    {
        isPrime = 0;
    }
    else
    {
        for (i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime == 1)
        printf("%d is a prime number.", n);
    else
        printf("%d is not a prime number.", n);

    return 0;
}

/*DAY 18
Q35. Print All Factors of a Number*/

#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factors of %d are: ", n);

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}

//Q36. HCF / GCD of Two Numbers

#include <stdio.h>

int main()
{
    int a, b, remainder;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Euclidean algorithm
    while (b != 0)
    {
        remainder = a % b;
        a = b;
        b = remainder;
    }

    printf("HCF (GCD) = %d", a);

    return 0;
}

/*DAY 19
Q37. LCM of Two Numbers*/

#include <stdio.h>

int main()
{
    int a, b, x, y, remainder, hcf, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    // Finding HCF using Euclidean algorithm
    while (y != 0)
    {
        remainder = x % y;
        x = y;
        y = remainder;
    }

    hcf = x;

    // Finding LCM
    lcm = (a * b) / hcf;

    printf("LCM = %d", lcm);

    return 0;
}

//Q38. Sum of Digits

#include <stdio.h>

int main()
{
    int n, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        // Extract last digit
        digit = n % 10;

        // Add digit to sum
        sum = sum + digit;

        // Remove last digit
        n = n / 10;
    }

    printf("Sum of digits = %d", sum);

    return 0;
}

/*DAY 20
Q39. Product of Odd Digits*/

#include <stdio.h>

int main()
{
    int n, digit;
    int product = 1;
    int found = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        // Extract last digit
        digit = n % 10;

        // Check whether digit is odd
        if (digit % 2 != 0)
        {
            product = product * digit;
            found = 1;
        }

        // Remove last digit
        n = n / 10;
    }

    if (found == 1)
        printf("Product of odd digits = %d", product);
    else
        printf("There are no odd digits.");

    return 0;
}

//Q40. 1's Complement of a Binary Number

#include <stdio.h>

int main()
{
    long long binary, digit;
    long long complement = 0;
    long long place = 1;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    while (binary != 0)
    {
        // Extract last digit
        digit = binary % 10;

        // Change 0 to 1 and 1 to 0
        if (digit == 0)
            digit = 1;
        else
            digit = 0;

        // Build the complemented number
        complement = complement + digit * place;

        place = place * 10;

        // Remove last digit
        binary = binary / 10;
    }

    printf("1's Complement = %lld", complement);

    return 0;
}
/*DAY 21
Q41. Swap First and Last Digit of a Number*/

#include <stdio.h>

int main()
{
    int n, original, first, last;
    int digits = 1;
    int power = 1;
    int middle, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    // Find the last digit
    last = n % 10;

    // Find the highest power of 10
    // and count the number of digits
    while (n >= 10)
    {
        n = n / 10;
        power = power * 10;
    }

    // First digit
    first = n;

    // If number has only one digit
    if (power == 1)
    {
        result = original;
    }
    else
    {
        // Remove first and last digit
        middle = (original % power) / 10;

        // Swap first and last digits
        result = last * power + middle * 10 + first;
    }

    printf("Number after swapping first and last digit = %d", result);

    return 0;
}

//Q42. Check Whether a Number is a Perfect Number

#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Find all proper factors
    for (i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }

    // Check whether sum of factors equals number
    if (sum == n && n > 0)
        printf("Perfect number");
    else
        printf("Not perfect number");

    return 0;
}

/*DAY 22
Q43. Check Whether a Number is a Strong Number*/

#include <stdio.h>

int main()
{
    int n, original, digit;
    int factorial, i;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n != 0)
    {
        // Extract the last digit
        digit = n % 10;

        // Calculate factorial of the digit
        factorial = 1;

        for (i = 1; i <= digit; i++)
        {
            factorial = factorial * i;
        }

        // Add factorial to sum
        sum = sum + factorial;

        // Remove the last digit
        n = n / 10;
    }

    // Compare sum with original number
    if (sum == original)
        printf("Strong number");
    else
        printf("Not strong number");

    return 0;
}

//Q44. Sum of Series

#include <stdio.h>

int main()
{
    int n, i;
    float sum = 0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            sum = sum + 1;
        }
        else
        {
            sum = sum + (float)(2 * i - 1) / (2 * i);
        }
    }

    printf("Approximate sum: %.1f", sum);

    return 0;
}