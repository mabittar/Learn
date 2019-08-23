#include <iostream>
#include <string>
using namespace std;

int main()
{
  int MAT[4][5],L,C;
  
cout << "informe 20 valores : \n";  //entrada de dados na matriz
  
  for (L = 0; L < 4; L++)
    for (C = 0; C < 5; C++)
        {
             cin >> MAT[L][C];
  
        }

cout << " Matriz Original: \n"; //saída de dados na 1a matriz
    for (L=0; L<4 ; L++)
        for (C=0; C < 5 ; C++)
            {
                cout << MAT[L][C] <<" \t";   
    
            }

cout  << "\n Matriz Coluna por Coluna: \n"; //saída de dados na 2a matriz coluna por coluna

    for (C=0; C < 5; C++)
        for (L=0; L < 4 ; L++)
            {
                cout << MAT[L][C] << " \t";
            }

system ("pause");
return 0;

}