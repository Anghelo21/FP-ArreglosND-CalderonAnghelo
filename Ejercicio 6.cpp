#include <iostream>
using namespace std;

int main(){
	int matriz[6][6];
	int aux[6];
	cout<<"Ingrese los valores para la matriz:"<<endl;
	for (int i=0; i<6; i++){
		for (int j=0; j<6; j++){
			cin>>matriz[i][j];
		}
	}
	cout<<"Matriz ingresada:"<<endl;
	for (int i=0; i<6; i++){
		for (int j=0; j<6; j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}
	for (int j=0; j<3; j++){
		for (int i=0; i<6; i++){
			aux[i]=matriz[i][j];
			matriz[i][j]=matriz[i][5-j];
			matriz[i][5-j]=aux[i];
		}
	}
	cout<<"Matriz reflejada:"<<endl;
	for (int i=0; i<6; i++){
		for (int j=0; j<6; j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
