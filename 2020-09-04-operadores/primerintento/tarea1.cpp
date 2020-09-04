#include <iostream>
#include <cmath>

int main (void)
{
    int suma = 0;
    int n = 0;
    while ( n <=100)
    {
        if ( n%2 == 0 )
        {
            suma += n;
        }
        n++;
    };
    std::cout << suma << "\n";
    return 0;
}
    
