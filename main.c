//
//  main.c
//  Simulazione Dinamica Cellule
//
//  Santo Femiano
//

#include <stdio.h> /*Dichiaro le librerie stdio e stdlib e gli header file che contengono i prototipi e la libreria con le function*/
#include <stdlib.h>
#include "prototipi.h"
#include "libreria.h"

int main(){

     char cellule[80][80];  // dichiaro la matrice principale 2D di dimensioni 80x80 con gli indici corrispondenti i e j
     int i,j;
    
    
     primacellulanera(cellule); //richiamo la function "primacellulanera"

    
    /* All'interno di 2 for innestati vado a porre le condizioni per poter far diventare le cellule bianche in nere (condizioni dettate dalla traccia1)*/
    for (i=0 ; i<=79 ; i++){
     for (j=0 ; j<=79 ; j++){
         
  /*A*/  if (cellule[i-1][j] && cellule[i-1][j-1]=='X' && cellule[i-1][j+1]==' '){
      cellule[i][j]='X';
           }
            
  /*B*/  if (cellule[i-1][j-1]=='X' && cellule[i-1][j] && cellule[i-1][j+1]==' '){
      cellule[i][j]='X';
           }
            
  /*C*/  if (cellule[i-1][j] && cellule[i-1][j+1]=='X' && cellule[i-1][j-1]==' '){
      cellule[i][j]='X';
           }
        
  /*D*/  if (cellule[i-1][j+1]=='X' && cellule[i-1][j] && cellule[i-1][j-1]==' '){
      cellule[i][j]='X';
           }
            
                           }
        stampa(cellule,i); //richiamo la function "stampa"
                          }
     return 0;
}
