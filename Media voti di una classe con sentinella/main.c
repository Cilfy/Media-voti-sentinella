// Media voti di una classe con sentinella
#include <stdio.h>

int main( void )
{
    unsigned int counter; // contatore
    int grade; // valore del voto
    int total; // somma dei voti
    int average; // media dei voti
    
    // fase di inizializzazione
    total = 0; // inizializza il totale
    counter = 0; // inizializza il contatore
    
    // fase di elaborazione
    // prompt per l'input, primo voto
    printf( "%s", "Enter grade, -1 to end: " );
    scanf( "%d", &grade ) ; // leggi il voto
    
    while ( grade != -1 ) { 
       total = total + grade; // Somma
       counter = counter + 1; // Incrementa  
       printf( "%s", "Enter grade, -1 to end " ) ; // prompt
       scanf( "%d", &grade ) ; // leggi il voto
      
} // fine while

    // se l'utente ha inserito almeno un voto
    if ( counter != 0 ) {
        
        average = total / counter; // divisione intera
        
        // media con precisione di due cifre
        printf( "Class average is %d\n", average );
        
    } // fine di if
    
    else { // se non sono stati inseriti voti
        puts( "No grades were entered" ) ;
    } // fine di else
    
} // fine della funzione main
 

 

