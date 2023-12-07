# Proyecto-Intro-ICO
Repositorio del proyecto final del Prof. Candelario subido a git hub, el cual consiste en la
elaboración de un juego que permite al usuario interactuar con el juego, afectando las
decisiones que toma esta en la historia del juego. 

## El Peregrinaje de Aztlán a Tenochtitlan
Es una historia ambientada  

## Funcionamiento del Código

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

Para la validacion de datos del usuario se utilizo la estrcutura `do while` con la condicion de `while(opcion1>3||opcion1<1)`, la hace que el usuario tenga que elegir una opción valida o diferente a la que escogió, debido a que la jugabilidad del juego se basa en la selección de 3 opciones que se limitan a los valores numéricos del 1 al 3. En algunas partes del codigo de utilizan **dobles** `do while`, ya que algunas opciones ofrecidas al jugador no daban continuidad a la historia o tenian condicionales que si el usuario no cumplía no permitía el progreso del juego.

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
Para poder realizar el cambio de idioma en el juego simplemente se repitió el codigo existente y el texto que se imprimia en pantalla se tradijo a ingles, la estructura del juego en ingles es la misma que el que esta en Español y con sus mismas variables. Para poder identificar si el juego debía de cambiar de idioma se utilizó un `if` y la variable `idioma` el cual tenia dos valores **1=Español** y **2=Ingles.**

~~~
if(idioma==1){
    mostrarMenu();
    cout<<"\n---Selecciona una opcion";
    cout<<endl<<">> ";
    cin >> opcMenu;

    //Programa en Español
}

if(idioma==2){
    monstrarMenuIng();
    cout<<"\n---Select an option";
    cout<<endl<<">> ";
    cin >> opcMenu;

    //Programa en Ingles
}
~~~
## Uso de Git Hub en el proyecto 
### Inicio del repositorio
Para el seguimiento del progreso del proyecto primero se inició un repositorio mediante Git Hub y para esto era necesario tener una cuenta creda y desde la misma pagina y en la sección de repositorios seleccioanr la opción **New**, la cual nos permite la creación de nuestro repositorio.


![image](https://github.com/CrizJimz/Proyecto-Intro-ICO/assets/145381565/89cf4129-a6c7-4c84-8950-b78a3a9ef836)

### Clonación del repositorio
Despues de la creación de repositorio es necesario clonar el repositorio en el dispositivo local y si es posible en una carpeta en específico para esto se utiliza el comando `git clone "Url del repositorio a clonar"`.

### Actualización del proyecto
#### Git status
Al ya tener nuestro repositorio ya es posible empezar a trabajar el proyecto en un espacio donde se pueda llevar una gestión de progreso del proyecto. Cuando agregamos nuevos archivos o modificamos los existentes lo primero que podemos hacer para saber el estado del proyecto es utilizar el comando `git status` que nos permite visualizar el estado del proyecto desde nuiestro dispositivo local, esto quiere decir que si realizamos algún cambio y no lo subimos este nos avisara  o por el contrario si borramos un archivo y no subimos la actualización de esto a git hub tambien nos avisara.
#### Git add y Git commit 
Cuando realizamos cambios en el repositorio es necesario subir estos cambios a Git Hub, ya sea que borremos, agregamos o modifiquemos un documento; y para esto debemos utilizar el comando `git add` que va a agregar los cambios que hayamos realizados, para que se puedan subir los cambios es necesario realizar un commit de los cambios realizados, esto quiere decir un comentario o descripción de que cambios realizamos en el repositorio para poder llevar un control mejor de los cambios que se realizan durante el trabajo en el repositorio, para esto debe utilizarse se utiliza el comando `git commit`.
#### Git push
Finalmente para poder subir los cambios realizados se utitiliza el comando `git push` que sube todos los archivos al repositorio el Git Hub.
#### Ejemplo 
