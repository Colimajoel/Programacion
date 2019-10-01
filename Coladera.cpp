using namespace std;
#include<iostream>

void unos(int V[],int n);
int mostrar(int V[],int n);
void zeros(int V[], int n);

int main(){
	int vec[1000];
		
	unos(vec,1000);
	zeros(vec,1000);
	mostrar(vec,1000);	
}
int mostrar(int V[], int n){
	for(int i=0;i<1000;i++){
		if(V[i]==1)
	      cout<<i<<endl;
	} 
}
void unos(int V[],int n){
	for(int i=2;i<1000;i++)
	  V[i]=1;
}
void zeros(int V[], int n){
	for(int i=2;i<1000;i++){
		if(V[i]==1){
			for(int j=i+1;j<1000;j++){
				if(j%i==0){
					V[j]=0;
				}	
			}
		}	     
	}	     			
}
	
