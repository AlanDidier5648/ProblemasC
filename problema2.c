#include<stdio.h>
#include <stdlib.h>

/*
Hacer un programa que simule un  cajero automatico con un saldo inicial
*/

int main(int argc, char const *argv[]){

    int opc,saldo=1000,cant=0;



    do{
       


        printf("1.Consultar Saldo.\n");        
        printf("2.Depositar dinero\n");
        printf("3.Retirar Dinero.\n");
        printf("4.Salir del Programa.\n");

        printf("\n");
        printf("\n");

        printf("Ingresa un opcion:");
        scanf("%d",&opc);

        switch (opc){
            
        case 1:
            printf("Su saldo actual es de %d:",saldo);
            printf("\n");
            printf("\n");
            break;
        case 2:
            printf("Ingrese la cantidad a depositar:");
            scanf("%d",&cant);

            while (cant<=0){
                printf("ERROR! Cantidad negativa o cero, por favor vuelva a intentar");
                scanf("%d",&cant);
            }
            
            
            saldo+=cant;
            printf("Depósito exitoso. Su nuevo saldo es:%d",saldo);
          
            
            printf("\n");
            printf("\n");
            break;
        case 3:
            printf("Ingrese la cantidad a retirar:");
            scanf("%d",&cant);

            saldo-=cant;

            printf("Se ha retirado su saldo");
            printf("\n");

            if(saldo < 0){
                printf("Su cuenta esta vacia ");
                printf("\n");
            }
            break;
        default:
            break;
        }

    } while (opc != 4);
    
    

  
    
    return 0;
}
