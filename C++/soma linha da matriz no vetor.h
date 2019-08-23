#include <iostream>
#include <string>
using namespace std;

int main()
{
  int MAT[3][4],L,C;
  int VET[3] = {0,0,0}; //como a variavel acumula valor deve ser zerada antes
  int i ;
  
  
  
cout << "informe 12 valores : \n";
  
  for (L = 0; L < 3; L++) //entrada de dados na matriz
    for (C = 0; C < 4; C++)
        {
             cin >> MAT[L][C];
               VET[L]  += MAT[L][C]; //soma linha
          
        }
   
  


cout << " Matriz Original: \n"; //saída de dados na 1a matriz
    for (L=0; L<3 ; L++)
        for (C=0; C < 4 ; C++)
            {
                cout << MAT[L][C] <<" \t";   
    
            }

cout  << "\n Vetor: \n"; //saída de dados no vetor

    for (i=0; i < 3; i++)
            
            {
     
                cout << VET[i] << " \t";
            }

system ("pause");
return 0;

}