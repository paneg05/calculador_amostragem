#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

using namespace std;

int main(void){
	setlocale(LC_ALL,"ptb");
	
	int resp = 0;
	
	do{
		
		cout<<"Calculo: tamanho da amostragem"<<endl<<endl<<endl;
		
	float N = 0;
	cout<<"Entre com o tamanho da popula��o:  ";
	cin>>N;
	
	float p = 0;
	cout<<"Entre com P^ (utilize 0.5 para P^ desconhecido):  ";
	cin>>p;
	
	float q = 0;
	cout<<"ENtre com q^ (utilize 0.5 para q^ desconhecido):   ";
	cin>>q;
	
	float z = 0;
	cout<<"entre com o Z:  ";
	cin>>z;
	
	float d = 0.02;
	cout<<"entre com d:  ";
	cin>>d;
	
	
	
	float n1 = pow(z,2.0)*p*q*N;	
	float n2 = pow(d,2.0)*(N-1)+pow(z,2.0)*p*q;
	

	
	float n=n1/n2;
	
	n=trunc(n)+1;
	
	cout << "n=" << n << endl;
	cout<<endl;
	
	
	
	
	while(resp!=1 && resp != 2){
		cout<<"digite 1 para continuar e 2 para sair...";
		cin>>resp;
	};
	
	system("cls");
	
	}while(resp==1);
	
	
	
	
	
	
	
	
	
	
	
	
	
}                                                                                                                                                                                                                                                                                                                              
