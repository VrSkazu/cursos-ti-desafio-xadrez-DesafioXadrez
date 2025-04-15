#include <stdio.h>

int casastorre = 5;

int casasbispo = 3;

int casasrainha = 8;

int casascavalo = 3;

void moveratorre(int casas){
    
    if(casas <= 0) return;
    printf("direita\n");
    moveratorre(casas - 1);
}

void moverbispo(int casasverticais, int casashorizontais){
    for (int i = 0; i < casasverticais; i++){
        for (int j = 0; j < casashorizontais; j++){
            printf("direita\n");
        }
        printf("cima\n");
    }
    
}

void moverrainha(int casas){
    if (casas <= 0) return;
    {
        printf("esqueda\n");
        moverrainha(casas - 1);
    }
    
}

void movercavalo(){
    for (int i = 0; i < 3; i++){
       for (int j = 0; j < 3; j++){
        if (i == 0 && j == 2){
            printf("cima\n");
            printf("cima\n");
            printf("direita\n");
            break;
         } else {
            continue;
         }
        
       }
       
    }
    
}


int main(){
    printf("movimento da torre: \n");
    moveratorre(casastorre);

    printf("\n movimento do bispo na diagonal: \n");
    moverbispo(5, 1);

    printf("\n movimento da rainha: \n");
    moverrainha(casasrainha);

    printf("\nmovimento do cavalo: \n");
    movercavalo();



    return 0;
}