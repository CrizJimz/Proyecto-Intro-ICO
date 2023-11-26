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
	int amuleto=0;
		
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
			cout<<"---La historia del peregrinaje de Aztlan a Tenochtitlan esta inspirada en lo \n";
			cout<<"historico y mitologico de la civilizacion azteca, tambien conocida como Mexica.\n";
			cout<<" \nEsta migracion legendaria se considera un episodio fundacional clave en la mitologia azteca,\n";
			cout<<"estableciendo las bases para la grandiosa civilizacion que florecio en el Valle de Mexico. \n" ;
		
			cout<<endl<< "**** Aztlan: El Lugar de las Garzas ****"<<endl<<endl;
			cout<<"---Aztlan, según las leyendas aztecas, era la tierra de origen de los aztecas. Se cree que Aztlán \n";
			cout<<"era una isla o region ubicada en algún lugar al noroeste de Mexico, aunque su ubicacion exacta \n";
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
				cout<<"Ademas recuperaste tu vida.\n";
				vida=25;
				cout<<"Vida total: "<<vida<<endl<<endl;
				felicidad=felicidad+3;
				
				cout<<"Sin embargo antes de llegar algunos peregrinos mueren de hambre o por un golpe de calor -11 peregrinos";
				peregrinos=peregrinos-11;
				cout<<endl<<"Peregrinos totales: "<<peregrinos;
				cout<<endl<<endl;
				system("pause"); 
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
						cout<<"Logras huir, sin embargo pierdes 9 de vida y 10 peregrinos son asesinados\n";
						vida=vida-9;
						peregrinos=peregrinos-10;
						cout<<"Vida total: "<<vida<<endl;
						cout<<"Peregrinos: "<<peregrinos<<endl;
						system("pause"); 
						break;
						
					case 2:
						cout<<endl;
						cout<<"Decides atacar a los buitres\n";
						numeroAletorio=rand()%20+1;
						if(numeroAletorio<=10){
							cout<<"Provocaste a los buitres y te quitaron 11 de vida y 18 peregrinos fueron asesinados\n\n";
							vida=vida-11;
							peregrinos=peregrinos-18;
							felicidad=felicidad-4;
							cout<<"Vida total: "<<vida<<endl;
							cout<<"Peregrinos: "<<peregrinos<<endl;
							system("pause"); 
							
						}
							if(numeroAletorio>10){
							cout<<endl;
							cout<<"Lograste vencer a los cuervos y los usaron como alimento,sin embargo \nen la batalla murieron 3 peregrinos \n";
							vida=20;
							peregrinos=peregrinos-3;
							cout<<"Vida total: "<<vida<<endl;
							cout<<"Peregrinos: "<<peregrinos<<endl;
							system("pause"); 
							
						}	
						break;
					}
				break;
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
		
		system("cls");
		cout<<endl;
		cout<<"==== En el camino a la tierra prometida encuentran un pueblo       ==== \n";
		cout<<"==== a lo lejos, por lo que todos te preguntan que deberian hacer. ==== \n";
		cout<<"==== Tres opciones se presentan: ====\n\n";
		cout<<"1. Intercambiar recursos con los pueblos amistosos.\n";
		cout<<"2. Atacar el pueblo.\n";
		cout<<"3. Evitar el contacto con el pueblo y continuar con el viaje.\n\n";
		cout<<">> ";
		cin>> opcion3;
		
		switch(opcion3){
			
			case 1:
				if(plantaExtrana>=2&&mineralesPreciosos>0){
					cout<<endl;
					cout<<"Intercambian algunos resursos que tienes y el chamane del pueblo\n";
					cout<<"te ayuda a tu objetivo, por lo que realizan un ritual y bendicen\n";
					cout<<"un amuleto que los guiara a su destino\n\n";
					cout<<"Vida total: "<<vida<<endl;
					cout<<"Peregrinos: "<<peregrinos<<endl;
					amuleto=1;
					cout<<"Amuleto: "<<amuleto<<endl;
					system("pause"); 
					system("cls");
					
					
					
					
					
					
				}
				else{
					cout<<"No tienes suficientes recursos para realaizar un intercambio, por lo que\n";
					cout<<"algunos peregrinos se quedan y el pueblo los ayuda con comida y flores medicinales\n";
					cout<<"-10 peregrinos\n";
					cout<<"2-flores medicinales\n";
					florMedicinal=florMedicinal+2;
					peregrinos=peregrinos-29;
					cout<<"Vida total: "<<vida<<endl;
					cout<<"Peregrinos: "<<peregrinos<<endl;
					cout<<"Plantas extranas: "<<plantaExtrana<<endl;
					cout<<"amuleto "<<amuleto<<endl;
					cout<<"Flores medicinales: "<<florMedicinal<<endl;
					system("pause"); 
					break;	
				}
					
			case 2:
				numeroAletorio=rand()%20+1;
				if(numeroAletorio<=10){
					cout<<"Fallan a la hora de atacar por lo que pierdes -15 de vida y mueren 30 peregrinos\n";
					vida=vida-15;
					peregrinos=peregrinos-30;
					cout<<"Vida total: "<<vida<<endl;
					cout<<"Peregrinos: "<<peregrinos<<endl;
					cout<<"Plantas extranas: "<<plantaExtrana<<endl;
					cout<<"Flores medicinales: "<<florMedicinal<<endl;
					system("pause"); 
					break;
				}
				else{
					cout<<"Logran vencer y saquear al pueblo, pero en la pelea mueren 15 peregrinos\n";
					cout<<"3-plantas enxtranas\n";
					cout<<"2 plantas medicnales\n";
					cout<<"20 aldeanos esclavizados\n";
					vida=vida-7;
					peregrinos=peregrinos-15+20;
					cout<<"Vida total: "<<vida<<endl;
					cout<<"Peregrinos: "<<peregrinos<<endl;
					cout<<"Plantas extranas: "<<plantaExtrana<<endl;
					cout<<"Flores medicinales: "<<florMedicinal<<endl;
					system("pause"); 
					break;
				}
				
			case 3:
				cout<<"Ignoran al pueblo y continuan con el viaje\n";
				cout<<"Vida total: "<<vida<<endl;
				cout<<"Peregrinos: "<<peregrinos<<endl;
				cout<<"Plantas extranas: "<<plantaExtrana<<endl;
				cout<<"Flores medicinales: "<<florMedicinal<<endl;
				system("pause"); 
				break;
		}
		do{
		do{
		system("cls");
		cout<<endl;
		cout<<"==== Siguen con el viaje sin embargo te sientes perdido ====\n";
		cout<<"==== Tres opciones se presentan ====\n\n";
		cout<<"1. Quedarse por donde estan y crear un campamento, esperando un senal.\n";
		cout<<"2. Ir al sur.\n";
		cout<<"3. Ir al este.\n\n";
		cout<<">> ";
		cin>>opcion4;
		if(opcion4==1){
		cout<<endl;
		cout<<"Se quedan donde estan en el campamento improvisado en \n";
		cout<<"la espera de uns senal, sin embargo no pasa nada\n\n";
		system("pause");
		}
		}while(opcion4==1);
		
		switch(opcion4){
			
			case 2:
				cout<<endl;
				cout<<"Decides continuar su viaje por el sur\n\n";
				system("Pause");
				
				break;
			case 3:
				cout<<endl;
				cout<<"Decides continuar su viaje por el este\n\n";
				system("Pause");
				break;
		
		}
		
		}while(opcion4>3);
		
		
			
		cout<<endl<<endl;
		cout<<"Has termiando el juego\n";
		system("pause"); 
    	system("cls");
		break;
		
	}
	}while(opcMenu != 5);
	
	}	



