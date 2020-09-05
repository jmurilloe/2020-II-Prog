#include <iostream>

int main ()
{
    int n; // se inicializa la variable que representa el numero a desarrollar
    std::cout << "Type a number to develop its Collatz sequence:"; //el usuario pone el numero;
    std::cin >> n; //Se asigna dicho numero a la variable n
    int x; // se inicializa la variable que contara el numero de pasos, y por
           // lo tanto el tamaño de la secuencia de Collatz
    while (n>1) { //se inicia el loop para enteros n mayores (estrictamente) que 1 
        
        if (n%2==0) //si el numero tiene modulo 2 0 es par, por lo que el nuevo n se calcula como n/2
        {
            n= n/2;
            std::cout << n << ", ";
        }
        
        else if (n%2==1) //si el numero tiene modulo 2 1 es impar, por lo que el nuevo n se calcula como 3n+1
        {
            n= (3*n)+1;
            std::cout << n << ", ";
        } //en ambos casos se imprime el n con el que sale del loop 
        x++; // x es un contador que cambia cada vez que se hace el loop
    }
    
    std::cout << "Where the Collatz sequence has " << x << " elements" << std::endl; //se imprime un texto donde se identifica cuantos numeros tuvo la secuencia hasta llegar a 1
                                                                                    //note que el loop se acaba cuando n <=1    
    
    return 0;
    
} //Como posible modificacion me gustaria poder ver mejor los numeros que conforman la secuencia pero por el momento no se como hacerlo
