#include <xc.h>                 // Inclui biblioteca padão para uC PIC

void initChave( void )         // Procedimento que inicializa o acesso à chave.
{
    TRISDbits.TRISD3 = 1;       //  Configura pino RD3 como Entrada.
}

unsigned char chave( void )    // Função que acessa o valor da chave.
{
    return( PORTDbits.RD3 );    // Retorna o valor lido de RD3.
}
