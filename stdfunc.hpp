#include "header.hpp"

double add (double x, double y);
double substract (double x, double y);
double multiply (double x, double y);
double devide (double x, double y);
int mod (int x, int y);

double add(double x, double y)
{
    cout << "\nAnswer = " << x+y << "\n\n";
    return x+y;
}

double substract(double x, double y)
{
    cout << "\nAnswer = ";
    return x-y;

}

double devide(double x, double y)
{
    cout << "\nAnswer = " << x/y << "\n\n";
    return x/y;
}

double multiply(double x, double y)
{
    cout << "\nAnswer = " << x*y << "\n\n";
    return x*y;
}

int mod(int x, int y)
{
    cout << "\nAnswer = " << x%y << "\n\n";
    return x&y;
}
