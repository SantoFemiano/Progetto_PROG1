//
//  libreria.h
//  Simulazione Dinamica Cellule
//
//  Santo Femiano
//

#ifndef libreria_h
#define libreria_h


void primacellulanera(char mat[][80]) /*Questa funzione ha come parametro di input/output una matrice 2D (ovvero la matrice "cellule")*/
  {
      /*Riempiamo la matrice di spazi vuoti (di cellule bianche)*/
    int i,j;
    for (i=0 ; i<=79 ; i++){
     for (j=0 ; j<=79 ; j++){
      mat[i][j]=' ';
            
                               }
                           }
    mat[0][40]='X'; //Inserisco la prima cellula nera nel mezzo della prima riga.
}
      

             

void stampa(char mat[][80],int n) /* Questa funzione ha come parametri di input/output la matrice e un numero intero (l'indice delle righe)*/
{
    /*Con questa function andiamo a stampare la matrice nei vari step (scelti dalla traccia:4,8,16,32,64,80
     */
    int i=0,j=0;

    if(n==3 ||n==7 ||n==15 ||n==31 ||n==63 ||n==79){
    
          printf("\nStep:%d\n",n+1);
          printf("|-------------------------------------------------------------------------------|\n");
       
     for (i=0;i<=79;i++){
     for (j=0;j<=79;j++){
         
          printf("%c",mat[i][j]);
                        }
          printf("  %d",i+1);
          printf("\n");
                      }
        
          printf("|-------------------------------------------------------------------------------|\n");

                                                  }
}


#endif /* libreria_h */
