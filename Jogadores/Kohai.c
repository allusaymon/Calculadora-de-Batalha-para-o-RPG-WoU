/*Este algoritmo não engloba a fusão de variação e o uso simultâneo de + de uma variação ou + de uma magia. A responsabilidade disso fica pro Mestre.*/
#include <stdio.h>
#include <string.h>

int main() {
    int ForcaKohai = 164, DefesaKohai = 96, VeloKohai = 108;
    int Forca, Defesa, Velo;
    int level = 0;
    float DanoNormal, DanoBom, DanoPerfeito, DanoExtremo;
    char skillOpcao;
    char vetLancaopcao1[10];

    /* Valores das swords e magias */
    int NS = 6, KS = 5, MS = 7, PS = 3, CS = 5, LS = 5, SSS = 5, SOS = 1, BNS = 4;
    int ANS = 3, MES = 5, GS = 6, CAS = 6, FSS = 6, CHS = 7, GES = 3, SS = 3, BIOS = 3, BS = 4;
    int ED = 12, LV = 10, DD = 14;

    printf("Qual eh o valor da Forca do oponente?\n");
    scanf("%d", &Forca);
    printf("\nQual eh o valor da Defesa do oponente?\n");
    scanf("%d", &Defesa);
    printf("\nQual eh o valor da Velocidade do oponente?\n");
    scanf("%d", &Velo);
    
    int numSkills;
    printf("\nQuantas skills Kohai esta utilizando neste turno?\n");
    scanf("%d", &numSkills);

    for (int i = 0; i < numSkills; i++) {
        printf("\nSkill %d\n", i + 1);
        printf("\nO que Kohai esta usando como Skill?\nDiga A para 'Variacao' e B para 'Magia':\n");
        scanf(" %c", &skillOpcao);
    
        if (skillOpcao == 'A') {
            printf("\nEm que nivel Kohai esta?\n");
            scanf("%d", &level);
    
            printf("\nQuais delas ele esta usando?\n");
            printf("Lista de Variacoes:\nNue Spear(NS)\t\tKraken Spear(KS)\nMothra Spear(MS)\t\tParalyze Spear(PS)\nCaecilas Spear(CS)\t\tLocust Spear(LS)\nShooting Star Spear(SSS)\t\tSmall Orange Spear(SOS)\nBee Neddle Spear(BNS)\t\tAnimal Neddle Spear(ANS)\nMeteor Spear(MES)\t\tGolem Spear(GS)\nCream Alligator Spear(CAS)\t\tFang Shark Spear(FSS)\nChaos Spear(CHS)\t\tGengar Spear(GES)\nShining Spear(SS)\t\tBioPlant Spear(BIOS)\nBeetle Spear(BS)\n");
            scanf("%s", vetLancaopcao1);
    
            int valorLanca = 0;
            if (strcmp(vetLancaopcao1, "NS") == 0) valorLanca = NS;
            else if (strcmp(vetLancaopcao1, "KS") == 0) valorLanca = KS;
            else if (strcmp(vetLancaopcao1, "MS") == 0) valorLanca = MS;
            else if (strcmp(vetLancaopcao1, "PS") == 0) valorLanca = PS;
            else if (strcmp(vetLancaopcao1, "CS") == 0) valorLanca = CS;
            else if (strcmp(vetLancaopcao1, "LS") == 0) valorLanca = LS;
            else if (strcmp(vetLancaopcao1, "SSS") == 0) valorLanca = SSS;
            else if (strcmp(vetLancaopcao1, "SOS") == 0) valorLanca = SOS;
            else if (strcmp(vetLancaopcao1, "BNS") == 0) valorLanca = BNS;
            else if (strcmp(vetLancaopcao1, "ANS") == 0) valorLanca = ANS;
            else if (strcmp(vetLancaopcao1, "MES") == 0) valorLanca = MES;
            else if (strcmp(vetLancaopcao1, "GS") == 0) valorLanca = GS;
            else if (strcmp(vetLancaopcao1, "CAS") == 0) valorLanca = CAS;
            else if (strcmp(vetLancaopcao1, "FSS") == 0) valorLanca = FSS;
            else if (strcmp(vetLancaopcao1, "CHS") == 0) valorLanca = CHS;
            else if (strcmp(vetLancaopcao1, "GES") == 0) valorLanca = GES;
            else if (strcmp(vetLancaopcao1, "SS") == 0) valorLanca = SS;
            else if (strcmp(vetLancaopcao1, "BIOS") == 0) valorLanca = BIOS;
            else if (strcmp(vetLancaopcao1, "BS") == 0) valorLanca = BS;

            ForcaKohai += level + valorLanca;
    
        } else if (skillOpcao == 'B') {
            printf("\nQuais delas ele esta usando?:\n");
            printf("Lista de Magias:\nEscuridao Divina(ED)\t\tLanca Vendaval(LV)\nDragoes Divinos(DD)\n");
            scanf("%s", vetLancaopcao1);
    
            int valorMagia = 0;
            if (strcmp(vetLancaopcao1, "ED") == 0) valorMagia = ED;
            else if (strcmp(vetLancaopcao1, "LV") == 0) valorMagia = LV;
            else if (strcmp(vetLancaopcao1, "DD") == 0) valorMagia = DD;
    
            if (strcmp(vetLancaopcao1, "ED") == 0) {
                ForcaKohai += ED;
                DefesaKohai += ED; 
                VeloKohai += ED;
            } else if (strcmp(vetLancaopcao1, "LV") == 0) {
                ForcaKohai += LV;
            } else if (strcmp(vetLancaopcao1, "DD") == 0) {
                ForcaKohai += DD;
            }
        }
    }

    /* Escolha de ataque ou defesa */
    char acao;
    printf("\nKohai esta atacando ou defendendo?\nDiga A para ataque e B para defesa:\n");
    scanf(" %c", &acao);

    if (acao == 'A') {
        DanoNormal = ForcaKohai - Defesa;
    } else if (acao == 'B') {
        DanoNormal = Forca - DefesaKohai;
    }

    /* Lógica de cálculo de dano */
    if (DanoNormal > 0 && DanoNormal <= 10) {
        DanoBom = 2 * DanoNormal;
        DanoPerfeito = 3 * DanoNormal;
        DanoExtremo = 4 * DanoNormal;
    } else if (DanoNormal > 10 && DanoNormal <= 500) {
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
        DanoBom = DanoPerfeito = DanoExtremo = 0;
    }

    /* Saída dos resultados */
    printf("\nResultados do calculo de dano:\n");
    printf("Dano Normal: %.2f\n", DanoNormal);
    printf("Dano Bom: %.2f\n", DanoBom);
    printf("Dano Perfeito: %.2f\n", DanoPerfeito);
    printf("Dano Extremo: %.2f\n", DanoExtremo);

    /* Comparação de velocidade */
    int difVel = VeloKohai - Velo;
    printf("\nDiferenca de velocidade: %d\n", difVel);
    if ((difVel >= 1 && difVel <= 25) || (difVel <= 0 && difVel >= -25)) {
        printf("Entre 1~25: Voce consegue atacar primeiro, contanto que nao falhe. Se o adversario falhar, voce ganha direito a mais um turno.\n");
    } else if ((difVel >= 26 && difVel <= 50) || (difVel <= -26 && difVel >= -50)) {
        printf("Entre 26~50: Voce ataca primeiro e pode ter turno extra caso o adversario atinja 'normal', com voce tirando classificacao superior.\nNesta ocasiao, o adversario apenas enxerga uma miragem de velocidade.\n");
    } else if ((difVel >= 51 && difVel <= 75) || (difVel <= -51 && difVel >= -75)) {
        printf("Entre 51~75: O adversario apenas ve um vulto passando, devido seu olho nao estar acostumado.\n");
    }

    return 0;
}
