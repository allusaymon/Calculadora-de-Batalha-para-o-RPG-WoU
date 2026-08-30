/*Este algoritmo não engloba a fusão de variação e o uso simultâneo de + de uma variação ou + de uma magia. A responsabilidade disso fica pro Mestre
caso o jogador utilize mais de uma skill, usa a estrutura de repetição for mesmo.*/
#include <stdio.h>
#include <string.h>

int main() {
    int ForcaReaper = 101, ForcaIvy = 118, DefesaReaper = 99, VeloReaper = 112, ForcaAU = 58, DefesaAU = 50, VeloAU = 63;
    int Forca, Defesa, Velo;
    int level = 0;
    float DanoNormal, DanoBom, DanoPerfeito, DanoExtremo;
    char skillOpcao, espadaOpcao, turno;
    char vetEspadaopcao1[10];

    /*Valores das variacoes e magias*/
    int US = 2, GS = 3, BCS = 6, ANS = 3, SSS = 5, KS = 5, BS = 3, WS = 8, OHCS = 5;
    int FSS = 6, CS = 6, TS = 6, CAS = 6, KAS = 5, BES = 3;
    int MO = 16, HU = 13, VD = 13, PU = 10, SG = 7, GB = 4;

    printf("O turno eh de Reaper ou Eredin?\nDiga A para Reaper e B para Eredin:\n");
    scanf(" %c", &turno);
    int *ForcaAtual, *DefesaAtual, *VeloAtual;
    ForcaAtual = (turno == 'A') ? &ForcaReaper : &ForcaAU;
    DefesaAtual = (turno == 'A') ? &DefesaReaper : &DefesaAU;
    VeloAtual = (turno == 'A') ? &VeloReaper : &VeloAU;
    
    printf("\nQual eh o valor da Forca do oponente?\n");
    scanf("%d", &Forca);
    printf("\nQual eh o valor da Defesa do oponente?\n");
    scanf("%d", &Defesa);
    printf("\nQual eh o valor da Velocidade do oponente?\n");
    scanf("%d", &Velo);
    
    int numSkills;
    printf("\nQuantas skills %s esta utilizando neste turno?\n", (turno == 'A') ? "Reaper" : "Eredin");
    scanf("%d", &numSkills);

    for (int i = 0; i < numSkills; i++) {
        printf("\nSkill %d\n", i + 1);
        printf("\nO que %s esta usando como Skill?\nDiga A para 'Variacao' e B para 'Magia':\n", (turno == 'A') ? "Reaper" : "Eredin");
        scanf(" %c", &skillOpcao);
    
        if (skillOpcao == 'A') {
            printf("\nEm que nivel Reaper esta?\n");
            scanf("%d", &level);
    
            printf("\nQuais delas ele esta usando?\n");
            printf("Lista de Variacoes:\nUsapir Sword(US)\t\tGengar Sword(GS)\nBone Chimera Sword(BCS)\t\tAnimal Needle Sword(ANS)\nShootingStar Sword(SSS)\t\tKraken Sword(KS)\nBlueEgg Sword(BS)\t\tWry Sword(WS)\n100 Cuts Sword(OHCS)\t\tFang Shark Sword(FSS)\nCrimson Sword(CS)\t\tThunder Sword(TS)\nCactus Sword(CAS)\t\tKani Sword(KAS)\nBeetle Sword(BES)\n");
            scanf("%s", vetEspadaopcao1);
            
            if (turno == 'A') {
                printf("\nEle esta usando a Espada Ivy ou a Espada Lendaria?\nDiga A para Ivy e B para Lendaria:\n");
                scanf(" %c", &espadaOpcao); 
            }
    
            int valorEspada = 0;
            if (strcmp(vetEspadaopcao1, "US") == 0) valorEspada = US;
            else if (strcmp(vetEspadaopcao1, "GS") == 0) valorEspada = GS;
            else if (strcmp(vetEspadaopcao1, "BCS") == 0) valorEspada = BCS;
            else if (strcmp(vetEspadaopcao1, "ANS") == 0) valorEspada = ANS;
            else if (strcmp(vetEspadaopcao1, "SSS") == 0) valorEspada = SSS;
            else if (strcmp(vetEspadaopcao1, "KS") == 0) valorEspada = KS;
            else if (strcmp(vetEspadaopcao1, "BS") == 0) valorEspada = BS;
            else if (strcmp(vetEspadaopcao1, "WS") == 0) valorEspada = WS;
            else if (strcmp(vetEspadaopcao1, "OHCS") == 0) valorEspada = OHCS;
            else if (strcmp(vetEspadaopcao1, "FSS") == 0) valorEspada = FSS;
            else if (strcmp(vetEspadaopcao1, "CS") == 0) valorEspada = CS;
            else if (strcmp(vetEspadaopcao1, "TS") == 0) valorEspada = TS;
            else if (strcmp(vetEspadaopcao1, "CAS") == 0) valorEspada = CAS;
            else if (strcmp(vetEspadaopcao1, "KAS") == 0) valorEspada = KAS;
            else if (strcmp(vetEspadaopcao1, "BES") == 0) valorEspada = BES;

            if (espadaOpcao == 'A') {
                *ForcaAtual += level + valorEspada;
            } else if (espadaOpcao == 'B'){
                *ForcaAtual += level + valorEspada;
            }
            
            if (strcmp(vetEspadaopcao1, "US") == 0) { 
                *ForcaAtual += US;
                *VeloAtual += US;
            } else if (strcmp(vetEspadaopcao1, "OHCS") == 0) { 
                *ForcaAtual += OHCS;
                *VeloAtual += OHCS;
            } else if (strcmp(vetEspadaopcao1, "ANS") == 0) { 
                *ForcaAtual += ANS;
                *VeloAtual += ANS;
            }
    
        } else if (skillOpcao == 'B') {
            printf("\nQuais delas ele esta usando?:\n");
            printf("Lista de Magias:\nMagia Ofensiva(MO)\t\tHurricane(HU)\nVanishing Drive(VD)\t\tPurgatory(PU)\nSchnell Guard (SG)\t\tGale Burst (GB)\n");
            scanf("%s", vetEspadaopcao1);
    
            if (turno == 'A') {
                printf("\nEle esta usando a Espada Ivy ou a Espada Lendaria? Diga A para Ivy e B para Lendaria:\n");
                scanf(" %c", &espadaOpcao);
            }
    
            int valorMagia = 0;
            if (strcmp(vetEspadaopcao1, "MO") == 0) valorMagia = MO;
            else if (strcmp(vetEspadaopcao1, "HU") == 0) valorMagia = HU;
            else if (strcmp(vetEspadaopcao1, "VD") == 0) valorMagia = VD;
            else if (strcmp(vetEspadaopcao1, "PU") == 0) valorMagia = PU;
            else if (strcmp(vetEspadaopcao1, "SG") == 0) valorMagia = SG;
            else if (strcmp(vetEspadaopcao1, "GB") == 0) valorMagia = GB;
    
            if (espadaOpcao == 'A') {
                *ForcaAtual = ForcaIvy;
            } else if (espadaOpcao == 'B'){
                *ForcaAtual = ForcaReaper;
            }
                
            if (strcmp(vetEspadaopcao1, "MO") == 0) { 
                *ForcaAtual += MO;
            } else if (strcmp(vetEspadaopcao1, "HU") == 0) {
                *ForcaAtual += HU;
            } else if (strcmp(vetEspadaopcao1, "VD") == 0) {
                *VeloAtual += VD;
            } else if (strcmp(vetEspadaopcao1, "PU") == 0) {
                *ForcaAtual += PU;
            } else if (strcmp(vetEspadaopcao1, "SG") == 0) {
                *VeloAtual += SG;
            } else if (strcmp(vetEspadaopcao1, "GB") == 0) {
                *ForcaAtual += GB; 
            }
        }
    }

    /*Escolha de ataque ou defesa*/
    char acao;
    printf("\n%s esta atacando ou defendendo?\nDiga A para ataque e B para defesa:\n", (turno == 'A') ? "Reaper" : "Eredin");
    scanf(" %c", &acao);

    if (acao == 'A') {
        DanoNormal = *ForcaAtual - Defesa;
    } else {
        DanoNormal = Forca - *DefesaAtual;
    }

    /*Lógica de cálculo de dano*/
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

    /*Saída dos resultados*/
    printf("\nResultados do calculo de dano:\n");
    printf("Dano Normal: %.2f\n", DanoNormal);
    printf("Dano Bom: %.2f\n", DanoBom);
    printf("Dano Perfeito: %.2f\n", DanoPerfeito);
    printf("Dano Extremo: %.2f\n", DanoExtremo);

    /*Comparação de velocidade*/
    int difVel = (turno == 'A' ? VeloReaper : VeloAU) - Velo;
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
