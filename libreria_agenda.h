//
//  libreria.h
//  Traccia 2
//
//  Santo Femiano
//

#ifndef libreria_h
#define libreria_h
/*
 Ogni function è collegata ad una scelta e prende in input l'array 3D "agenda", e 4 variabili intere ovvero: la variabile che contiene la scelta effettuata, il mese, il giorno e l'ora.
 */



/*1. La scelta numero 1 permette all'utente di poter visualizzare un appuntamento (se è presente) indicando un mese un giorno e ora.*/
void sceltauno(int s,char ag[][30][24],int m,int g,int o){
    
     if(s==1){
     printf("Inserire il mese:\n");
     scanf("%d",&m);
       
     printf("Inserire il giorno:\n");
     scanf("%d", &g);
       
     printf("Inserire ora:\n");
     scanf("%d", &o);
       
     if(ag[m][g][o]==0){ //se quella data ha valore 0 viene visualizzato un messaggio apposito)
     printf("Non e' presente nessun appuntamento.");
                       }
     else{ //altrimenti viene visualizzato l'appuntamento a schermo con data annessa.
     printf("Appunamento Trovato!\n Mese:%d \n Giorno:%d \n Ora:%d \n Descrizione:%s\n",m,g,o,&ag[m][g][o]);
         }
             }

}
     
/*2. La scelta numero 2 permette all'utente di poter scrivere un appuntamento in una certa data.*/
void sceltadue(int s,char ag[][30][24],int m,int g,int o){
        
   if(s==2){
    printf("Inserire il mese:\n");
    scanf("%d", &m);
       
    printf("Inserire il giorno:\n");
    scanf("%d", &g);
       
    printf("Inserire ora:\n");
    scanf("%d", &o);
       
    printf("Inserire l'appuntamento:\n");
    fflush(stdin);
    gets(&ag[m][g][o]);
    printf("L'appuntamento e'stato aggiunto nell'agenda\n");
    fflush(stdin);
           }
}

/*3. La scelta numero 3 permette all'utente di poter visualizzare tutti gli appuntamenti di un mese in una certa ora.*/
void sceltatre(int s,char ag[][30][24],int m,int g,int o){

   if(s==3){
       printf("Inserisci Mese:");
       scanf("%d",&m);
       
       printf("Inserisci Ora:");
       scanf("%d",&o);
       
       g=1; //inizializziamo il contatore dei giorni a 1.

       printf("\nAppunamento Trovati nel Mese:%d a quest'ora:%d \n",m,o);

       while(g<=31){ //andiamo a controllare tutti i giorni di quel mese a quell'ora
       if(ag[m][g][o]==0){  // se quel giorno ha valore 0 allora non ci sono appuntamenti.
       printf("\nGiorno %d:Nessun appuntamento.",g);
       fflush(stdin);
       g++;                      } //incrementa il numero di giorni controllati.
           
       else{ //altrimenti
       printf("\nGiorno:%d - Descrizione:%s",g,&ag[m][g][o]); //visualizza l'appuntamento presente.
       fflush(stdin);
       g++; //incrementa il numero di giorni controllati.
           }
                    }
            }
}

/*4. La scelta numero 4 permette all'utente di cancellare un appuntamento di una certa data.*/
void sceltaquattro(int s,char ag[][30][24],int m,int g,int o){

   if(s==4){
      printf("Inserire il mese:\n");
      scanf("%d", &m);
         
      printf("Inserire il giorno:\n");
      scanf("%d", &g);
         
      printf("Inserire ora:\n");
      scanf("%d", &o);
         
      printf("L'appuntamento e'stato disdetto\n");
      fflush(stdin);
       ag[m][g][o]=0; //in quella data assegniamo il valore 0 , quindi praticamente ripristiniamo il valore che aveva precedentemente.
            }
}


#endif /* libreria_h */
