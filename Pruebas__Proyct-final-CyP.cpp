#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cctype>

using namespace std;

int main(){

	int opcMenu;
	int idioma=1;
	int opcIdioma;
	char exit;
	
cout<<"\n---El idioma se encuentra en Espanol\n---Desea cambiarlo? \n";
			cout<<"1. Si \n2. No \n>> ";
			cin>> opcIdioma;
			if(opcIdioma==1){
				cout<<endl;
				cout<<"1. Espanol   2. Ingles\n>> ";
				cin>>idioma;
			}
			else{
				cout<<"Regresando al menu ";
			}
			
			
			
			
			
			switch(idioma){
				
				case 1:
					cout<<"---El idioma se ha cambioado a Espanol\n ";
					idioma=1;
					break;
				case 2:
					cout<<"---The language has been changed to English\n";
					idioma=2;
					break;
				default:
					if(idioma=1){
						cout<<"No es una opción valida";
					}
					else{
						cout<<"It is not a valid option";
					}
				break;
				
				
			
}			
}
