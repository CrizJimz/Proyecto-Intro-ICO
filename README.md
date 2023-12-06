# Proyecto-Intro-ICO
Repositorio del proyecto final del Prof. Candelario subido a git hub, el cual consiste en la
elaboracion de un juego que permite al usuario interactuar con el juego, afectando las
desiciones que toma esta en la historia del juego. 

## El Peregrinaje de Aztlan a Tenochtitlan
Es una historia ambientada  

## Funcionamiento del codigo

### Menus
Iniciamos con la funcion `void mostrarMenu()`, y como su mismo nombre lo indica funciona para poder imprimir en pantalla
las opciones que dispone el usuario para moverse en el menu. 
~~~
void mostrarMenu(){
    cout << "=== El Peregrinaje de Aztlan a Tenochtitlan ===" << endl << endl;
    cout << "1. Jugar " << endl;
    cout << "2. Instrucciones" << endl;
    cout << "3. Acerca de" << endl;
    cout << "4. Idioma" << endl;
    cout << "5. Salir" << endl;
}
~~~
Esta funcion tambien se encuentra para el idioma ingles `void monstrarMenuIng()`, ya que como se puede ver en el codigo anterior una de las ocpiones existentes es el cambio de idioma.
~~~
void monstrarMenuIng(){
    cout << "=== The Pilgrimage from Aztlan to Tenochtitlan ===" << endl << endl;
    cout << "1. Play " << endl;
    cout << "2. Instructions" << endl;
    cout << "3. About" << endl;
    cout << "4. Language" << endl;
    cout << "5. Exit" << endl;
}
~~~

### Sistema de elección
Para la posibilidad de seleccionar una de las opciones del menu se utilizo la estructura `switch()` la cual nos permite el funcionamiento
para la mayoria del proyecto, aqui podemos ver el funcionamiento de esta estructura para el menu.

Para la validacion de datos del usuario se utilizo la estrcutura `do while` con la condicion de `while(opcion1>3||opcion1<1)`, debido 
a que la jugabilidad del juego se basa en la selección de 3 opciones que se limitan a los valores numéricos del 1 al 3. En algunas partes del codigo de utilizan dobles `do while`, ya que algunas opciones ofrecidas al jugador no daban continuidad a la historia o tenian condicionales que si el usuario no cumplía no permitía el progreso del juego.

Ejemplo del uso de estas estructuras en la opción Idioma del Menu:
~~~
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
~~~
En este caso al haber solo dos opciones la condición es `while(opcIdioma<1||opcIdioma>2)`.

### Cambio de Idioma
