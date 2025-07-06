#include <iostream>
using namespace std;

int main(){
	int matriz[4][4];
	int aux[4][4]={};
	int ref[4]={};
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
	// Calculo la transpuesta
	for (int i=0; i<4; i++){
		for (int j=0; j<4; j++){
			aux[j][i]=matriz[i][j];
		}
	}
	// Reflejo la transpuesta
	for (int j=0; j<2; j++){
		for (int i=0; i<4; i++){
			ref[i]=aux[i][j];
			aux[i][j]=aux[i][3-j];
			aux[i][3-j]=ref[i];
		}
	}
	cout<<"Matriz rotada 90 grados en sentido horario:"<<endl;
	for (int i=0; i<4; i++){
		for (int j=0; j<4; j++){
			cout<<aux[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
