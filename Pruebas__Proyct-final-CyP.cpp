#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cctype>

using namespace std;
int peregrinos=100;


	int vida=25;
	int felicidad=10;
	
	int florMedicinal=0;
	int plantaExtrana=0;
	int mineralesPreciosos=0;
	
	int opcMenu;
	int idioma=1;
	int opcIdioma;
	
	
	int opcion1;
	int opcion2;
	int opcion3;
	int opcion4;
	int opcion5;

void part1(){
	cout<<endl;
			
			cout<<"==== Al abandonar Aztlan, la caravana se enfrenta a un rio rugiente. ====\n";
			cout<<"==== Tres opciones se presentan: ====\n\n";
			cout<<"1. Construir balsas y cruzar en grupo. \n";
			cout<<"2. Buscar un camino mas largo pero menos peligroso. \n";
			cout<<"3. Rendir tributo a Tlaloc, el dios de la lluvia, para pedir paso seguro.\n\n";
			cout<<"Elige una opcion >> ";
			cin>>opcion1;
			cout<<endl;
	
			switch(opcion1){
				
				case 3:
					if(peregrinos>0){
						cout<<"Decides rendir tributo a Tlaloc, sin embargo no tienes ningun\n";
						cout<<"guerrero digno de ser tributo debido a la hambruna que sufria\n";
						cout<<"el pueblo, por lo que no pasa nada y pierdes -1 Pegrino\n\n";
						peregrinos=peregrinos-1;
						break;
					}else{
						cout<<"Ya no puedes realizar mas sacrificios, estas solo, por lo que decides sacrificarte\n";
						cout<<"Has muerto y perdido el juego\n";
						system("pause"); 
						/*return main();8*/
					}
					
				case 1:
					cout<<"Tu grupo y tu van a buscar materiales cerca de la zona y logran encontrar\n";
					cout<<"fibra y algunos trozos de madera para poder pasar, ademas de:\n\n";
					cout<<"2-Flores medicinales\n";
					cout<<"1-Planta extrana\n\n";
					plantaExtrana=plantaExtrana+1;
					florMedicinal=florMedicinal+2;
					cout<<"Sin embargo a la hora de cruzar una serpiente de agua te muerde y\n";
					cout<<"pierdes -7 de vida y 8 peregrinos cayeron en el rio \n\n";
					vida=vida-7;
					cout<<"---Vida total "<<vida<<endl;
					peregrinos=peregrinos-8;
					cout<<"---Peregrinos restantes "<<peregrinos<<endl;
					cout<<endl;
					system("pause"); 
					break;
					
				case 2:
					cout<<"Decides que es mejor buscar una ruta alternativa a pesar de ser mqs larga\n";
					cout<<"por lo que despues de dia y medio logran encontrar otra ruta y continuan\n";
					cout<<"con su viaje, sin embargo los peregrinos sienten molestia. \n\n";
					felicidad=felicidad-4;
					system("pause"); 
					break;
				
				default:
					
					part1();
					break;
					
			}
}

int main(){
	
char exit;
	
	
	system("cls");
	
	do{
		
	
			
			system("cls");
			cout<<"Era el amanecer de una nueva era en las tierras del Anahuac. Aztlan, la legendaria tierra de \n";
			cout<<"los aztecas, se encontraba sumida en conflictos y hambruna. El consejo de ancianos tomo una \n";
			cout<<"decision audaz: emprender un peregrinaje de 100 personas en busca de una nueva tierra prometida. Bajo el liderazgo \n";
			cout<<"de Huitzilihuitl, un valiente guerrero, y Huitzilopochtli, dios de la guerra y patron de los \n";
			cout<<"aztecas, comenzo la travesia hacia el Valle de Mexico.";
			
			cout<<endl<<endl;
			system("pause"); cout<<endl;
			
			do{
			cout<<endl;
			cout<<"==== Al abandonar Aztlan, la caravana se enfrenta a un rio rugiente. ====\n";
			cout<<"==== Tres opciones se presentan: ====\n\n";
			cout<<"1. Construir balsas y cruzar en grupo. \n";
			cout<<"2. Buscar un camino mas largo pero menos peligroso. \n";
			cout<<"3. Rendir tributo a Tlaloc, el dios de la lluvia, para pedir paso seguro.\n\n";
			cout<<"Elige una opcion >> ";
			cin>>opcion1;
			cout<<endl;
			
			switch(opcion1){
				
				case 3:
					if(peregrinos>0){
						cout<<"Decides rendir tributo a Tlaloc, sin embargo no tienes ningun\n";
						cout<<"guerrero digno de ser tributo debido a la hambruna que sufria\n";
						cout<<"el pueblo, por lo que no pasa nada y pierdes -1 Pegrino\n\n";
						peregrinos=peregrinos-1;
						break;
					}else{
						cout<<"Ya no puedes realizar mas sacrificios, estas solo, por lo que decides sacrificarte\n";
						cout<<"Has muerto y perdido el juego\n";
						system("pause"); 
						return main();
					}
					
				case 1:
					cout<<"Tu grupo y tu van a buscar materiales cerca de la zona y logran encontrar\n";
					cout<<"fibra y algunos trozos de madera para poder pasar, ademas de:\n\n";
					cout<<"2-Flores medicinales\n";
					cout<<"1-Planta extrana\n\n";
					plantaExtrana=plantaExtrana+1;
					florMedicinal=florMedicinal+2;
					cout<<"Sin embargo a la hora de cruzar una serpiente de agua te muerde y\n";
					cout<<"pierdes -7 de vida y 8 peregrinos cayeron en el rio \n\n";
					vida=vida-7;
					cout<<"---Vida total "<<vida<<endl;
					peregrinos=peregrinos-8;
					cout<<"---Peregrinos restantes "<<peregrinos<<endl;
					cout<<endl;
					system("pause"); 
					break;
					
				case 2:
					cout<<"Decides que es mejor buscar una ruta alternativa a pesar de ser mqs larga\n";
					cout<<"por lo que despues de dia y medio logran encontrar otra ruta y continuan\n";
					cout<<"con su viaje, sin embargo los peregrinos sienten molestia. \n\n";
					felicidad=felicidad-4;
					system("pause"); 
					break;
				
				default:
					
					part1();
					break;
					
			}
			} while(opcion1<=4);
}while(opcion1<=4);
}













/*	int opcMenu;
	int idioma=1;
	int opcIdioma;
	char exit;
	
cout<<"\n---El idioma se encuentra en Espanol\n---Desea cambiarlo? \n";
			cout<<"1. Si \n2. No \n>> ";
			cin>> opcIdioma;
		
			switch(opcIdioma){
				
			case 1:
				cout<<endl;
				cout<<"1. Espanol   2. Ingles\n>> ";
				cin>>idioma;
				
			case 2:
				cout<<"Regresando al menu ";
				break;
				
			default:
				cout<<"No es una opción valida";
			
			
			
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
				
				
			
			
			
			
			
				cout<<"\n---El idioma se encuentra en Espanol\n---Desea cambiarlo? \n";
		cout<<"1. Si \n2. No \n>> ";
		cin>> opcIdioma;
		switch(opcIdioma){
				
			case 1:
				cout<<endl;
				cout<<"1. Espanol   2. Ingles\n>> ";
				cin>>idioma;
				break;
				
			case 2:
				cout<<"Regresando al menu ";
				break;
				
			default:
				cout<<"No es una opción valida";
				break;
		}
		
		if(opcIdioma=1){
		
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
		else{
			break;
		}
}			
}*/

