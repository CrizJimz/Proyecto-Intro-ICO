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
	
	
	int florMedicinal=0;
	int plantaExtrana=0;
	int mineralesPreciosos=0;

	
	
	
	//AQUI PONERR EL IF DE LOS IDIOMAS
	
	
		
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
			do{
			system("cls");
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
					system("pause"); 
					break;
				
				default:
					break;
					
			}
			}while(opcion1==3);
			}while(opcion1>3||opcion1<1);
			
		do{
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
				cout<<"1-Flor medicinal";
				cout<<"2-Plantas Extranas \n\n";
				mineralesPreciosos=mineralesPreciosos+1;
				plantaExtrana=plantaExtrana+2;
				florMedicinal=florMedicinal+1;
				cout<<"Objetos totales: \n";
				cout<<"Flores medicinales: "<<florMedicinal<<endl;
				cout<<"Plantas extrana: "<<plantaExtrana<<endl;
				cout<<"Minerales preciosos: "<<mineralesPreciosos<<endl<<endl;
				cout<<"Ademas recuperaste tu vida.\n";
				vida=25;
				cout<<"Vida total: "<<vida<<endl<<endl;
				
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
							cout<<"Vida total: "<<vida<<endl;
							cout<<"Peregrinos: "<<peregrinos<<endl;
							system("pause"); 	
						}
						if(numeroAletorio>10){
							cout<<endl;
							cout<<"Lograste vencer a los cuervos y los usaron como alimento, sin embargo \nen la batalla murieron 3 peregrinos \n";
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
		}while(opcion2>3||opcion2<1);
		
		do{
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
					cout<<"Intercambian algunos resursos que tienes y el chaman del pueblo\n";
					cout<<"te ayuda a tu objetivo, por lo que decide hacer un ritual y los\n";
					cout<<"invita a particpiar\n\n";
					plantaExtrana=plantaExtrana-2;
					mineralesPreciosos=mineralesPreciosos-1;
					cout<<"Plantas extranas: "<<plantaExtrana<<endl;
					cout<<"Minerales preciosos: "<<mineralesPreciosos<<endl<<endl;
					cout<<"Vida total: "<<vida<<endl;
					cout<<"Peregrinos: "<<peregrinos<<endl;
					system("pause"); 
					do{
					do{
					system("cls");
					cout<<endl;
					cout<<"==== Durante la ceremonia sagrada, un chaman interpreta una profecía                 ====\n";
					cout<<"==== que guiará el destino de los peregrinos y esta dice --La tierra que tanto       ====\n";
					cout<<"==== buscan se encuentra al sur del poblado y su camino sera iluminado por las       ====\n";
					cout<<"==== por las estrellas en la noche y en el día por el vuelo de las parvadas...--     ====\n";
					cout<<"==== Tres opciones se presentan: \n\n";
					cout<<"1. Seguir la dirección indicada por la profecia.\n";
					cout<<"2. Cuestionar la validez de la profecía y seguir tu propio instinto.\n";
					cout<<"3. Consultar al chaman por más detalles de la profecía\n\n";
					cout<<">> ";
					cin>> opcion4;
					
					switch(opcion4){
					
					case 1:
						system("cls");
						cout<<endl;
						cout<<"Decides seguir las intrucciones del chaman y viajar por el sur junto a la guia de las\n";
						cout<<"estrellas y las aves.\n";
						cout<<"";
						
						//ACABAR PARTE DE LA HISTORIA 
						
					case 2:
						system("cls");
						cout<<endl;
						cout<<"Decides ignorar el camino que dicta la profecia y decides tomar tu camino.\n\n";
						system("pause");
						break;
						
					case 3:
						if(plantaExtrana>=1){
							system("cls");
							cout<<endl;
							cout<<"El chaman logra obtener más detalles de la profecia la cual dice que el que\n";
							cout<<"aquella tierra prometida la encontraran cuando vean a un aguila posada sobre un nopal\n";
							cout<<"devorando un aguila.\n\n";
							plantaExtrana=plantaExtrana-1;
							system("pause");
							break;	
						}
						else{
							system("cls");
							cout<<endl;
							cout<<"El chaman no fue capaz de obtener más detalles para su viaje.\n\n";
							system("pause");
							break;
						}
					
					}
					
					}while(opcion4==3);
					}while(opcion4>3);
					
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
						
					if(vida<=0){
						cout<<endl;
						cout<<"Has muerto. Fin del juego\n\n";
						system("pause");
						return main();
					}
					break;
				}
				else{
					cout<<"Logran vencer y saquear al pueblo, pero en la pelea mueren 15 peregrinos\n";
					cout<<"1-plantas enxtranas\n";
					cout<<"4-plantas medicnales\n";
					cout<<"20-aldeanos esclavizados\n";
					plantaExtrana=plantaExtrana+1;
					florMedicinal=florMedicinal+4;
					vida=vida;
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
		}while(opcion3>3||opcion3<1);
		
		do{
		do{
		system("cls");
		cout<<endl;
		cout<<"==== Siguen con el viaje sin embargo te sientes perdido y no sabes a donde ir ====\n";
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
				
				system("cls");
				cout<<endl;
				cout<<"";
				
				
				
				
						//AGREGAR OPCIONES FINALES	
				break;
			case 3:
				cout<<endl;
				cout<<"Decides continuar su viaje por el este\n\n";
				system("Pause");
				do{
				system("cls");
				cout<<endl;
				cout<<"==== En tu transurso del viaje por el este encuentras tres osbtaculos  ====\n";
				cout<<"==== diferentes los cuales no te permiten continuar.                   ====\n";
				cout<<"==== Que camino decides tomar? ====\n\n";
				cout<<"1.Una gran cueva que al final se puede ver luz \n";
				cout<<"2.Un tronco que sirve como puente para cruzar un risco \n";
				cout<<"3.Un pantano que se ve bastante profundo \n";
				cout<<">> ";
				cin>>opcion5;
				
				switch(opcion5){
				
					
					case 1:
						cout<<endl;
						cout<<"Cruzas la gran cueva sin embargo se encuentra llena de insectos venenosos\n";
						cout<<"y tu y muchos peregrinos son envenenandos\n";
						
						if(florMedicinal>=3){
							cout<<endl;
							cout<<"Sin embargo como tienen varias flores medicinales logran curar a todos\n\n";
							cout<<"Al cruzar la cueva continuan su viaje y crean una nueva civilizacion,\n";
							cout<<"sin emabrgo el lugar donde asentaron no era la tierra prometida, por \n";
							cout<<"lo que la civilización no prospera como se esperaba.\n\n";
							system("pause");
							break;
						}
						else{
							cout<<endl;
							cout<<"Salen de la cueva e intentan continuar con el viaje pero casi todos los peregrinos\n";
							cout<<"mueren junto contigo por lo que el viaje en la busqueda de la tierra prometida es un\n";
							cout<<"fracaso. \n\n";
							system("pause");
							break;
						}
					case 2:
						numeroAletorio=rand()%20+1;
						if(numeroAletorio<=10){
							cout<<endl;
							cout<<"Tu y un grupo de peregrinos deciden cruzar primero, sin embargo a mitad del recorrido\n";
							cout<<"el tronco se rompe por lo que tu y varios peregrinos caen muriendo. \n";
							cout<<"Los peregrinos al quedarse sin lider intentan continuar con el viaje pero con el paso del tiempo\n";
							cout<<"unos dejan el grupo y otros mueren. \n";
							system("pause");
							break;
						}
						else{
							cout<<endl;
							cout<<"Tu y un grupo de peregrinos deciden cruzar primero el tronco y lo logran, por lo que lo demas\n";
							cout<<"peregrinos cruza y deciden continuar con su viaje y despues de meses de continuar viajando logran\n";
							cout<<"asentarse, sin embargo no en la tierra prometida. \n";
							system("pause");
							break;
						}
					case 3:
						cout<<endl;
						cout<<"Decides cruzar por el lago, sin embargo mientras iban cruzando son atacados por cocodrilos salvajes\n";
						cout<<"y en el ataque eres asesinado juntos con bastantes peregrinos ,por lo que los peregegrinos restantes se \n";
						cout<<"quedan sin guia e intentar continuar con el viaje pero con el paso del tiempo unos dejan el grupo y otros mueren. \n";
						system("pause");
						break;
				}
				}while(opcion5>3||opcion5<1);
				
				break;
		
		}
		
		}while(opcion4>3||opcion4<1);
		
		
			
		cout<<endl<<endl;
		cout<<"**** Has terminado el juego, gracias por jugar ****\n\n";
		system("pause"); 
    	system("cls");
		break;
		
	}
	
	}while(opcMenu != 5);
	
	}	
					/*cout<<"Minerales preciosos: "<<mineralesPreciosos<<endl<<endl;
					cout<<"Vida total: "<<vida<<endl;
					cout<<"Peregrinos: "<<peregrinos<<endl;
					cout<<"Plantas extranas: "<<plantaExtrana<<endl;
					cout<<"Flores medicinales: "<<florMedicinal<<endl;	*/

