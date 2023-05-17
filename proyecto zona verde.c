#include <stdio.h>
 int main() {
     int opcion;
     int arboles_donados = 0;
   // menu principal
      do { 
     printf("\n-BIENVENIDOS A ZONA VERDE-\n");
     printf("1. Donar arboles\n");
     printf("2. Observar los arboles donados\n");
     printf("3. Zonas de reforestacion\n");
     printf("4. Salir del programa\n");
     printf("Ingrese la opcion deseada: ");
     scanf("%d", &opcion);
 switch (opcion) { 
   // opcion 1
   case 1: 
     printf("\n-DONAR ARBOLES-\n");
     printf("Elegir la especie de arbol:\n");
     printf("1. Arrayan\n");
     printf("2. Achapo\n");
     printf("3. Gualanday\n");
     printf("Ingrese la opcion deseada: ");
   // ingreso la cantidad de arboles 
   int especie;
     scanf("%d", &especie);
     printf("Ingresar la cantidad de arboles : ");
   int cantidad; 
     scanf("%d", &cantidad);
   // confirmacion de la donacion 
     printf("¿Desea confirmar la donacion? (s/n): ");
   char confirmacion;
     scanf(" %c", &confirmacion);
 if (confirmacion == 's' || confirmacion == 'S') { arboles_donados += cantidad;
     printf("¡GRACIAS POR TU DONACION!\n");
    }
    // cancelacion de la donacion 
     else {
     printf("Cancelar la donacion\n");
    } 
    break;
  // opcion 2
    case 2:
     printf("\n-OBSERVAR LOS ARBOLES DONADOS-\n");
   char usuario[20];
     printf("Ingresar nombre de usuario: ");
     scanf("%s", usuario);
     printf("Arboles donados por %s:\n", usuario);
  // se muestra lista de arboles donados por el usuario 
     printf("Seleccione un arbol para ver seguimiento: ");
   int arbol_seleccionado;
     scanf("%d", &arbol_seleccionado);
  // se muestra informacion del arbol seleccionado  
    break; 
  // opcion 3
    case 3:
     printf("\n-ZONAS DE REFORESTACION-\n");
     printf("Seleccione una opcion:\n");
     printf("1. Ver zonas sin reforestar\n");
     printf("2. Ver zonas reforestadas\n");
     printf("Ingrese la opcion deseada: ");
   int opcion_zonas;
     scanf("%d", &opcion_zonas);
    if (opcion_zonas == 1) {
  // se muestra mapa con las zonas sin reforestar  
    } 
    else {
  // se muestra mapa con las zonas reforestadas 
    } 
     printf("Seleccione cualquier zona para ver su informacion: ");
   int zona_seleccionada; 
     scanf("%d", &zona_seleccionada);
  // se muestra informacion de la zona seleccionada 
    break;
    //opcion 4
    case 4: 
     printf("\n¡Hasta luego, vuelva pronto!\n");
    break;
    default:
     printf("\nOpción no valida, por favor ingrese una opcion valida\n");
    break;
    } 
    } 
    while (opcion != 4);
     return 0;
     }                                                    
