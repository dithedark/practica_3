

#include "primer_metodo.h"
using namespace std;

int main()
{
    char nombre[]="texto.txt";
    unsigned  long    tamano=tam(nombre);
    char *datos= new char ((tamano*8)+1);
    datos[tamano]='\0';
    unsigned contra=5;

    lecturaM1(datos,nombre,tamano);


    cout<<endl<<datos<<endl;
    unsigned long long pun=0;
    codificacionM1(datos,tamano,contra,0,&pun,true);
    cout<<endl<<datos<<endl;
    pun=0;
    codificacionM1(datos,tamano,contra,0,&pun,false);
    cout<<endl<<datos<<endl;
    escribirM1(datos,nombre,tamano);




    delete datos ;

    return 0;
}
