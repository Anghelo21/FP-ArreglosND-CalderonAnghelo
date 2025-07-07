#include <iostream>
using namespace std;

int main(){
	int bosque[10][10]={};
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
	int matriz[10][10]={
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 1, 1, 0, 0, 0, 0, 0, 0, 0},
		{0, 1, 2, 0, 0, 0, 0, 0, 0, 0},
		{0, 2, 2, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 1, 1, 1, 0, 0, 0},
		{0, 0, 0, 0, 1, 2, 1, 0, 0, 0},
		{0, 0, 0, 0, 1, 1, 1, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
	};
	
	for (int i=0; i<10; i++){
		for (int j=0; j<10; j++){
			bosque[i][j]=matriz[i][j];
			if(matriz[i][j]==0){
				for (int k=0; k<8; k++){
					int ni=i+posicion[k][0];
					int nj=j+posicion[k][1];
					if (ni>=0 && ni<10 && nj>=0 && nj<10){
						if (matriz[ni][nj]==1){
							bosque[i][j]=1;
						}
					}
				}
			} else if(matriz[i][j]==1){
				bosque[i][j]=2;
			}
		}
	}
	cout<<"   Bosque inicial \t  Bosque despues de la propagacion"<<endl<<endl;
	for (int i=0; i<10; i++){
		for (int j=0; j<10; j ++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<"\t\t";
		for ( int j=0; j<10; j++){
			cout<<bosque[i][j]<<" ";
		}
		cout<<endl;
	} 
	return 0;
}
