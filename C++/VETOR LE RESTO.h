#include <iostream>
#include <string>
using namespace std;


 int a[10];
  int b[10];
  int I;
  
int main()
{
 
  cout << "Info 10 valores inteiros: \n";
  
  for (I = 0; I <=9; I++)
  {
   cin >> a[I];
   b[I] = a[I]%3;
  }

cout << "Vetor lido: \n";
for (I=0; I <=9 ; I++)
{
 cout << b[I] <<" \n";   
    
}

system ("pause");
return 0;

}