#include<iostream>
#include<cstdlib>
#include<ctime>
#include <memory>
#include<cstring>
#include"lista.h"

using namespace std;

int main(){
	srand(time(0));
	ListaLigada<string> *tabela[53];
	int i = 0;
	int pos;
	int aux;
	int acumulador=0;
	int tamanho_entrada;
	int contador=0;
	string entrada;
	char *char_entrada;


	while(cin>>entrada){
	acumulador=0;
		char_entrada=&entrada[0];
		tamanho_entrada=strlen(char_entrada);
		while(i<tamanho_entrada){
			acumulador = acumulador + (int)char_entrada[i];
			i++;		
		}
	pos=acumulador%53;
	tabela[contador]->InsereNoFinal(entrada);
	contador++;
	}


	i=0;
	
	//Imprimindo tabela hash
	cout << "Imprimindo tabela hash" << endl;
	while(i<53){
		cout << *tabela[i] << endl;
	}


}
