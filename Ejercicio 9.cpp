#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Ingrese el tamaño de su cuadrado latino:"<<endl;
	cin>>n;
	int aux[n][n]={};
	int matriz[n][n];
	cout<<"Su cuadrado latino:"<<endl;
	// Realiza el desplazamiento a la derecha pero comenzando con 1 y de forma descendente
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			matriz[i][j]=(i+n-j)%n+1;
		}
	}
	// Aplico transpuesta para que se muestre correctamente
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			aux[j][i]=matriz[i][j];
		}
	}
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			cout<<aux[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
