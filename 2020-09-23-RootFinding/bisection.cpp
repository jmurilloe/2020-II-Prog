#include <iostream>
#include <cmath>

using fptr = double (double);
double f(double x);
double bisection (double xl, double xu, double eps, fptr fun);

int main (int argc, char **argv)
{

    std::cout.precision(15); std::cout.setf(std::ios::scientific);
    double xl = 1;
    double xu = 20.0;
    double eps = 1.0e-5;
    
    double xroot = bisection(xl, xu, eps, f);
    std::cout << xroot << "\t" << f(xroot) << "\n";

    return 0;
    
}
double f(double x)
{
    const double G = 9.81;
    const double M = 68.1;
    const double T = 10.0;
    const double VF = 40.0;
    return (G*M*(1-std::exp(-x*T/M))/x)-VF;
}

double bisection (double xl, double xu, double eps, fptr fun)
{

    /* calcular xr = 0.5(xl+xu)
     if |f(xr)|< xr return xr;
     else if (f(xr)*f(xu)>0){
     xu=xr;
     else {xl=xr}
    */
    const int NITERMAX = 1000;
    double xr= 0;
    int niter = 0;
    while (niter <= NITERMAX)
    {
        xr = 0.5*(xu+xl);
        if (std::fabs(f(xr)) <= eps)
        {
            break;
        }
        else if (f(xr)*f(xu)>0)
        {
            xu=xr;
        }
        else {
            
            xl=xr;
        }
        niter++;
    }

    std::cout << "Bisection Info -> Niter: " << niter << "\n";
    
    return xr;
    
}
