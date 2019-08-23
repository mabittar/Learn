#include <stdio.h>
#include <iostream>


int main(void){
    // Here your code !
    char A, B, C;
    A = B = C = 0;
    std::cout << "Entre com tres caracteres: \n";
    std::cin >> A;
    std::cin >> B;
    std::cin >> C;    
    
    std::cout << "Os caracteres em ordem inversa: \n";
    std::cout<< "%s, %s, %s" %(A,B,C);
    
}
