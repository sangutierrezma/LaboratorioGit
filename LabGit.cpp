#include <iostream>

using namespace std;
int main(){
	ifstream archivoEntrada("Input/archivoEntrada.txt");
	
	if(archivoEntrada.is_open()){
		cout<<"Archivo abierto"<<endl;
		string linea;
		
		while(getline(archivoEntrada, linea)){
			
		}
	}
}