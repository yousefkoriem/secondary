#include <math.h>
#include <stdio.h>

// Variables

double a;

// Functions
int gcfFinder(int a, int b);
int fraction(double a);
int shortform(int *a, int *b);

// Main Function

int main(void) {
    printf("Fraction");
    scanf("%lf", &a);
    fraction(a);
}

// Functions usage

int fraction(double a) {
    // converting decimal into fraction.

    int c = 10000;
    double b = (a - floor(a)) * c;
    int d = (int)floor(a) * c + (int)(b + .5f);

    while (1)
    {
        if (d % 10 == 0)
        {
            d = d / 10;
            c = c / 10;
        }
        else
            break;
    }
    int *i = &d;
    int *j = &c;
    int t = 0;
    while (t != 1)
    {
        int gcf = gcfFinder(d, c);
        if (gcf == 1)
        {
            printf("%d/%d\n", d, c);
            t = 1;
        }
        else
        {
            shortform(i, j);
        }
    }
    return 0;
}

int gcfFinder(int a, int b)
{ // gcf finder
    int gcf = 1;
    for (int i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcf = i;
        }
    }
    return gcf;
}

int shortform(int *a, int *b)
{
    for (int i = 2; i <= *a && i <= *b; i++)
    {
        if (*a % i == 0 && *b % i == 0)
        {
            *a = *a / i;
            *b = *b / i;
        }
    }
    return 0;
}