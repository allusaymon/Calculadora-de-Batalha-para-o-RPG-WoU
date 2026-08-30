/*Consiste em contemplar apenas o turno do atacante, como versão beta*/
#include <stdio.h>

int main() {
    float forca, defesa, velo1, velo2, DanoNormal, DanoBom, DanoPerfeito, DanoExtremo;

    /*Entrada de valores de atributo*/
    printf("Digite o valor da força de quem está atacando:\n ");
    scanf("%f", &forca);
    printf("\nDigite o valor da defesa de quem receberá o ataque:\n");
    scanf("%f", &defesa);
    printf("\nDigite o valor da velocidade de quem ataca:\n");
    scanf("%f", &velo1);
    printf("\nDigite o valor da velocidade de quem recebe:\n");
    scanf("%f", &velo2);
    

    /*Cálculo do dano normal, que será a base para os outros*/
    DanoNormal = forca - defesa;

    /*Lógica de cálculo de dano*/
    if (DanoNormal > 0 && DanoNormal >= 1 && DanoNormal <= 10) {
        DanoBom = 2 * DanoNormal;
        DanoPerfeito = 3 * DanoNormal;
        DanoExtremo = 4 * DanoNormal;
    } else if (DanoNormal > 0 && DanoNormal >= 11 && DanoNormal <= 500) {
        DanoExtremo = 2 * DanoNormal;
        DanoBom = DanoNormal + (0.2 * DanoExtremo);
        DanoPerfeito = DanoBom + (0.2 * DanoExtremo);
    } else if (DanoNormal < 0 && DanoNormal >= -30) {
        DanoBom = DanoNormal - (0.7 * DanoNormal);
        DanoPerfeito = DanoBom - (0.7 * DanoNormal);
        DanoExtremo = DanoPerfeito;
    } else if (DanoNormal < 0 && DanoNormal >= -69) {
        DanoBom = DanoNormal - (0.4 * DanoNormal);
        DanoPerfeito = DanoBom - (0.4 * DanoNormal);
        DanoExtremo = DanoPerfeito - (0.4 * DanoNormal);
    } else {
        /*Se o dano não se encaixa em nenhuma categoria específica, vou definir como 0 para atribuir alguma regra depois*/
        DanoBom = 0;
        DanoPerfeito = 0;
        DanoExtremo = 0;
    }

    /*Agora os printsf de saída:*/
    printf("\nResultados do cálculo de dano:\n");
    printf("Dano Normal: %.2f\n", DanoNormal);
    printf("Dano Bom: %.2f\n", DanoBom);
    printf("Dano Perfeito: %.2f\n", DanoPerfeito);
    printf("Dano Extremo: %.2f\n", DanoExtremo);
    
    /*Por fim, ao invés de utilizar loops para reniciar turnos baseado na diferença de velocidade entre os players, decidi apenas imprimir a diferença de velocidade deles e o efeito que é gerado*/
    int difVel = velo1 - velo2;
    printf("\nDiferenca de velocidade: %d\n", difVel);
    if (difVel >= 1 && difVel <= 25 || difVel<=0 && difVel>= -25) {
        printf("Entre 1~25: Voce consegue atacar primeiro, contanto que nao falhe. Se o adversario falhar, voce ganha direito a mais um turno.\n");
    } else if (difVel >= 26 && difVel <= 50 || difVel<= -26 && difVel>= -50) {
        printf("Entre 26~50: Voce ataca primeiro e pode ter turno extra caso o adversario atinja 'normal', com voce tirando classificacao superior.\nNesta ocasiao, o adversario apenas enxerga uma miragem de velocidade.\n");
    } else if (difVel >= 51 && difVel <= 75 || difVel<= -51 && difVel>= -75) {
        printf("Entre 51~75: O adversario apenas ve um vulto passando, devido seu olho nao estar acostumado.\n");
    }

    return 0;
}
