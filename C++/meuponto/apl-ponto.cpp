# include <iostream>
# include "meuponto.h"
using namespace std;

int main() {
	
     float x,y;
     Ponto* p = pto_cria(2.0,1.0);
     pto_acessa (p, &x, &y);
     cout<<"Coordenadas do ponto: x = "<<x<<" e y = "<<y<<"\n";
     pto_libera(p);
	
     cout<<"Informe as coordenadas do primeiro ponto:\n";
     cin>>x>>y;
     Ponto* p1 = pto_cria(x,y);
     pto_acessa(p1,&x,&y);
     
     cout<<"Coordenadas do ponto p1: x = "<<x<<" e y = "<<y<<"\n";
	 cout<<"Informe as coordenadas do segundo ponto:\n";
     cin>>x>>y;
     Ponto* p2 = pto_cria(x,y);
     pto_acessa(p2,&x,&y);
     
     cout<<"Coordenadas do ponto p2: x ="<<x<<" e y = "<<y<<"\n";
     cout<<"Distãncia entre os pontos p1 e p2: "<<pto_distancia(p1,p2)<<"\n";
     pto_libera(p1);
                 pto_libera(p2);
                 system ("pause");      


return 0;
}
