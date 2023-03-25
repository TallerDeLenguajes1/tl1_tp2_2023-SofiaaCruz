#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define Num 5

char tipos[6][10]={"Intel","AMD", "Celeron", "Athlon", "Core", "Pentium"};

struct {
    int velocidad;
    int year;
    int cantidad;
    char *tipoCPU;
} typedef compu;

void cargarDatos(compu pc[]);
void mostrarDatos (compu pc[]);
void masVieja(compu pc[]);
void mayorVelocidad (compu pc[]);

int main (){

    compu pc[Num];

    srand(time(NULL));

    cargarDatos(pc);
    mostrarDatos(pc);
    masVieja(pc);
    mayorVelocidad(pc);

    getchar ();
    return 0;
}

void cargarDatos(compu pc[]){
    int i;

    for (i=0; i<Num; i++){
        pc[i].velocidad=rand()%3+1;
        pc[i].year=rand()%(2023 - 2015 +1) + 2015;
        pc[i].cantidad=rand()%8+1;
        pc[i].tipoCPU = tipos[rand() % 6];
        printf("  %s  ", pc[i].tipoCPU);
    }
    
}

void mostrarDatos (compu pc[]){

    int i;

    for(i=0; i < Num; i++){
        printf("\n\n>>>>>> PC numero %d <<<<<<", i+1);
        printf("\n\tVELOCIDAD: %d", pc[i].velocidad);
        printf("\n\tA%cO: %d", 165, pc[i].year);
        printf("\n\tCANTIDAD: %d", pc[i].cantidad);
        printf("\n\tTIPO DE CPU: %s", pc[i].tipoCPU);
    }
}

void masVieja(compu pc[]){
    int aux = pc[0].year, j = 0;

    for (int i = 0; i < Num; i++) {

        if (pc[i].year < aux) {
            aux = pc[i].year;
            j = i;
        }

    }

    printf("\n\nLa PC mas antigua es la numero %d del a%co %d", j+1, 164, pc[j].year);
}

void mayorVelocidad (compu pc[]){
    int i, aux = pc[0].velocidad, j=0;

    for (i=0; i<Num; i++){

        if(pc[i].velocidad>aux){
            aux=pc[i].velocidad;
            j=i;
        }
    }

    printf("\n\nLa PC con mayor velocidad es la numero %d \nVelocidad: %d", j+1, pc[j].velocidad);

}