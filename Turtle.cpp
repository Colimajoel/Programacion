using namespace std;
#include<iostream>

void Mueve(int M[][20],int);
int Menu();
void plumaArriba(int &pluma);
void plumaAbajo(int &pluma);
void mostrarGrafico(int M[][20],int );
void girarDerecha(int &direc,int &camino);
void girarIzquierda(int &direc,int &camino);
void avanzar(int M[][20], int, int &pluma, int direc, int &Col, int &Ren, int &camino);
void mostrarCor(int &Ren, int &Col);

int main(){
	int piso[20][20]={{0}}, Op;
	int pluma=0;
	int Columna=0,Renglon=0;
	char pos;
	int direc=1,camino=1;//Direccion, indica si va por columnas=-1 o renglones=1;
	do{
	    Op=Menu();
	    switch(Op){
			case 1:
				plumaArriba(pluma);
			break;
			case 2:
				plumaAbajo(pluma);
			break;
			case 3:
				girarDerecha(direc,camino);
			break;
			case 4:
				girarIzquierda(direc,camino);
			break;
			case 5: case 10:
				avanzar(piso,20,pluma,direc, Columna, Renglon,camino);
			break;
			case 6:
				mostrarGrafico(piso,20);
			break;
	  }
	}while(Op!=0);
	system("cls");
}


void Mueve(int M[][20],int ren){
	
}

int Menu(){
   int Op;
     cout<<"<<< 1 >>> Pluma arriba"<<endl<<"<<< 2 >>> Pluma abajo(Pintar)"<<endl<<"<<< 3 >>> Girar Derecha"<<endl<<"<<< 4 >>> Girar Izquierda"<<endl<<"<<< 5 >>> Avanzar"<<endl<<"<<< 6 >>> Mostrar"<<endl;
     cout<<"<<< 0 >>> Salir"<<endl;
     cin>>Op;
   return Op;
}

void plumaArriba(int &pluma){
	pluma=0;
	cout<<"Pluma arriba!"<<endl;
}

void plumaAbajo(int &pluma){
	pluma=1;
	cout<<"Pluma abajo!"<<endl;
}

void mostrarGrafico(int M[][20],int ren){
	for(int i=0;i<20;i++){
		for(int j=0;j<20;j++)
		    if(M[i][j]==1){
		    	cout<<"*";
			}
			else if(M[i][j]==0) 
			     cout<<" ";
	cout<<endl;	    
	}
}

void girarDerecha(int &direc,int &camino){
	if(direc==-1){
		 if (camino==1 ){  
		    direc = 1;
            camino = -1;
		}
    

    else{
	    direc = 1;
		camino=1;
	}
}

   else{
   	     if(camino==1){
            direc = -1;
            camino = 1;
        }
         else{
            direc=-1;
            camino=-1;
		}
   }
   cout<<"Giraste a la derecha"<<endl;
}


void girarIzquierda(int &direc,int &camino){
	if(direc==-1){
		 if ( camino==1 ){  
		    direc = 1;
            camino = 1;
		}
    }
    else{
	    direc = 1;
		camino=-1;
	}
}
   else{
   	     if(camino==1){
            direc = -1;
            camino = -1;
        }
         else{
            direc=-1;
            camino=1;
		}
   }
	cout<<"Girado a la izquierda!";
}
void avanzar(int M[][20], int ren, int &pluma, int direc, int &Col, int &Ren,int &camino){
	int avan;
	int stop;
	cout<<"Cuantas casillas a avanzar: "; 
	cin>>avan;
	if(direc==1){
		if(camino==1){
		  if(pluma==true){
			for(int i=0;i<avan;i++){
				Col++;
			    if(Col==20)
			         Col=19;
			    M[Ren][Col]=1;
			}
			    
			}
		  
	}
		else{
			if(pluma==true){
			     for(int i=avan;i>=0;i--){
			     	Col--;
			          if(Col==-1){
			            Col=0;
			            M[Ren][Col]=1;
			        }
				}
			          
			          
		    }
		}
		
	}
	else if(direc==-1){
		if(camino==1){
			if(pluma==true){
				for(int i=0;i<avan;i++){
					Ren++;
				    if(Ren==20){
				        Ren=19;
					    M[Ren][Col]=1;
					}
				}
				    
				
			}
	    }
    }
		else{
			if(pluma==true){
				for(int i=avan;i>=0;i--){
					Ren--;
				    if(Ren==-1)
				        Ren=0;
				    M[Ren][Col]=1;
				}
				    
			}
	
		}
	}
	cout<<"Cordenadas: ("<<Ren<<","<<Col<<")";
}

void mostrarCor(int &Ren, int &Col){
	cout<<"Cordenadas: ("<<Ren<<","<<Col<<")";
}
