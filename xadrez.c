#include <stdio.h>

void movimentoTorre (){
    //Estrutura de repetição for para simular movimento da Torre 5 casas para a direita

    for (int i = 1; i <=5; i++) {
        printf("\nTorre movendo para a Direita");
    }
    printf("\n\n");
}

void movimentoRainha(){
    
    //Estrutura de repetição do-while para simular movimento da rainha 8 casas para a esquerda
    
    int i=1;

    do{
        printf("\nRainha movendo para a Esquerda");
        i++;
    }while(i <= 8);

    printf("\n\n");

}

void movimentoBispo(){
    
    //Estrutura de repetição while para simular movimento do bispo 5 casa para cima, direita (diagonal)
    int b = 1;

    while(b <= 5){
        printf("\nBispo movendo para cima, direita");
        b++;
    }
    printf("\n\n");
}

void movimentoBispoMelhorado(){
    for(int i = 0; i <=5; i++){
        //movimento vertical, cima
        printf("\nBispo para cima");

        for(int b = 0; b<=5; b++){
            //movimento horizontal, direita
            printf("\nBispo para direita");
            break; //sai do laço
        }
    }
    printf("\n\n");
}

void movimentoCavalo(){

    //Estrutura aninhada com for e while para simular o movimento do cavalo
    for(int i=1; i <=2; i++){
        printf("\nCavalo movimentando para cima");

        if(i==2){ //nessa estrutura em particular tive que usar o if para que ele não fizesse as duas estruturas ao mesmo tempo, o movimento do cavalo é em "L" sendo duas para cima e uma para o lado, sem o if ele estava atropelando e indo para o segundo laço sem terminar o primeiro, acabava ficando um movimento divergente da peça.
            int c = 1;
            while(c <=1){
            printf("\nCavalo movimentando para a direita");
            c++;
            }
        }
        
    }
}

void movimentoCavaloMelhorado(){
    //fica no laço até que i seja menor ou igual a 2 OU c seja menor ou igual a 1
    for(int i = 1, c = 1; i<=2 || c<=1; i++, c++){
        printf("\nCavalo movimentando para cima");

        if(i==2){
            //Quando terminar o laço i será igual a 2, assim que for igual a 2 roda essa linha
            printf("\nCavalo movimentando para a direita");
        }
    }
}

int main (){
    //Chamada das funções
    //Recursividade

    movimentoTorre();
    movimentoBispoMelhorado();
    movimentoRainha();
    movimentoCavaloMelhorado();

    return 0;
}   
