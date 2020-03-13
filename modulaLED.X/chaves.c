#include <xc.h>                 // Inclui biblioteca pad�o para uC PIC

void initChave( void )         // Procedimento que inicializa o acesso � chave.
{
    TRISDbits.TRISD3 = 1;       //  Configura pino RD3 como Entrada.
}

unsigned char chave( void )    // Fun��o que acessa o valor da chave.
{
    return( PORTDbits.RD3 );    // Retorna o valor lido de RD3.
}
