#include <iostream>
using namespace std;

int main(){
	int max, min;
	int matriz[4][4];
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
	max=matriz[0][0];
	min=matriz[0][0];
	for (int i=0; i<4; i++){
		for (int j=0; j<4; j++){
			if(max<matriz[i][j]){
				max=matriz[i][j];
			}
			if(min>matriz[i][j]){
				min=matriz[i][j];
			}
		}
	}
	cout<<endl;
	for (int i=0; i<4; i++){
		for (int j=0; j<4; j++){
			if (max==matriz[i][j]){
				cout<<"El valor maximo "<<max<<" se encuentra en la fila "<<i<<", columna "<<j<<endl;
			}
		}
	}
	cout<<endl;
	for (int i=0; i<4; i++){
		for (int j=0; j<4; j++){
			if (min==matriz[i][j]){
				cout<<"El valor minimo "<<min<<" se encuentra en la fila "<<i<<", columna "<<j<<endl;
			}
		}
	}
	return 0;
}
