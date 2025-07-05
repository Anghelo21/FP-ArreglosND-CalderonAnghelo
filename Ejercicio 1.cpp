#include <iostream>
using namespace std;

const int MAX=20;

void pedirNumeros(int matriz[MAX][MAX], int n){
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			cin>>matriz[i][j];
		}
	}
}

void calcularMulti(int matrizA[MAX][MAX], int matrizB[MAX][MAX], int multi[MAX][MAX], int n){
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			for (int k=0; k<n; k++){
				multi[i][j]+=matrizA[i][k]*matrizB[k][j];
			}
		}
	}
}

void mostrarNumeros(int matrizA[MAX][MAX], int matrizB[MAX][MAX], int multi[MAX][MAX], int n){
	for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout<<matrizA[i][j]<<" ";
        }
        if(i==n/2)cout<<"x ";
        else cout<<"\t";
        for (int j=0; j<n; j++){
            cout<<matrizB[i][j]<<" ";
        }
        if(i==(n/2))cout<<"= ";
        else cout<<"\t";
        for (int j=0; j<n; j++){
            cout<<multi[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
	int n;
	cout<<"Ingrese el tamaño de las matrices CUADRADAS a multiplicar:"<<endl;
	cin>>n;
	int matrizA[MAX][MAX];
	int matrizB[MAX][MAX];
	int multi[MAX][MAX]={};
	cout<<"Ingrese los elementos de la matriz A:"<<endl;
	pedirNumeros(matrizA, n);
	cout<<"Ingrese los elementos de la matriz B:"<<endl;
	pedirNumeros(matrizB, n);
	calcularMulti(matrizA, matrizB, multi, n);
	cout<<"Resultado:"<<endl;
	mostrarNumeros(matrizA, matrizB, multi, n);
	return 0;
}
