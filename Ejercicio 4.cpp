#include <iostream>
using namespace std;

int main(){
	int f1, f2;
	int matriz[4][4];
	int aux[4]={};
	cout<<"Ingrese los valores para la matriz:"<<endl;
	for (int i=0; i<4; i++){
		for (int j=0; j<4; j++){
			cin>>matriz[i][j];
		}
	}
	cout<<"Matriz ingresada:"<<endl;
	for (int i=0; i<4; i++){
		for (int j=0; j<4; j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"Ingrese las filas que desea intercambiar:"<<endl;
	cout<<"Intercambiar fila... ";
	cin>>f1;
	cout<<"Con fila... ";
	cin>>f2;
	for (int j=0; j<4; j++){
		aux[j]=matriz[f1][j];
		matriz[f1][j]=matriz[f2][j];
		matriz[f2][j]=aux[j];
	}
	cout<<"Matriz con filas intercambiadas:"<<endl;
	for (int i=0; i<4; i++){
		for (int j=0; j<4; j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
