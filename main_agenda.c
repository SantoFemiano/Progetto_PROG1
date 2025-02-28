//
//  main.c
//  Traccia 2
//
//  Santo Femiano
//

/*Dichiaro le librerie stdio e stdlib e gli header file che contengono i prototipi e la libreria con le function*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prototipi.h"
#include "libreria.h"

int main() 
{
    char agenda[12][30][24]={0}; //dichiaro un array 3D di tipo char che contiene esattamente Mesi Giorni e Ore di un Agenda
                                 // l'array viene inizializzato con il valore 0 per evitare stampe equivoche.
    int mese=0,giorno=0,ora=0,scelta=0; //dichiaro le variabili intera che indicano mese giorno e ora
                                        //dichiaro la variabile intera "scelta" che permette all'utente di scegliere tra le varie azioni possibili e indicate tramite la "grafica" in basso.

    printf("\nCosa si desidera fare?\n");
    printf("-----------------------------------");
    printf("\n1.Visualizzare un appuntamento\n");
    printf("2.Inserire un appuntamento\n");
    printf("3.Visualizzare tutti gli appuntamenti di un mese in un certo ora\n");
    printf("4.Cancellare un appuntamento\n");
    printf("..Digita -1 per Uscire dall'Agenda..\n");
    printf("-----------------------------------");

    while(scelta!=-1){ //permetto all'utente di effettuare delle scelte affinchè voglia uscire dal programma digitando -1 come input, ogni scelta richiama una function della libreria.
    printf("\nDigita la tua scelta:");
    scanf("%d",&scelta);
        
    if(scelta==1){
        sceltauno(scelta, agenda, mese, giorno, ora);
    }
        
    if(scelta==2){
        sceltadue(scelta, agenda, mese, giorno, ora);
    }
    
    if(scelta==3){
        sceltatre(scelta, agenda, mese, giorno, ora);
    }
    
    if(scelta==4){
        sceltaquattro(scelta, agenda, mese, giorno, ora);
    }
                    }
 //quando l'utente digita -1 come input da tastiera si esce dal ciclo e si va a terminare il programma
  return 0;
}
