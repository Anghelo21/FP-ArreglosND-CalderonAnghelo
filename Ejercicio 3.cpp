#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Ingrese el tamaño de la matriz cuadrada: ";
	cin>>n;
	int matriz[n][n];
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			cout<<"Ingrese el valor para matriz["<<i+1<<"]["<<j+1<<"]: ";
			cin>>matriz[i][j];
		}
	}
	
	int DP=0;
	int DS=0;
	int pfila=0;
	int pcolumna=n-1;
	for (int i=0; i<n; i++){
		DS=DS+matriz[pfila][pcolumna];
		DP=DP+matriz[i][i];
		pfila++;
		pcolumna--;
	}
	
	cout<<"Suma de la diagonal principal\n";
	cout<<DP<<endl;
	cout<<"Suma de la diagonal secundaria\n";
	cout<<DS<<endl;
	cout<<"Contenido de la matriz:"<<endl;
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
