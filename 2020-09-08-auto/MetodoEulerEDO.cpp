#include <iostream>
#include<cmath>

int main ()
{
    int n, x=0;
    long double h, x0, y0;

    std::cout << "Please enter the number of steps (n):" << std::endl;
    std::cin >> n;
    std::cout << "Please enter your step proximity (h):" << std::endl;
    std::cin >> h;
    std::cout << "Please enter your independent variable for IVP (x0):" << std::endl;
    std::cin >> x0;
    std::cout << "Please enter you dependent variable for IVP (y0):" << std::endl;
    std::cin >> y0;  
    std::cout << "The points (xn, yn) Euler's method has developed, are:" << std::endl;
    
    while (x<=n)
    {

        std::cout << "(x" << x << ", y" << x << ") = "  << "(" << x0 << ", " << y0 << ")" << std::endl;
        y0 += (h*(3+x0-y0));
        x++;
        x0 += h;

    }
    return 0;
}    
