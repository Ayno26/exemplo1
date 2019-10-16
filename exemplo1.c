#include <stdio.h>

void main () {

    int *p; //p � uma vari�vel ponteiro para um valor int
    int x;
    x = 50;
    p = &x; //o operador & retorna com o endere�o da vari�vel x
    x = 20;
    *p = 30;

    //o operador * retorna o conte�do da posi��o de mem�ria para o qual o ponteiro aponta
    printf("\n Endereco da variavel x &x= %p",&x);
    printf("\n Valor de p= %p",p);
    printf("\n Endereco de p: &p= %p",&p);
    printf("\n Conteudo da variavel x= %i", x);
    printf("\n Conteudo de x, atraves de *p= %i",*p);

    *p = *p + 1;
    printf("\n Conteudo de x apos a atribuicao *p=*p+1 eh x=%i",x);

} //Fim main
