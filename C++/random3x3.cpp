#include <iostream>
#include <stdlib.h>
#include<time.h> //para usar a função time(NULL)

using namespace std;

int contaZero(int mat[3][3])
{
		int cont = 0;
		
				for (int i = 0; i<3; i++)
					{
						for(int j = 0; j<3; j++)
							{
								if (mat [i][j] == 0)
								{
									cont++;
								}
							}
					}
		return cont;
}


int main()

{
	srand(time(NULL));
	int mat[3][3];
	for (int i = 0; i<3; i++){
		for(int j = 0; j<3; j++){
			
			mat[i][j] = rand()%101 - 50; //o número após o % representa o limite dos números aleatórios
			
			cout << mat[i][j] << " I ";
		}
		cout <<"\n";
	}


cout<< "\nConta zeros: " << contaZero(mat);

return 0;
	
}
