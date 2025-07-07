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
	int gen[10][10]={};
	int matriz[10][10]={};
	for (int i=0; i<10; i++){
		for (int j=0; j<10; j ++){
			matriz[i][j]=rand() % 2; 
		}
	}
	
	for (int i=0; i<10; i++){
		for (int j=0; j<10; j++){
			int vecino=0;
			for (int k=0; k<8; k++){
				int ni=i+posicion[k][0];
				int nj=j+posicion[k][1];
				if (ni>=0 && ni<10 && nj>=0 && nj<10){
					if (matriz[ni][nj]==1){
						vecino++;
					}
				}
			}
			if (matriz[i][j]==1 && vecino<2){
				gen[i][j]=0;
			} else if (matriz[i][j]==1 && (vecino==2 || vecino==3)){
				gen[i][j]=1;
			} else {
				gen[i][j]=0;
			}
			if (matriz[i][j]==0 && vecino==3){
				gen[i][j]=1;
			}
		}
	}
	
	cout<<"Tablero inicial: \t\tSegunda generacion:"<<endl<<endl;
	for (int i=0; i<10; i++){
		for (int j=0; j<10; j ++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<"\t\t";
		for ( int j=0; j<10; j++){
			cout<<gen[i][j]<<" ";
		}
		cout<<endl;
	} 
	return 0;
}
