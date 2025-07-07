#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	srand(time(0));
	int posicion[8][2]={
		{-1, -1},
		{-1, 0},
		{-1, 1},
		{0, 1},
		{1, 1},
		{1, 0},
		{1, -1},
		{0, -1}
	};
	int localizador[10][10]={};
	int matriz[10][10];
	// Genera números entre 0 y 1, aleatoriamente, y los asigna a las posiciones de la matriz
	for (int i=0; i<10; i++){
		for (int j=0; j<10; j ++){
			matriz[i][j]=rand() % 2; 
		}
	}
	
	for (int i=0; i<10; i++){
		for (int j=0; j<10; j++){
			int minas=0;
			for (int k=0; k<8; k++){
				int ni=i+posicion[k][0];
				int nj=j+posicion[k][1];
				if (ni>=0 && ni<10 && nj>=0 && nj<10){
					if (matriz[ni][nj]==1){
						minas++;
					}
				}
			}
			localizador[i][j]=minas;
		}
	}
	// Muestra las matrices una al lado de la otra
	cout<<"  Matriz de minas \t  Matriz con la cantidad de minas"<<endl<<endl;
	for (int i=0; i<10; i++){
		for (int j=0; j<10; j ++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<"\t\t";
		for ( int j=0; j<10; j++){
			cout<<localizador[i][j]<<" ";
		}
		cout<<endl;
	} 
	return 0;
}
