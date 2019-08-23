#include <cstdlib>
#include <iostream>
#include <string>


using namespace std;

int main(int argc, char *argv[])

{
  int MAT[5][5],L,C;
  int VET[5] = {0,0,0,0,0}; //como a variavel acumula valor deve ser zerada antes
   
      cout << "informe 25 valores : \n";
  
      for (L = 0; L < 5; L++) //entrada de dados na matriz
      for (C = 0; C < 5; C++)
        {
             cin >> MAT[L][C]; 
          
          if ( L == C ) //lê a diagonal e escreve no vetor
          VET[L] = MAT [L][C];
        }
         for (L = 0; L < 5; L++) //entrada de dados no vetor
         for (C = 0; C < 5; C++) 
              {
                
              }
   
   
   
 cout << " Matriz Original: \n"; //saída de dados na 1a matriz
    for (L=0; L<5 ; L++)
    for (C=0; C < 5 ; C++)
            {
                cout << MAT[L][C] <<" \t";   
            }  
 
 cout  << "\n Vetor: \n"; //saída de dados no vetor

    for (L=0; L < 5; L++)
            
            {
     
                cout << VET[L] << " \t";
			}
 
system("PAUSE");
return EXIT_SUCCESS;
}

