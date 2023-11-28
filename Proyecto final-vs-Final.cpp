#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cctype>


using namespace std;
	int opcMenu;
	int idioma=1;
	int opcIdioma;
	int opcion1;
	int opcion2;
	int opcion3;
	int opcion4;
	int opcion5;

void mostrarMenu(){
	cout << "=== El Peregrinaje de Aztlan a Tenochtitlan ===" << endl << endl;
    cout << "1. Jugar " << endl;
    cout << "2. Instrucciones" << endl;
    cout << "3. Acerca de" << endl;
    cout << "4. Idioma" << endl;
    cout << "5. Salir" << endl;
}

void monstrarMenuIng(){
	cout << "=== The Pilgrimage from Aztlan to Tenochtitlan ===" << endl << endl;
    cout << "1. Play " << endl;
    cout << "2. Instructions" << endl;
    cout << "3. About" << endl;
    cout << "4. Language" << endl;
    cout << "5. Exit" << endl;
}

int main(){
	
	srand(time(NULL));
	int numeroAletorio=rand()%20+1;
	
	system("cls");
	
	do{
		
	int peregrinos=100;
	int vida=25;
	int florMedicinal=0;
	int plantaExtrana=0;
	int mineralesPreciosos=0;
	
	if(idioma==1){
	
		
	mostrarMenu();
	cout<<"\n---Selecciona una opcion";
	cout<<endl<<">> ";
	cin >> opcMenu;
	
	switch(opcMenu){
	
		case 2: 
			system("cls");
			cout<<endl<< "==== La tematica del juego se basa en la posibilidad de elegir diferentes  ====\n";
			cout<<"==== opciones para poder seguir uno de los distintos caminos a los         ====\n";
			cout<<"==== que te enfrentaras mediante el uso de la teclas numericas del 1 al 3  ====";
			cout<<endl<<endl;
    		system("pause"); 
    		system("cls");
    		
			break;
	
		case 3:
			system("cls");
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
			do{
			system("cls");
			cout<<endl;
			cout<<"==== El idioma actual se encuentra en Espanol. Desea cambiarlo a Ingles? ====\n";
			cout<<"1. Si.\n";
			cout<<"2. No.\n";
			cout<<">> ";
			cin>>opcIdioma;
			
			switch(opcIdioma){
				case 1:
					cout<<"The language has been changed to English\n\n";
					system("pause");
					idioma=2;
					return main();
				
				case 2:
					return main();
			}
			}while(opcIdioma<1||opcIdioma>2);
			
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
						cout<<"Decides rendir tributo a Tlaloc, sin embargo el solo sacrificar\n";
						cout<<"guerreros sin dar nada más a cambio hace que ocurra nada, por\n";
						cout<<"lo que no pasa nada y pierdes -4 Pegrinos\n\n";
						peregrinos=peregrinos-4;
						cout<<"Vida total: "<<vida<<endl;
						cout<<"Peregrinos: "<<peregrinos<<endl;
						system("pause");
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
					cout<<"Vida total "<<vida<<endl;
					peregrinos=peregrinos-8;
					cout<<"Peregrinos: "<<peregrinos<<endl;
					cout<<"Plantas extranas: "<<plantaExtrana<<endl;
					cout<<"Flores medicinales: "<<florMedicinal<<endl;
					cout<<endl;
					system("pause"); 
					break;
					
				case 2:
					cout<<"Decides que es mejor buscar una ruta alternativa a pesar de ser mqs larga\n";
					cout<<"por lo que despues de dia y medio logran encontrar otra ruta y continuan\n";
					cout<<"con su viaje, sin embargo los peregrinos sienten molestia. \n\n";
					cout<<"Vida total: "<<vida<<endl;
					cout<<"Peregrinos: "<<peregrinos<<endl<<endl;
					if(florMedicinal>0){
								cout<<"Flores medicinales: "<<florMedicinal<<endl;
					}
					if(plantaExtrana>0){
						cout<<"Plantas extranas: "<<plantaExtrana<<endl;
					}
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
		cout<<"Elige una opcion ";
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
				cout<<"Que vas a hacer?\n\n";
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
						if(florMedicinal>0){
							cout<<"Flores medicinales: "<<florMedicinal<<endl;
						}
						if(plantaExtrana>0){
							cout<<"Plantas extranas: "<<plantaExtrana<<endl;
						}
						cout<<endl;
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
							if(florMedicinal>0){
							cout<<"Flores medicinales: "<<florMedicinal<<endl;
							}
							if(plantaExtrana>0){
							cout<<"Plantas extranas: "<<plantaExtrana<<endl;
							}
							cout<<endl;
							system("pause"); 	
						}
						if(numeroAletorio>10){
							cout<<endl;
							cout<<"Lograste vencer a los cuervos y los usaron como alimento, sin embargo \nen la batalla murieron 3 peregrinos \n";
							vida=20;
							peregrinos=peregrinos-3;
							cout<<"Vida total: "<<vida<<endl;
							cout<<"Peregrinos: "<<peregrinos<<endl;
							if(florMedicinal>0){
								cout<<"Flores medicinales: "<<florMedicinal<<endl;
							}
							if(plantaExtrana>0){
								cout<<"Plantas extranas: "<<plantaExtrana<<endl;
							}
							cout<<endl;
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
				if(florMedicinal>0){
					cout<<"Flores medicinales: "<<florMedicinal<<endl;
				}
				if(plantaExtrana>0){
					cout<<"Plantas extranas: "<<plantaExtrana<<endl;
				}
				cout<<endl;
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
		cout<<"Elige una opcion ";
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
					cout<<"==== Durante la ceremonia sagrada, un chaman interpreta una profecia                 ====\n";
					cout<<"==== que guiará el destino de los peregrinos y esta dice --La tierra que tanto       ====\n";
					cout<<"==== buscan se encuentra al sur del poblado y su camino sera iluminado por las       ====\n";
					cout<<"==== por las estrellas en la noche y en el dia por el vuelo de las parvadas...--     ====\n";
					cout<<"==== Tres opciones se presentan: \n\n";
					cout<<"1. Seguir la direccion indicada por la profecia.\n";
					cout<<"2. Cuestionar la validez de la profeca y seguir tu propio instinto.\n";
					cout<<"3. Consultar al chaman por mas detalles de la profecia\n\n";
					cout<<"Elige una opcion ";
					cout<<">> ";
					cin>> opcion4;
					
					switch(opcion4){
					
					case 1:
						system("cls");
						cout<<endl;
						cout<<"Decides seguir las intrucciones del chaman y viajar por el sur junto a la guia de las\n";
						cout<<"estrellas y las aves.\n\n";
						cout<<"Vida total: "<<vida<<endl;
						cout<<"Peregrinos: "<<peregrinos<<endl;
						if(florMedicinal>0){
							cout<<"Flores medicinales: "<<florMedicinal<<endl;
						}
						if(plantaExtrana>0){
							cout<<"Plantas extranas: "<<plantaExtrana<<endl;
						}
						cout<<endl;
						system("pause");
						
						system("cls");
						cout<<endl;
						cout<<"==== Llegas hasta donde las aves y estrellas pudieron guiarte y te encuentras un gran      ====\n";
						cout<<"==== valle, sin embargo ves que en este valle se encuentra plagado de animales peligrosos  ====\n";
						cout<<"==== Tres opciones se presentan ====\n\n";
						cout<<"1. Limpiar la zona de los animales peligrosos.\n";
						cout<<"2. Buscar otra zona paraasentar a tu pueblo.\n";
						cout<<"3. Esperar a que los animales se vayan.\n\n";
						cout<<"Elige una opcion ";
						cout<<">> ";
						cin>> opcion5;
						
						switch(opcion5){
							
							case 1:
								numeroAletorio=rand()%20+1;
								if(numeroAletorio<=12){
									system("cls");
									cout<<endl;
									cout<<"Intentan limpiar la zona, sin embargo fracasan en su intento y la mayoria de peregrinos son\n";
									cout<<"asesinado y huyen del lugar, por lo que el viaje a la tierra prometida fracasa ya que con el paso el timepo los\n";
									cout<<"con el paso el timepo los pocos peregrinos restantes se dispersan y te abandonan \n\n";
									system("pause");
									cout<<"**** Has terminado el juego, gracias por jugar ****\n\n";
									system("pause"); 
									return main();
								}
								else{
									system("cls");
									cout<<endl;
									cout<<"Logran limpiar la zona con exito y deciden asentar su nueva civilización ahí, logrando que crezca de forma\n";
									cout<<"impresionante y convirtiendose en la legendaria Tenochtitlan...\n\n";
									system("pause");
									cout<<"**** Has terminado el juego, gracias por jugar ****\n\n";
									system("pause"); 
									return main();
								}
							break;
							
							case 2:
								system("cls");
								cout<<endl;
							 	cout<<"Deciden buscar otro lugar para crear su pueblo abandonando la zona, sin embargo pasan asi anos buscando la tierra\n";
							 	cout<<"prometida por lo que deciden asentarse en una zona al pacifico de la region, creando una civilizacion reconocida\n";
							 	cout<<"pero no imponente... \n\n";
							 	system("pause");
								cout<<"**** Has terminado el juego, gracias por jugar ****\n\n";
								system("pause"); 
								return main();
						
							case 3:
								system("cls");
								cout<<endl;
								cout<<"Deciden esperar dias a que lo animales se vayan,por lo que con el paso del tiepo se van y comienzan a asentar su\n";
								cout<<"pueblo en el valle, convirterindose asi en la poderosa e imponennte Tenochtitlan...\n\n";
								system("pause");
								cout<<"**** Has terminado el juego, gracias por jugar ****\n\n";
								system("pause"); 
								return main();
						}
					
					case 2:
						system("cls");
						cout<<endl;
						cout<<"Decides ignorar el camino que dicta la profecia y decides tomar tu camino.\n\n";
						cout<<"Vida total: "<<vida<<endl;
						cout<<"Peregrinos: "<<peregrinos<<endl;
						if(florMedicinal>0){
							cout<<"Flores medicinales: "<<florMedicinal<<endl;
						}
						if(plantaExtrana>0){
							cout<<"Plantas extranas: "<<plantaExtrana<<endl;
						}
						cout<<endl;
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
							cout<<"Vida total: "<<vida<<endl;
							cout<<"Peregrinos: "<<peregrinos<<endl;
							if(florMedicinal>0){
								cout<<"Flores medicinales: "<<florMedicinal<<endl;
							}
							if(plantaExtrana>0){
								cout<<"Plantas extranas: "<<plantaExtrana<<endl;
							}
							cout<<endl;
							system("pause");
							break;	
						}
						else{
							system("cls");
							cout<<endl;
							cout<<"El chaman no fue capaz de obtener más detalles para su viaje.\n\n";
							cout<<"Vida total: "<<vida<<endl;
							cout<<"Peregrinos: "<<peregrinos<<endl;
							if(florMedicinal>0){
								cout<<"Flores medicinales: "<<florMedicinal<<endl;
							}
							if(plantaExtrana>0){
								cout<<"Plantas extranas: "<<plantaExtrana<<endl;
							}
							cout<<endl;
							system("pause");
							break;
						}
					
					}
					
					}while(opcion4==3);
					}while(opcion4>3);
					
				}
				else{
					cout<<"No tienes suficientes recursos para realaizar un intercambio, por lo que\n";
					cout<<"algunos peregrinos se quedan y el pueblo los ayuda con comida, flores y plantas \n";
					cout<<"-10 peregrinos\n";
					cout<<"2-Flores medicinales\n";
					cout<<"2-Plantas extranas\n";
					plantaExtrana=plantaExtrana+2;
					florMedicinal=florMedicinal+2;
					peregrinos=peregrinos-10;
					cout<<"Vida total: "<<vida<<endl;
					cout<<"Peregrinos: "<<peregrinos<<endl;
					if(florMedicinal>0){
						cout<<"Flores medicinales: "<<florMedicinal<<endl;
					}
					if(plantaExtrana>0){
						cout<<"Plantas extranas: "<<plantaExtrana<<endl;
					}
					cout<<endl;
					system("pause"); 
					break;	
				}
				break;	
			case 2:
				numeroAletorio=rand()%20+1;
				if(numeroAletorio<=10){
					cout<<"Fallan a la hora de atacar por lo que pierdes -13 de vida y mueren 30 peregrinos\n";
					vida=vida-13;
					peregrinos=peregrinos-30;
					cout<<"Vida total: "<<vida<<endl;
					cout<<"Peregrinos: "<<peregrinos<<endl;
					if(florMedicinal>0){
						cout<<"Flores medicinales: "<<florMedicinal<<endl;
					}
					if(plantaExtrana>0){
						cout<<"Plantas extranas: "<<plantaExtrana<<endl;
					}
					cout<<endl;
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
					cout<<"3-plantas enxtranas\n";
					cout<<"3-plantas medicnales\n";
					cout<<"20-aldeanos esclavizados\n";
					plantaExtrana=plantaExtrana+3;
					florMedicinal=florMedicinal+3;
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
		cout<<"Elige una opcion ";
		cout<<">> ";
		cin>>opcion4;
		if(opcion4==1){
		cout<<endl;
		cout<<"Se quedan donde estan en el campamento improvisado en \n";
		cout<<"la espera de uns senal, sin embargo no pasa nada\n\n";
		cout<<"Vida total: "<<vida<<endl;
		cout<<"Peregrinos: "<<peregrinos<<endl;
		if(florMedicinal>0){
			cout<<"Flores medicinales: "<<florMedicinal<<endl;
		}
		if(plantaExtrana>0){
			cout<<"Plantas extranas: "<<plantaExtrana<<endl;
		}
		cout<<endl;
		system("pause");
		}
		}while(opcion4==1);
		
		switch(opcion4){
			
			case 2:
				cout<<endl;
				cout<<"Decides continuar su viaje por el sur\n\n";
				cout<<"Vida total: "<<vida<<endl;
				cout<<"Peregrinos: "<<peregrinos<<endl;
				if(florMedicinal>0){
					cout<<"Flores medicinales: "<<florMedicinal<<endl;
				}
				if(plantaExtrana>0){
					cout<<"Plantas extranas: "<<plantaExtrana<<endl;
				}
				cout<<endl;
				system("Pause");
				do{
				do{
				system("cls");
				cout<<endl;
				cout<<"==== En el viaje llegas a un punto que te llama mucho la atencion donde eres capaz de ver como   ====\n";
				cout<<"==== muchas aguilas se encuentran merodeando por una zona a pesar del gran diluvio que hay.      ====\n";
				cout<<"==== Tres opciones se presentan ====\n";
				cout<<"1. Consideras que es una senal, por lo que decides que la civilizacion se asente ahi.\n";
				cout<<"2. Continuas viajando para seguir buscando un lugar perfecto para empezar su nueva civilizacion.\n";
				cout<<"3. Decides pedir una senal a Huitzilopochtli para saber que hacer.\n\n";
				cout<<"Elige una opcion ";
				cout<<">> ";
				cin>>opcion5;
				
				switch(opcion5){
					case 1:
						if(peregrinos>=52){
							system("cls");
							cout<<endl;
							cout<<"Logras asentar un pequeno pueblo con bastantes peregrinos por lo que permite\n";
							cout<<"que el crecimiento de la civilizacion sea excepcional convirtiendose en la\n";
							cout<<"gran Tenochtitlan...";
							break;
						}
						else{
							system("cls");
							cout<<endl;
							cout<<"Intentas asentar un pequeno pueblo con pocos peregrinos, esto causa que la\n";
							cout<<"población y el pueblo crezcan con dificultades siendo un civilizacion importante";
							cout<<"pero no la mas poderosa ni importante...";
							break;
						}
					case 2:
						system("cls");
						cout<<endl;
						cout<<"Sigues viajando por largo tiempo con tus peregrinos hasta que lorgan asentarse en un\n";
						cout<<"lugar bastante comodo, sin embargo este pueblo no crece como algo más grande y quedan\n";
						cout<<"como un poblado mediano...";
						break;
					case 3:
						if(plantaExtrana>=3){
							system("cls");
							cout<<endl;
							cout<<"Despues de la ofrenda realizada el diluvio desaparece y el terreno se ilumina de una gran\n";
							cout<<"sol, acompanado de un arcoiris por lo que decides tomarlo como una senal y decides asentar tu\n";
							cout<<"civilización, junto con la guia de Huitzilopochtli logran crecer rapidamente convirtiendose en\n";
							cout<<"uno de los pueblo más importantes de la historia Tenochtitlan...";
							cout<<endl<<endl;
							cout<<"**** Has terminado el juego, gracias por jugar ****\n\n";
							system("pause");
							return main();
						}	
						else{
							system("cls");
							cout<<endl;
							cout<<"No tienes lo suficiente que ofrecerle a Huitzilopochtli por lo que no eres capaz de pedir su ayuda\n\n";
							system("pause");
							break;
						}
					break;	
				}
				}while(opcion5==3);
				}while(opcion5<1||opcion5>3);
				
		
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
				cout<<"1. Una gran cueva que al final se puede ver luz \n";
				cout<<"2. Un tronco que sirve como puente para cruzar un risco \n";
				cout<<"3. Un pantano que se ve bastante profundo \n";
				cout<<"Elige una opcion ";
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
	
	}
	
	if(idioma==2){
		
		monstrarMenuIng();
		cout<<"\n---Select an option";
		cout<<endl<<">> ";
		cin >> opcMenu;
	
		switch(opcMenu){
	
			case 2: 
				system("cls");
				cout<<endl<< "==== The theme of the game is based on the possibility of choosing different  ====\n";
				cout<<"==== options to be able to follow one of the different paths to which         ====\n";
				cout<<"==== that you will face by using the number keys from 1 to 3  ====";
				cout<<endl<<endl;
    			system("pause"); 
    			system("cls");
				break;
	
			case 3:
				system("cls");
				cout<<endl<< "**** Historical Context: The Pilgrimage from Aztlan to Tenochtitlan ****" << endl<<endl;
				cout<<"---The story of the pilgrimage from Aztlan to Tenochtitlan is inspired by what \n";
				cout<<"historical and mythological of the Aztec civilization, also known as Mexica.\n";
				cout<<" \nThis legendary migration is considered a key founding episode in Aztec mythology.\n";
				cout<<"establishing the foundations for the great civilization that flourished in the Valley of Mexico. \n" ;
			
				cout<<endl<< "**** Aztlan: The Place of the Herons ****"<<endl<<endl;
				cout<<"---Aztlan, according to Aztec legends, was the land of origin of the Aztecs. It is believed that Aztlán \n";
				cout<<"It was an island or region located somewhere northwest of Mexico, although its exact location \n";
				cout<<"It is unknown and has become a mythological element. The chronicles say that the Aztecs, \n";
				cout<<"Led by their god Huitzilopochtli, they undertook an epic journey from Aztlan in search of their definitive home.\n\n";
				system("pause"); 
    			system("cls");
    			
				break;
		
			case 4:
				do{
				system("cls");
				cout<<endl;
				cout<<"==== The current language is English. Do you want to change it to Spanish? ====\n";
				cout<<"1. Yes.\n";
				cout<<"2. No.\n";
				cout<<">> ";
				cin>>opcIdioma;
			
				switch(opcIdioma){
					case 1:
					cout<<"El idioma se ha cambiado a Espanol\n\n";
					system("pause");
					idioma=1;
					return main();
				
					case 2:
						return main();
				}
				}while(opcIdioma<1||opcIdioma>2);
			
			case 5:
	
				cout<<"\n==== You left the game ===="<<endl;
				return 0;
			
			
			default:
				cout<<"---It is not a valid option\n";
				system("pause"); 
    			system("cls");
				break;
				
			case 1:
				system("cls");
				cout<<"It was the dawn of a new era in the lands of Anahuac. Aztlan, the legendary land of \n";
				cout<<"the Aztecs, was mired in conflict and famine. The council of elders took a \n";
				cout<<"bold decision: undertake a pilgrimage of 100 people in search of a new promised land. Under the leadership \n";
				cout<<"of Huitzilihuitl, a brave warrior, and Huitzilopochtli, god of war and patron of the \n";
				cout<<"Aztecs, the journey to the Valley of Mexico began.";
				
				cout<<endl<<endl;
				system("pause"); cout<<endl;
				do{
				do{
				system("cls");
				cout<<endl;
				cout<<"==== Leaving Aztlan, the caravan faces a roaring river. ====\n";
				cout<<"==== Three options are presented: ====\n\n";
				cout<<"1. Build rafts and cross in a group. \n";
				cout<<"2. Find a longer but less dangerous path. \n";
				cout<<"3. Pay tribute to Tlaloc, the god of rain, to ask for safe passage.\n\n";
				cout<<"Choose an option >> ";
				cin>>opcion1;
				cout<<endl;
		
			switch(opcion1){
				
					case 3:
						if(peregrinos>0){
							cout<<"You decide to pay tribute to Tlaloc, however just sacrificing\n";
							cout<<"warriors without giving anything else in return makes nothing happen, for\n";
							cout<<"what nothing happens and you lose -4 Pilgrims\n\n";
							peregrinos=peregrinos-4;
							cout<<"Total life: "<<vida<<endl;
							cout<<"Pilgrims: "<<peregrinos<<endl;
							system("pause");
							break;
						}else{
							cout<<"You can no longer make sacrifices, you are alone, so you decide to sacrifice yourself.\n";
							cout<<"You have died and lost the game\n";
							system("pause"); 
							return main();
						}
					case 1:
						cout<<"You and your group go to look for materials near the area and manage to find\n";
						cout<<"fiber and some pieces of wood to be able to pass, in addition to:\n\n";
						cout<<"2-medicinal flowers\n";
						cout<<"1-strange plant\n\n";
						plantaExtrana=plantaExtrana+1;
						florMedicinal=florMedicinal+2;
						cout<<"However, when crossing, a water snake bites you and\n";
						cout<<"you lose -7 life and 8 pilgrims fell into the river \n\n";
						vida=vida-7;
						cout<<"Total life "<<vida<<endl;
						peregrinos=peregrinos-8;
						cout<<"Pilgrims: "<<peregrinos<<endl;
						cout<<"strange plants: "<<plantaExtrana<<endl;
						cout<<"medicinal flowers: "<<florMedicinal<<endl;
						cout<<endl;
						system("pause"); 
						break;	
						
					case 2:
						cout<<"You decide that it is better to find an alternative route even though it is longer.\n";
						cout<<"so after a day and a half they manage to find another route and continue\n";
						cout<<"with their journey, however the pilgrims feel discomfort. \n\n";
						cout<<"Total life: "<<vida<<endl;
						cout<<"Pilgrims: "<<peregrinos<<endl<<endl;
						if(florMedicinal>0){
									cout<<"medicinal flowers: "<<florMedicinal<<endl;
						}
						if(plantaExtrana>0){
							cout<<"strange plants: "<<plantaExtrana<<endl;
						}
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
		cout<<"==== The journey takes the pilgrims through an unforgiving     ==== \n";
		cout<<"==== desert. Thirst and fatigue begin to affect the group.     ==== \n";
		cout<<"==== Three options are presented: ====\n\n";
		cout<<"1. Search for an oasis and resources in the desert.\n";
		cout<<"2. Set a slower pace to conserve energy.\n";
		cout<<"3. Continue at the same pace until you leave the desert.\n\n";
		cout<<"Choose an option ";
		cout<<">> ";
		cin>> opcion2;
		
		switch(opcion2){
			case 1:
				cout<<endl;
				cout<<"They slow their pace to see if anyone can see an oasis or resources. \n";
				cout<<"So after days of searching they manage to find an oasis full of resources. \n";
				cout<<"They manage to resupply themselves with food and resources in the oasis and find: \n\n";
				cout<<"1-Precious minerals \n";
				cout<<"1-medicinal flower";
				cout<<"2-Strange Plants \n\n";
				mineralesPreciosos=mineralesPreciosos+1;
				plantaExtrana=plantaExtrana+2;
				florMedicinal=florMedicinal+1;
				cout<<"Total objects: \n";
				cout<<"Medicinal flowers: "<<florMedicinal<<endl;
				cout<<"Strange plants: "<<plantaExtrana<<endl;
				cout<<"Precious minerals: "<<mineralesPreciosos<<endl<<endl;
				cout<<"Plus you got your life back.\n";
				vida=25;
				cout<<"Total life: "<<vida<<endl<<endl;
				
				cout<<"However, before arriving, some pilgrims die of hunger or heatstroke - 11 pilgrims";
				peregrinos=peregrinos-11;
				cout<<endl<<"Pilgrims: "<<peregrinos;
				cout<<endl<<endl;
				system("pause"); 
				break;
				
			case 2:
				cout<<endl;
				cout<<"By slowing down they manage to manage their forces better, however in the\n";
				cout<<"travel they encounter a flock of vultures that attack them \n\n";
				cout<<"What are you going to do?\n\n";
				cout<<"1. Escape\n";
				cout<<"2. Attack\n";
				cout<<"Choose an option ";
				cout<<">> ";
				cin>>opcion2;
				
				switch(opcion2){
					case 1:
						cout<<endl;
						cout<<"You manage to escape, however you lose 9 life and 10 pilgrims are killed\n";
						vida=vida-9;
						peregrinos=peregrinos-10;
						cout<<"Total life: "<<vida<<endl;
						cout<<"Pilgrims: "<<peregrinos<<endl;
						if(florMedicinal>0){
							cout<<"Medicinal flowers: "<<florMedicinal<<endl;
						}
						if(plantaExtrana>0){
							cout<<"Strange plants: "<<plantaExtrana<<endl;
						}
						cout<<endl;
						system("pause"); 
						break;
						
					case 2:
						cout<<endl;
						cout<<"You decide to attack the vultures\n";
						numeroAletorio=rand()%20+1;
						if(numeroAletorio<=10){
							cout<<"You provoked the vultures and they took 11 lives and 18 pilgrims were killed\n\n";
							vida=vida-11;
							peregrinos=peregrinos-18;
							cout<<"Total life: "<<vida<<endl;
							cout<<"Pilgrims: "<<peregrinos<<endl;
							if(florMedicinal>0){
								cout<<"Medicinal flowers: "<<florMedicinal<<endl;
							}
							if(plantaExtrana>0){
								cout<<"Strange plants: "<<plantaExtrana<<endl;
							}
							cout<<endl;
							system("pause"); 
						}
						if(numeroAletorio>10){
							cout<<endl;
							cout<<"You managed to defeat the crows and used them as food, however 3 pilgrims died in the battle \n";
							vida=20;
							peregrinos=peregrinos-3;
							cout<<"Total life: "<<vida<<endl;
							cout<<"Pilgrims: "<<peregrinos<<endl;
							if(florMedicinal>0){
							cout<<"Medicinal flowers: "<<florMedicinal<<endl;
							}
							if(plantaExtrana>0){
								cout<<"Strange plants: "<<plantaExtrana<<endl;
							}
							cout<<endl;
							system("pause"); 
								
						}	
					break;
				}
				break;	
				
			case 3:
				cout<<endl;
				cout<<"They continue with the rhythm, however many of the pilgrims could not withstand the harsh conditions for\n";
				cout<<"so many of them die on the way. -29 Pilgrims -3 life\n\n";
				vida=vida-3;
				peregrinos=peregrinos-29;
				cout<<"Total life: "<<vida<<endl;
				cout<<"Pilgrims: "<<peregrinos<<endl;
				if(florMedicinal>0){
					cout<<"Medicinal flowers: "<<florMedicinal<<endl;
				}
				if(plantaExtrana>0){
					cout<<"Strange plants: "<<plantaExtrana<<endl;
				}
				cout<<endl;
				system("pause"); 
				break;
		}
		}while(opcion2>3||opcion2<1);
		
		do{
		system("cls");
		cout<<endl;
		cout<<"==== On the way to the promised land they find a town           ==== \n";
		cout<<"==== in the distance, so everyone asks you what they should do. ==== \n";
		cout<<"==== Three options are presented: ====\n\n";
		cout<<"1. Exchange resources with friendly towns.\n";
		cout<<"2. Attack the town.\n";
		cout<<"3. Avoid contact with the town and continue with the trip.\n\n";
		cout<<"Choose an option ";
		cout<<">> ";
		cin>> opcion3;		
		
		switch(opcion3){
			
			case 1:
				if(plantaExtrana>=2&&mineralesPreciosos>0){
					cout<<endl;
					cout<<"Exchange some resources you have and the village shaman\n";
					cout<<"helps you to your goal, so you decide to do a ritual and \n";
					cout<<"he invites you to participate\n\n";
					plantaExtrana=plantaExtrana-2;
					mineralesPreciosos=mineralesPreciosos-1;
					cout<<"strange plants: "<<plantaExtrana<<endl;
					cout<<"Precious minerals: "<<mineralesPreciosos<<endl<<endl;
					cout<<"Total life: "<<vida<<endl;
					cout<<"Pilgrims: "<<peregrinos<<endl;
					system("pause"); 
					do{
					do{
					system("cls");
					cout<<endl;
					cout<<"==== During the sacred ceremony, a shaman interprets a prophecy  that will              ====\n";
					cout<<"==== guide the destiny of the pilgrims and it says - The land that so much looking      ====\n";
					cout<<"==== for is located to the south of the town and their path will be illuminated by the  ====\n";
					cout<<"==== the by the stars at night and in the day by the flight of the flocks...--          ====\n";
					cout<<"==== Three options are presented: \n\n";
					cout<<"1. Follow the direction indicated by the prophecy.\n";
					cout<<"2. Question the validity of the prophecy and follow your own instinct.\n";
					cout<<"3. Consult the shaman for more details of the prophecy\n\n";
					cout<<"Choose an option ";
					cout<<">> ";
					cin>> opcion4;
					
					switch(opcion4){
					
					case 1:
						system("cls");
						cout<<endl;
						cout<<"You decide to follow the shaman's instructions and travel through the south with the guide of the\n";
						cout<<"stars and birds.\n\n";
						cout<<"Total life: "<<vida<<endl;
						cout<<"Pilgrims: "<<peregrinos<<endl;
						if(florMedicinal>0){
							cout<<"Medicinal flowers: "<<florMedicinal<<endl;
						}
						if(plantaExtrana>0){
							cout<<"Strange plants: "<<plantaExtrana<<endl;
						}
						cout<<endl;
						system("pause"); 
						
						system("cls");
						cout<<endl;
						cout<<"==== You reach where the birds and stars could guide you and you find a grea    ====\n";
						cout<<"==== valley, however you see that this valley is full of dangerous animals      ====\n";
						cout<<"==== Three options are presented ====\n\n";
						cout<<"1. Clean the area of dangerous animals.\n";
						cout<<"2. Find another area to settle your people.\n";
						cout<<"3. Wait for the animals to leave.\n\n";
						cout<<"Choose an option ";
						cout<<">> ";
						cin>> opcion5;
						
						switch(opcion5){
							
							case 1:
								numeroAletorio=rand()%20+1;
								if(numeroAletorio<=12){
									system("cls");
									cout<<endl;
									cout<<"They try to clean the area, however they fail in their attempt and the majority of pilgrims are\n";
									cout<<"murdered and flee the place, so the trip to the promised land fails since with the passage of time the\n";
									cout<<"As time passes, the few remaining pilgrims disperse and abandon you. \n\n";
									system("pause");
									cout<<"**** You have finished the game, thanks for playing ****\n\n";
									system("pause"); 
									return main();
								}
								else{
									system("cls");
									cout<<endl;
									cout<<"They manage to clean the area successfully and decide to settle their new civilization there, making it grow\n";
									cout<<"impressive and becoming the legendary Tenochtitlan...\n\n";
									system("pause");
									cout<<"**** You have finished the game, thanks for playing ****\n\n";
									system("pause"); 
									return main();
								}
							break;
							
							case 2:
								system("cls");
								cout<<endl;
							 	cout<<"They decide to look for another place to create their town, leaving the area, however they spend years searching for land.\n";
							 	cout<<"promised so they decide to settle in an area in the Pacific region, creating a recognized civilization\n";
							 	cout<<"but not imposing... \n\n";
							 	system("pause");
								cout<<"**** You have finished the game, thanks for playing ****\n\n";
								system("pause"); 
								return main();
						
							case 3:
								system("cls");
								cout<<endl;
								cout<<"They decide to wait days for the animals to leave, so as time goes by they leave and begin to settle their\n";
								cout<<"town in the valley, thus becoming the powerful and imposing Tenochtitlan...\n\n";
								system("pause");
								cout<<"**** You have finished the game, thanks for playing ****\n\n";
								system("pause"); 
								return main();
						}
					
					case 2:
						system("cls");
						cout<<endl;
						cout<<"You decide to ignore the path dictated by the prophecy and decide to take your own path.\n\n";
						cout<<"Total life: "<<vida<<endl;
						cout<<"Pilgrims: "<<peregrinos<<endl;
						if(florMedicinal>0){
							cout<<"Medicinal flowers: "<<florMedicinal<<endl;
						}
						if(plantaExtrana>0){
							cout<<"Strange plants: "<<plantaExtrana<<endl;
						}
						cout<<endl;
						system("pause"); 
						break;
						
					case 3:
						if(plantaExtrana>=1){
							system("cls");
							cout<<endl;
							cout<<"The shaman manages to obtain more details of the prophecy which says that he who seeks \n";
							cout<<"the promised land will find it when he sees an eagle perched on a cactus devouring an eagle.\n\n";
							plantaExtrana=plantaExtrana-1;
							cout<<"Total life: "<<vida<<endl;
							cout<<"Pilgrims: "<<peregrinos<<endl;
							if(florMedicinal>0){
								cout<<"Medicinal flowers: "<<florMedicinal<<endl;
							}
							if(plantaExtrana>0){
								cout<<"Strange plants: "<<plantaExtrana<<endl;
							}
							cout<<endl;
							system("pause"); 
							break;	
						}
						else{
							system("cls");
							cout<<endl;
							cout<<"The shaman was not able to obtain any further details for his journey.\n\n";
							cout<<"Total life: "<<vida<<endl;
							cout<<"Pilgrims: "<<peregrinos<<endl;
							if(florMedicinal>0){
								cout<<"Medicinal flowers: "<<florMedicinal<<endl;
							}
							if(plantaExtrana>0){
								cout<<"Strange plants: "<<plantaExtrana<<endl;
							}
							cout<<endl;
							system("pause"); 
							break;
						}
					
					}
					
					}while(opcion4==3);
					}while(opcion4>3);
					
				}
				else{
					cout<<"You don't have enough resources to make an exchange, so\n";
					cout<<"some pilgrims stay and the people help them with food, flowers and plants \n";
					cout<<"-10 pilgrims\n";
					cout<<"2-Medicinal flowers\n";
					cout<<"2-Strange plants\n";
					plantaExtrana=plantaExtrana+2;
					florMedicinal=florMedicinal+2;
					peregrinos=peregrinos-10;
					cout<<"Total life: "<<vida<<endl;
					cout<<"Pilgrims: "<<peregrinos<<endl;
					if(florMedicinal>0){
						cout<<"Medicinal flowers: "<<florMedicinal<<endl;
					}
					if(plantaExtrana>0){
						cout<<"Strange plants: "<<plantaExtrana<<endl;
					}
					cout<<endl;
					system("pause");  
					break;	
				}
				break;	
			case 2:
				numeroAletorio=rand()%20+1;
				if(numeroAletorio<=10){
					cout<<"They fail to attack so you lose -13 life and 30 pilgrims die\n";
					vida=vida-13;
					peregrinos=peregrinos-30;
					cout<<"Total life: "<<vida<<endl;
					cout<<"Pilgrims: "<<peregrinos<<endl;
					if(florMedicinal>0){
						cout<<"Medicinal flowers: "<<florMedicinal<<endl;
					}
					if(plantaExtrana>0){
						cout<<"Strange plants: "<<plantaExtrana<<endl;
					}
					cout<<endl;
					system("pause"); 
						
					if(vida<=0){
						cout<<endl;
						cout<<"You have died. End of the game\n\n";
						system("pause");
						return main();
					}
					break;
				}
				else{
					cout<<"They manage to defeat and plunder the town, but 15 pilgrims die in the fight.\n";
					cout<<"3-strange plants\n";
					cout<<"3-medical plants\n";
					cout<<"20-enslaved villagers\n";
					plantaExtrana=plantaExtrana+3;
					florMedicinal=florMedicinal+3;
					vida=vida;
					peregrinos=peregrinos-15+20;
					cout<<"Total life: "<<vida<<endl;
					cout<<"Pilgrims: "<<peregrinos<<endl;
					cout<<"Strange plants: "<<plantaExtrana<<endl;
					cout<<"Medicinal flowers: "<<florMedicinal<<endl;
					system("pause"); 
					break;
				}
				
			case 3:
				cout<<"They ignore the town and continue with the trip\n";
				cout<<"Total life: "<<vida<<endl;
				cout<<"Pilgrims: "<<peregrinos<<endl;
				cout<<"Strange plants: "<<plantaExtrana<<endl;
				cout<<"Medicinal flowers: "<<florMedicinal<<endl;
				system("pause"); 
				break;
		}
		}while(opcion3>3||opcion3<1);	
		
		do{
		do{
		system("cls");
		cout<<endl;
		cout<<"==== They continue with the trip but you feel lost and don't know where to go. ====\n";
		cout<<"==== Three options are presented ====\n\n";
		cout<<"1. Stay where they are and create a camp, waiting for a signal.\n";
		cout<<"2. Go south.\n";
		cout<<"3. Go east.\n\n";
		cout<<"Choose an option ";
		cout<<">> ";
		cin>>opcion4;
		if(opcion4==1){
			cout<<endl;
			cout<<"They stay where they are in the makeshift camp in \n";
			cout<<"waiting for a signal, but nothing happens\n\n";
			cout<<"Total life: "<<vida<<endl;
			cout<<"Pilgrims: "<<peregrinos<<endl;
		if(florMedicinal>0){
			cout<<"Medicinal flowers: "<<florMedicinal<<endl;
		}
		if(plantaExtrana>0){
			cout<<"Strange plants: "<<plantaExtrana<<endl;
		}
		cout<<endl;
		system("pause"); 
		}
		}while(opcion4==1);
		
		switch(opcion4){
			
			case 2:
				cout<<endl;
				cout<<"You decide to continue your trip through the south\n\n";
				cout<<"Total life: "<<vida<<endl;
				cout<<"Pilgrims: "<<peregrinos<<endl;
				if(florMedicinal>0){
					cout<<"Medicinal flowers: "<<florMedicinal<<endl;
				}
				if(plantaExtrana>0){
					cout<<"Strange plants: "<<plantaExtrana<<endl;
				}
				cout<<endl;
				system("pause"); 
				do{
				do{
				system("cls");
				cout<<endl;
				cout<<"==== On the trip you reach a point that catches your attention where you are able to see how   ====\n";
				cout<<"==== Many eagles are found roaming around an area despite the great flood there is.            ====\n";
				cout<<"==== Three options are presented ====\n";
				cout<<"1. You consider it to be a sign, so you decide that civilization should settle there..\n";
				cout<<"2. You continue traveling to continue looking for a perfect place to start your new civilization.\n";
				cout<<"3. You decide to ask Huitzilopochtli for a sign to know what to do.\n\n";
				cout<<"Choose an option ";
				cout<<">> ";
				cin>>opcion5;
				
				switch(opcion5){
					case 1:
						if(peregrinos>=52){
							system("cls");
							cout<<endl;
							cout<<"You manage to settle a small town with quite a few pilgrims so it allows\n";
							cout<<"that the growth of civilization is exceptional, becoming the\n";
							cout<<"great Tenochtitlan...";
							break;
						}
						else{
							system("cls");
							cout<<endl;
							cout<<"You try to settle a small town with few pilgrims, this causes the\n";
							cout<<"population and the people grow with difficulties being an important civilization";
							cout<<"but not the most powerful or important...";
							break;
						}
					case 2:
						system("cls");
						cout<<endl;
						cout<<"You continue traveling for a long time with your pilgrims until they manage to settle in a\n";
						cout<<"quite comfortable place, however this town does not grow like something bigger and there are\n";
						cout<<"like a medium sized town...";
						break;
					case 3:
						if(plantaExtrana>=3){
							system("cls");
							cout<<endl;
							cout<<"After the offering is made, the flood disappears and the ground is illuminated in a great way.\n";
							cout<<"sun, accompanied by a rainbow so you decide to take it as a sign and decide to settle your\n";
							cout<<"civilization, together with the guidance of Huitzilopochtli, manage to grow rapidly, becoming\n";
							cout<<"one of the most important towns in the history of Tenochtitlan...";
							cout<<endl<<endl;
							cout<<"**** You have finished the game, thanks for playing ****\n\n";
							system("pause");
							return main();
						}	
						else{
							system("cls");
							cout<<endl;
							cout<<"You do not have enough to offer Huitzilopochtli so you are not able to ask for his help.\n\n";
							system("pause");
							break;
						}
					break;	
				}
				}while(opcion5==3);
				}while(opcion5<1||opcion5>3);
				
		
				break;
			case 3:
				cout<<endl;
				cout<<"You decide to continue your journey east.\n\n";
				system("Pause");
				do{
				system("cls");
				cout<<endl;
				cout<<"==== In your journey through the east you encounter three obstacles  ====\n";
				cout<<"==== different ones which do not allow you to continue.                   ====\n";
				cout<<"==== What path do you decide to take? ====\n\n";
				cout<<"1. A large cave that at the end you can see light\n";
				cout<<"2. A log that serves as a bridge to cross a cliff \n";
				cout<<"3. A swamp that looks quite deep \n";
				cout<<"Choose an option ";
				cout<<">> ";
				cin>>opcion5;
				
				switch(opcion5){
				
					
					case 1:
						cout<<endl;
						cout<<"You cross the large cave however it is full of poisonous insects\n";
						cout<<"and you and many pilgrims are poisoning\n";
						
						if(florMedicinal>=3){
							cout<<endl;
							cout<<"However, since they have several medicinal flowers, they manage to cure everyone.\n\n";
							cout<<"Upon crossing the cave they continue their journey and create a new civilization,\n";
							cout<<"However, the place where they settled was not the promised land, for \n";
							cout<<"so civilization does not prosper as expected.\n\n";
							system("pause");
							break;
						}
						else{
							cout<<endl;
							cout<<"They leave the cave and try to continue with the trip but almost all the pilgrims\n";
							cout<<"They die along with you so the journey in search of the promised land is a\n";
							cout<<"failure. \n\n";
							system("pause");
							break;
						}
					case 2:
						numeroAletorio=rand()%20+1;
						if(numeroAletorio<=10){
							cout<<endl;
							cout<<"You and a group of pilgrims decide to cross first, however halfway through the journey\n";
							cout<<"el tronco se rompe por lo que tu y varios peregrinos caen muriendo. \n";
							cout<<"The trunk breaks so you and several pilgrims fall to their deaths.\n";
							cout<<"some leave the group and others die. \n";
							system("pause");
							break;
						}
						else{
							cout<<endl;
							cout<<"You and a group of pilgrims decide to cross the log first and they succeed, so the rest\n";
							cout<<"pilgrims cross and decide to continue with their trip and after months of continuing traveling they manage\n";
							cout<<"settle, however not in the promised land. \n";
							system("pause");
							break;
						}
					case 3:
						cout<<endl;
						cout<<"You decide to cross the lake, however while they were crossing they are attacked by wild crocodiles\n";
						cout<<"and in the attack you are killed together with quite a few pilgrims, so the remaining pilgrims are\n";
						cout<<"left without a guide and try to continue with the trip but as time passes, some leave the group and others die.\n";
						system("pause");
						break;
				}
				}while(opcion5>3||opcion5<1);
				
				break;
		
		}
		
		}while(opcion4>3||opcion4<1);
		
		cout<<endl<<endl;
		cout<<"**** You have finished the game, thanks for playing ****\n\n";
		system("pause"); 
    	system("cls");
		break;
				
	}
	}
	}while(opcMenu != 5);
	
	}	
				

