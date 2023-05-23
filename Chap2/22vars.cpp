/* Vamos verificar se as variáveis básicas
 * continuam funcionando.*/

# include <climits>
# include <iostream>

int main(void){
    /*
    for(int x = INT_MIN; x < INT_MAX; ++x)
        printf("%d\n",x);
    */
    /*
    for(char x = 'A'; x <= 'z'; ++x)
        printf("%c\n",x);
    */
    for(char x = 0; x <= 254; ++x)
        printf("%c\n",x);
    return 0;
}

/* iostream já adiciona a função printf(). 
 * As bibliotecas padrão do C estão presentes
 * sob o nome c[biblioteca]
 * */
