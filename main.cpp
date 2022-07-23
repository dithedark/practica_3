

#include "primer_metodo.h"
using namespace std;

int main()
{
    char nombre[]="texto.txt";
    unsigned long  tamano=tam(nombre);
    char *datos= new char ((tamano*8)+1);

    lecturaM1(datos,nombre,tamano);





    delete datos ;

    return 0;
}
