#include<stdio.h>
int main()
{
    float degCelsius;
    float degFahrenheit;
    printf("Enter the value of temperature in fahrenheit: ");
    scanf("%2f",&degFahrenheit);
    degCelsius = (degFahrenheit - 32) * (5.0/9.0);
    printf("Temperature in Celsius is %.2f",degCelsius);
    return 0;
}