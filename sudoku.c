/*
@autor:
 * César Villalobos
 * Estudiante: Ing.Sistemas UDI
 *29/09/2018
*/


#include <stdio.h>

int main(){
	int i, j, m=0, a, b, k,l,band=0;
	int v[9][9]={ 
	{ 2,2,5,9,3,8,4,6,7},
	{ 7,8,6,1,2,4,3,5,9},
	{ 9,3,4,6,5,7,2,8,1},
	{ 8,6,9,5,4,2,1,7,3},
	{ 1,4,3,7,8,6,5,9,2},
	{ 5,2,7,3,9,1,8,4,6},
	{ 6,7,2,4,1,5,9,3,8},
	{ 4,9,8,2,6,3,7,1,5},
	{ 3,5,1,8,7,9,6,2,4}
	};
	printf("Programa que comprueba el sudoku, se imprimiran alertas slo si hay datos erroneos\n");	
	
	//Filas
	for(i=0;i<9;i++){
		for(j=0;j<9;j++){
			b=v[i][j];
			for(k=j+1;k<9;k++){
				if(b==v[i][k]){
					band=1;		
				}
			}
		}
	}
	m=0;
	b=0;
	//Columnas
	for(i=0;i<9;i++){
		for(j=0;j<9;j++){
			b=v[j][i];
			for(k=j+1;k<9;k++){
				if(b==v[k][i]){
					band=1;
				}
			}
		}
	}
	m=0;
	b=0;
	//Primer cuadrante
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			b=v[i][j];
			for(k=i;k<3;k++){
				for(l=j+1;l<3;l++){
					if(b==v[k][l]){
						band=1;
					}
				}
			}
		}
	}
	//Segundo cuadrante
	for(i=0;i<3;i++){
		for(j=3;j<6;j++){
			b=v[i][j];
			for(k=i;k<3;k++){
				for(l=j+1;l<6;l++){
					if(b==v[k][l]){
						band=1;
					}
				}
			}
		}
	}
	//Tercer cuadrante
	for(i=0;i<3;i++){
		for(j=6;j<9;j++){
			b=v[i][j];
			for(k=i;k<3;k++){
				for(l=j+1;l<9;l++){
					if(b==v[k][l]){
						band=1;
					}
				}
			}
		}
	}
	//Cuarto cuadrante
	for(i=3;i<6;i++){
		for(j=0;j<3;j++){
			b=v[i][j];
			for(k=i;k<6;k++){
				for(l=j+1;l<3;l++){
					if(b==v[k][l]){
						band=1;
					}
				}
			}
		}
	}
	//Quinto cuadrante
	for(i=3;i<6;i++){
		for(j=3;j<6;j++){
			b=v[i][j];
			for(k=i;k<6;k++){
				for(l=j+1;l<6;l++){
					if(b==v[k][l]){
						band=1;
					}
				}
			}
		}
	}
	//Sexto cuadrante
	for(i=3;i<6;i++){
		for(j=6;j<9;j++){
			b=v[i][j];
			for(k=i;k<6;k++){
				for(l=j+1;l<9;l++){
					if(b==v[k][l]){
						band=1;
					}
				}
			}
		}
	}
	//Septimo cuadrante
	for(i=6;i<9;i++){
		for(j=0;j<3;j++){
			b=v[i][j];
			for(k=i;k<9;k++){
				for(l=j+1;l<3;l++){
					if(b==v[k][l]){
						band=1;
					}
				}
			}
		}
	}
	//Octavo cuadrante
	for(i=6;i<9;i++){
		for(j=3;j<6;j++){
			b=v[i][j];
			for(k=i;k<9;k++){
				for(l=j+1;l<6;l++){
					if(b==v[k][l]){
						band=1;
					}
				}
			}
		}
	}
	//Noveno cuadrante
	for(i=6;i<9;i++){
		for(j=6;j<9;j++){
			b=v[i][j];
			for(k=i;k<9;k++){
				for(l=j+1;l<9;l++){
					if(b==v[k][l]){
						band=1;
					}
				}
			}
		}
	}
	if(band==1){
		printf("Su sudoku es invalido");
	}
	else{
		printf("Su sudoku es valido");
	}
}
