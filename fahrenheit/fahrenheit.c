#include <stdio.h>
int main(int argc, char const *argv[])
{
    /* code */

    float fahr, celsius;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("Fahrenheit\tCelsius\n");

    while (fahr <= 300)
    {
        celsius = 5 * (fahr - 32) / 9;
        printf("%3.0f\t%3.3f\n", fahr, celsius);
        fahr = fahr + step;
    }

    return 0;
}
