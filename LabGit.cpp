#include <iostream>

using namespace std;
int main(){
	ifstream archivoEntrada("Input/archivoEntrada.txt");
	ofstream archivoSalida("Output/archivoSalida.txt");
	
	if(archivoEntrada.is_open() &&  archivoSalida.is_open()){
		cout<<"Archivo abierto"<<endl;
		string linea;
		
		while(getline(archivoEntrada, linea)){
			archivosalida << linea;
		}
		cout<<"Archivo copiado correctamente"<<endl;
	}
}