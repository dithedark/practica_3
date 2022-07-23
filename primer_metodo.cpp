#include "primer_metodo.h"



unsigned long  tam(char* nombre )
{
    unsigned long long tamano;

    fstream archivo(nombre, fstream::in | fstream::ate);
    tamano=archivo.tellg();
    archivo.close();

    return tamano;
}


void lecturaM1(char * datos,char* nombre,unsigned long  tamano)
{

    fstream archivo;
            archivo.open(nombre, fstream::in );
    unsigned int letra;
   char byte[8];
    for(unsigned long  int i=0, posicion=0 ; i<tamano ;i++,posicion++)
    {    letra=archivo.get();

         CbinarioM1(byte,letra);
         for(unsigned  a=0; a<8;a++ )
         {
             datos[(posicion*8)+a]=byte[a];
         }
    }
    archivo.close();
}


void CbinarioM1(char *bin ,unsigned letra)
{
    for (short int var = 7; var >= 0; --var)
    {

        bin[var]=char(48+(letra%2));
        letra=letra/2;
    }
}

void CdecimalM1(char *bin ,unsigned *letra)
{
    *letra=0;


    for (int var = 7,expo=0; var>=0 ; --var,expo++)
    {
        *letra= *letra+((unsigned(bin[var])-48)*pow(2,expo));
    }
}

void codificacionM1(char *datos,unsigned long  tamano,unsigned contra)
{
    tamano= tamano*8;




}

unsigned short contador(char *grupo,unsigned tamano)
{
    unsigned short retorno;
    unsigned cantidad1=0,cantidad0=0;

    for (unsigned var = 0; var < tamano; ++var)
    {
        if(grupo[var]=='1')
        {
            cantidad1++;
        }
        else
        {
            cantidad0++;
        }
    }
    if(cantidad0==cantidad1)
    {
        retorno=0;
    }
    else ()


    return retorno;
}












