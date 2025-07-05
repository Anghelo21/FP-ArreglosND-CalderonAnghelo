#include <iostream>
using namespace std;

int main(){
	int n, num;
	bool encontrado;
	cout<<"Ingrese el tamaño de la matriz cuadrada:"<<endl;
	cin>>n;
	int matriz[n][n];
	cout<<"Ingrese los valores para la matriz:"<<endl;
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			cin>>matriz[i][j];
		}
	}
	cout<<"Matriz ingresada:"<<endl;
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"Digite el valor que desea buscar de la matriz: ";
	cin>>num;
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			if (num==matriz[i][j]){
				cout<<"El valor "<<num<<" se encuentra en la fila "<<i<<", columna "<<j<<endl;
				encontrado=true;
			}
		}
	}
	if (!encontrado){
		cout<<"Valor no encontrado"<<endl;
	}
	return 0;
}
