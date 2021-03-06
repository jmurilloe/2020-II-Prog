#include <iostream>
#include <cmath>

//calcular la derivada forward del sin
//graficar x \in [0, 2pi] y comparar errores

double f(double x);
double deriv_forward(double x, double h);


int main(int argc, char **argv)
{
    const double DX = 0.1;
    const double XMIN = 0.0;
    const double XMAX = 2*M_PI;
    
    const int N = (XMAX - XMIN)/DX;
    for (int ii = 0; ii < N; ++ii)
    {
        double x = XMIN + ii*DX;
        std::cout << x << "\t" <<  f(x) << "\t" <<  deriv_forward(x, DX)  << "\n";
    }
    
    return 0;
}

double f (double x)
    
{
    return std::sin(x);
    
}
double deriv_forward (double x, double h)
    
{
    return (f(x+h)-f(x))/h;
}
