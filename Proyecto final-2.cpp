#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cctype>


using namespace std;

void mostrarMenu(){
	cout << "=== El Peregrinaje de Aztlan a Tenochtitlan ===" << endl << endl;
    cout << "1. Jugar " << endl;
    cout << "2. Instrucciones" << endl;
    cout << "3. Acerca de" << endl;
    cout << "4. Idioma" << endl;
    cout << "5. Salir" << endl;
}



int main(){
	
	srand(time(NULL));
	int numeroAletorio=rand()%20+1;
	
	int opcMenu;
	int idioma=1;
	int opcIdioma;
	char exit;
	
	int opcion1;
	int opcion2;
	int opcion3;
	int opcion4;
	int opcion5;
	
	
	system("cls");
	
	do{
		
	int peregrinos=100;
	int vida=25;
	int felicidad=10;
	
	int florMedicinal=0;
	int plantaExtrana=0;
	int mineralesPreciosos=0;
		
	mostrarMenu();
	cout<<"\n---Selecciona una opcion";
	cout<<endl<<">> ";
	cin >> opcMenu;
	
	switch(opcMenu){
	
		case 2: 
			cout<<endl<< "==== La tematica del juego se basa en la posibilidad de elegir diferentes  ====\n";
			cout<<"==== opciones para poder seguir uno de los distintos caminos a los         ====\n";
			cout<<"==== que te enfrentaras mediante el uso de la teclas numericas del 1 al 3  ====";
			cout<<endl<<endl<<endl;
    		system("pause"); 
    		system("cls");
    		
			break;
	
		case 3:
			cout<<endl<< "**** Contexto Historico: El Peregrinaje de Aztlan a Tenochtitlan ****" << endl<<endl;
			cout<<"---La historia del peregrinaje de Aztlan a Tenochtitlan esta inspirada en lo \nhistorico y mitologico de la civilizacion azteca, tambien conocida como Mexica.";
			cout<<" \nEsta migracion legendaria se considera un episodio fundacional clave en la mitologia azteca,\n";
			cout<<"estableciendo las bases para la grandiosa civilizacion que florecio en el Valle de Mexico. \n" ;
		
			cout<<endl<< "**** Aztlan: El Lugar de las Garzas ****"<<endl<<endl;
			cout<<"---Aztlan, seg�n las leyendas aztecas, era la tierra de origen de los aztecas. Se cree que Aztl�n \n";
			cout<<"era una isla o region ubicada en alg�n lugar al noroeste de Mexico, aunque su ubicacion exacta \n";
			cout<<"es desconocida y se ha convertido en un elemento mitologico. Las cronicas cuentan que los aztecas, \n";
			cout<<"liderados por su dios Huitzilopochtli, emprendieron un viaje epico desde Aztlan en busca de su hogar definitivo.\n\n";
			system("pause"); 
    		system("cls");
    		
			break;
		
		case 4:
			
		
			
			
			
			
			
			
			
		case 5:
	
			cout<<"\n==== Saliste del juego ===="<<endl;
			return 0;
			
			
		default:
			cout<<"---No es una opcion valida\n";
			system("pause"); 
    		system("cls");
			break;
			
			
			
			
			
			
			
			
			
			
			
			
			
		case 1:
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
					
					break;
					
			}
			}while(opcion1==3);
			
		system("cls");
		cout<<endl;
		cout<<"==== El viaje lleva a los peregrinos a traves de un implacable     ==== \n";
		cout<<"==== desierto. La sed y el cansancio comienzan a afectar al grupo. ==== \n";
		cout<<"==== Tres opciones se presentan: ====\n\n";
		cout<<"1. Buscar un oasis y recursos en el desierto.\n";
		cout<<"2. Establecer un ritmo mas lento para conservar energia.\n";
		cout<<"3. Seguir con el ritmo que llevan hasta salir del desierto.\n\n";
		cout<<">> ";
		cin>> opcion2;
		
		switch(opcion2){
			case 1:
				cout<<endl;
				cout<<"Bajan el paso que llevan para ver si alguien puede ver un oasis o recursos \n";
				cout<<"Por lo que despues de dias de busqueda logran encontrar un oasis lleno de recursos \n";
				cout<<"Logran rebastecerse de alimento y de recursos en el oasis encuentran: \n\n";
				cout<<"1-Minerales preciosos \n";
				cout<<"2-Plantas Extranas \n\n";
				mineralesPreciosos=mineralesPreciosos+1;
				plantaExtrana=plantaExtrana+2;
				cout<<"Objetos totales: \n";
				cout<<"Flores medicinales: "<<florMedicinal<<endl;
				cout<<"Plantas extrana: "<<plantaExtrana<<endl;
				cout<<"Minerales preciosos: "<<mineralesPreciosos<<endl<<endl;
				cout<<"Ademas recuperaste 6 de vida.\n";
				vida=vida+6;
				cout<<"Vida total: "<<vida<<endl<<endl;
				felicidad=felicidad+3;
				
				cout<<"Sin embargo al hacer esto algunos peregrinos mueren de hambre o por un golpe de calor -11 peregrinos";
				peregrinos=peregrinos-11;
				cout<<endl<<"Peregrinos totales: "<<peregrinos;
				break;
				
			case 2:
				cout<<endl;
				cout<<"Al bajar el ritmo logran administrar mejor sus fuerzas, sin embargo en el\n";
				cout<<"viaje se encuentran una parvada de buitres que los atacan \n\n";
				cout<<"Que vas a hacer?\n";
				cout<<"1. Huir\n";
				cout<<"2. Atacar\n";
				cout<<">> ";
				cin>>opcion2;
				
				switch(opcion2){
					case 1:
						cout<<endl;
						cout<<"Logras huir, sin embargo pierdes 9 de vida y 10 peregrinos son asesinados";
						vida=vida-9;
						peregrinos=peregrinos-10;
						cout<<"Vida total: "<<vida<<endl;
						cout<<"Peregrinos: "<<peregrinos<<endl;
						break;
						
					case 2:
						cout<<endl;
						cout<<"Decides atacar a los buitres\n";
						numeroAletorio;
						if(numeroAletorio<=10){
							cout<<"Provocaste a los buitres y te quitaron 11 de vida y 18 peregrinos fueron asesinados\n\n";
							vida=vida-11;
							peregrinos=peregrinos-18;
							felicidad=felicidad-4;
							cout<<"Vida total: "<<vida<<endl;
							cout<<"Peregrinos: "<<peregrinos<<endl;
							system("pause"); 
							break;
						}
						if(numeroAletorio>10){
							cout<<endl;
							cout<<"Lograste vencer a los cuervos y los usaron como alimento,sin embargo \nen la batalla murieron 3 peregrinos \n";
							vida=20;
							peregrinos=peregrinos-3;
							cout<<"Vida total: "<<vida<<endl;
							cout<<"Peregrinos: "<<peregrinos<<endl;
							system("pause"); 
							break;
						}	
					}
			case 3:
				cout<<endl;
				cout<<"Siguen con el ritmo, sin embargo mucho de los peregrinos no soportaron las duras condiciones por\n";
				cout<<"lo que muchos de ellos mueren en el trayeto. -29 Peregrinos -3 de vida\n\n";
				vida=vida-3;
				peregrinos=peregrinos-29;
				cout<<"Vida total: "<<vida<<endl;
				cout<<"Peregrinos: "<<peregrinos<<endl;
				system("pause"); 
				break;
		}
			
		cout<<endl<<endl;
		system("pause"); 
    	system("cls");
		break;
	}
	
	}while(opcMenu != 5);

}
