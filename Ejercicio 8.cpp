#include <iostream>
using namespace std;

int main(){
	int arriba=0;
	int abajo=4;
	int izquierda=0;
	int derecha=4;
	int matriz[5][5];
	cout<<"Ingrese los valores para la matriz:"<<endl;
	for (int i=0; i<5; i++){
		for (int j=0; j<5; j++){
			cin>>matriz[i][j];
		}
	}
	cout<<"Matriz ingresada:"<<endl;
	for (int i=0; i<5; i++){
		for (int j=0; j<5; j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"Recorrido en espiral de la matriz:"<<endl;
	while(arriba<=abajo && izquierda<=derecha){
		for (int i=izquierda; i<=derecha; i++){
			cout<<matriz[arriba][i]<<" ";
		}
		arriba++;
		for (int i=arriba; i<=abajo; i++){
			cout<<matriz[i][derecha]<<" ";
		}
		derecha--;
		for (int i=derecha; i>=izquierda; i--){
			cout<<matriz[abajo][i]<<" ";
		}
		abajo--;
		for (int i=abajo; i>=arriba; i--){
			cout<<matriz[i][izquierda]<<" ";
		}
		izquierda++;
	}
	return 0;
}
