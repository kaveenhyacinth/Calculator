#include "header.hpp"
#include "variable.hpp"
#include "stdfunc.hpp"


int main()
{
    cout << "\n********************************This is a basic console application calculator********************************\n";

  do
   {
       cout << "\nDo you want to continue? [y/n]: ";
       cin >> cont;

       if (cont == 'y')
       {
            cout << "\nEnter your  expression as [no1 operator no2] -> (x + y)\n\n";
            cin >> no1 >> operation >> no2;

           switch(operation)
           {
            case('+'):
                {
                    add(no1, no2);
                    break;
                }
            case('-'):
                {
                    substract(no1, no2);
                    break;
                }
            case('*'):
                {
                    multiply(no1, no2);
                    break;
                }
            case('/'):
                {
                    devide(no1, no2);
                    break;
                }
            case('%'):
                {
                    mod(no1, no2);
                    break;
                }
            default:
                cout << "\nOOPS! We are currently not supporting to this function.\n\n";
            }
       }
       else
       {
           exit(0);
           break;
       }

       i++;
   } while(i >0);


    return 0;
}
