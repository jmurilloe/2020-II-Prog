#include <iostream>

const int a = 20;

void print_message (int a) // se declara la funcion print_message que retorna void y recibe int = a;

int main (void)
{
    int a = 12;
    std::cout << "Direccion de a en main: " << &a << std::endl;
    print_message(a);
    return 0;
}

//Implementacion de la funcion print_message
void print_message (int a)

{
    std::cout << "Hello World!\n";
    std::cout << "Parametro a:\n" << a << "\n"; 
    std::cout << "Direccion de a en print: " << &a << std::endl;
}

//se menciona el uso de variables locales y globales. EL profesor dice que
//prefiere las locales. Aun asi, para declarar una variable "constante" global (que no
//modifica a lo largo del codigo de la forma const (tipo) (nombre)
