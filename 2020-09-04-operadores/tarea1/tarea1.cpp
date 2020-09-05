#include <iostream>

int main ()
{
    int n;                                                                              // se declara la variable n 
    std::cout << "Type a number to develop its Collatz sequence:";                      // se le pide al usuario que digite el numero al que desea ver la secuencia
    std::cin >> n;                                                                      // se inicializa la variable con el valor que el usuario digito
    int x=1;                                                                            // se inicializa la variable x que contara las veces que se desarolla el loop, inicia en 1 para tener en cuenta la variable n como parte de su secuencia
                                                                                        
    std::cout << "The Collatz sequence for " << n << " is:" << std::endl;               // se explica que va a aparecer a continuacion la secuencia para el numero n
    if (n==1)                                                                           // se adiciona el caso particular n==1, donde su secuencia es unicamente el mismo
    {
        std::cout << n << ". " << std::endl;
    }
    while (n>1) {                                                                       // se inicia el loop. Por definicion la secuencia es para numeros naturales, pero para 0 tenemos una secuencia infinita, ya que 0 es par y 0/2 es cero
                                                                                        // que otra vez es par.

        x++;                                                                            // cada vez que se desarolla el loop, se anhade un elemento a la secuencia y aumenta el contador x
        if (n%2==0)                                                                     // si el numero tiene modulo 2 0 es par, por lo que el nuevo n se calcula como n/2
        {
            std::cout << n << ", ";            
            n= n/2;

        }
        
        else if (n%2==1)                                                                // si el numero tiene modulo 2 1 es impar, por lo que el nuevo n se calcula como 3n+1
        {
            std::cout << n << ", ";                                
            n= (3*n)+1;

        }                                                                               // en ambos casos se imprime el n al iniciar el loop

        if (n==1)                                                                       // se anhade el caso n==1 dentro del loop, para indicar la finalizacion del loop. Para ello se usa break
        {
            std::cout << n << ". " << std::endl;
            break;
        }
    }
    std::cout << "Where the Collatz sequence has " << x << " element(s)" << std::endl;  // se imprime un texto donde se expone x. Mostrando la cantidad de veces que se repitio el loop.
    
    return 0;
    
}
