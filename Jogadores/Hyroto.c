/*Este algoritmo não engloba a fusão de variação e o uso simultâneo de + de uma variação ou + de uma magia. A responsabilidade disso fica pro Mestre.
caso o jogador utilize mais de uma skill, usa a estrutura de repetição for mesmo.*/
#include <stdio.h>
#include <string.h>

int main() {
    int ForcaHy = 36, DefesaHy = 193, VeloHy = 133, ForcaFohl = 61, DefesaFohl = 50, VeloFohl = 68;
    int Forca, Defesa, Velo;
    int level = 0;
    float DanoNormal, DanoBom, DanoPerfeito, DanoExtremo;
    char skillOpcao, turno;
    char vetEscudoopcao1[10];

    /*Valores das variacoes e magias*/
    int CS = 4, CHS = 6, CHGS = 6, SES = 7, RS = 8, PS = 8, ANS = 3, MS = 5, SOBS = 1;
    int KS = 5, FSS = 6, OS = 5, GS = 6, TS = 6, SP = 6, KAS = 6, SS = 5, ASS = 5;
    int GES = 3, LS = 2, PFS = 4, PIS = 1, BIOS = 5, CAS = 6, CALS = 1, PIES = 4, CACS = 3, CAES = 4, SHS = 2;
    int SB = 12, RM = 16, MB = 8, FT = 18;

    printf("O turno eh de Fohl ou de Hyroto?\nDiga A para Fohl e B para Hyroto:\n");
    scanf(" %c", &turno);
    
    int *ForcaAtual, *DefesaAtual, *VeloAtual;
    ForcaAtual = (turno == 'A') ? &ForcaFohl : &ForcaHy;
    DefesaAtual = (turno == 'A') ? &DefesaFohl : &DefesaHy;
    VeloAtual = (turno == 'A') ? &VeloFohl : &VeloHy;
    
    printf("\nQual eh o valor da Forca do oponente?\n");
    scanf("%d", &Forca);
    printf("\nQual eh o valor da Defesa do oponente?\n");
    scanf("%d", &Defesa);
    printf("\nQual eh o valor da Velocidade do oponente?\n");
    scanf("%d", &Velo);
    
    int numSkills;
    printf("\nQuantas skills %s esta utilizando neste turno?\n", (turno == 'A') ? "Fohl" : "Hyroto");
    scanf("%d", &numSkills);

    for (int i = 0; i < numSkills; i++) {
        printf("\nSkill %d\n", i + 1);
        printf("\nO que %s esta usando como Skill?\nDiga A para 'Variacao' e B para 'Magia':\n", (turno == 'A') ? "Fohl" : "Hyroto");
        scanf(" %c", &skillOpcao);
    
        if (skillOpcao == 'A') {
            printf("\nEm que nivel Hyroto esta?\n");
            scanf("%d", &level);
    
            printf("\nQuais delas ele esta usando?\n");
            printf("Lista de Variacoes:\nCerberus Shield(CS)\t\tChimera Shield(CHS)\nChimera Goat Shield(CHGS)\t\tSoul Eater Shield(SES)\nRisuka Shield(RS)\t\tPekkul Shield(PS)\nAnimal Neddle Shield(ANS)\t\tMedusa Shield(MS)\nSmall Orange Ballon Shield(SOBS)\t\tKraken Shield(KS)\nFang Shark Shield(FSS)\t\tOrtros Shield(OS)\nGolem Shield(GS)\t\tThunder Shield(TS)\nShield Prision(SP)\t\tKani Shield(KAS)\nScorplisy Shield(SS)\t\tAir Strike Shield(ASS)\nGengar Shield(GES)\t\tLeaf Shield(LS)\nPoison Frog Shield(PFS)\t\tPickaxe Shield(PIS)\nBioPlant Shield(BIOS)\t\tCream Alligator Shield(CAS)\nCalorie Shield(CALS)\t\tPiercing Shield(PIES)\nCactus Shield(CACS)\t\tCaecilas Shield(CAES)\nSharpening Shield(SHS)\n");
            scanf("%s", vetEscudoopcao1);
    
            int valorEscudo = 0;
            if (strcmp(vetEscudoopcao1, "CS") == 0) valorEscudo = CS;
            else if (strcmp(vetEscudoopcao1, "CHS") == 0) valorEscudo = CHS;
            else if (strcmp(vetEscudoopcao1, "CHGS") == 0) valorEscudo = CHGS;
            else if (strcmp(vetEscudoopcao1, "SES") == 0) valorEscudo = SES;
            else if (strcmp(vetEscudoopcao1, "RS") == 0) valorEscudo = RS;
            else if (strcmp(vetEscudoopcao1, "PS") == 0) valorEscudo = PS;
            else if (strcmp(vetEscudoopcao1, "ANS") == 0) valorEscudo = ANS;
            else if (strcmp(vetEscudoopcao1, "MS") == 0) valorEscudo = MS;
            else if (strcmp(vetEscudoopcao1, "SOBS") == 0) valorEscudo = SOBS;
            else if (strcmp(vetEscudoopcao1, "KS") == 0) valorEscudo = KS;
            else if (strcmp(vetEscudoopcao1, "OS") == 0) valorEscudo = OS;
            else if (strcmp(vetEscudoopcao1, "GS") == 0) valorEscudo = GS;
            else if (strcmp(vetEscudoopcao1, "TS") == 0) valorEscudo = TS;
            else if (strcmp(vetEscudoopcao1, "SP") == 0) valorEscudo = SP;
            else if (strcmp(vetEscudoopcao1, "KAS") == 0) valorEscudo = KAS;
            else if (strcmp(vetEscudoopcao1, "SS") == 0) valorEscudo = SS;
            else if (strcmp(vetEscudoopcao1, "ASS") == 0) valorEscudo = ASS;
            else if (strcmp(vetEscudoopcao1, "GES") == 0) valorEscudo = GES;
            else if (strcmp(vetEscudoopcao1, "LS") == 0) valorEscudo = LS;
            else if (strcmp(vetEscudoopcao1, "PFS") == 0) valorEscudo = PFS;
            else if (strcmp(vetEscudoopcao1, "PIS") == 0) valorEscudo = PIS;
            else if (strcmp(vetEscudoopcao1, "BIOS") == 0) valorEscudo = BIOS;
            else if (strcmp(vetEscudoopcao1, "CAS") == 0) valorEscudo = CAS;
            else if (strcmp(vetEscudoopcao1, "CALS") == 0) valorEscudo = CALS;
            else if (strcmp(vetEscudoopcao1, "PIES") == 0) valorEscudo = PIES;
            else if (strcmp(vetEscudoopcao1, "CACS") == 0) valorEscudo = CACS;
            else if (strcmp(vetEscudoopcao1, "CAES") == 0) valorEscudo = CAES;
            else if (strcmp(vetEscudoopcao1, "SHS") == 0) valorEscudo = SHS;
    
            *DefesaAtual += level + valorEscudo;
    
        } else if (skillOpcao == 'B') {
            printf("\nQuais delas ele esta usando?:\n");
            printf("Lista de Magias:\nSecond Boost(SB)\t\tResistencia Magica(RM)\nMoukun Boukun(MB)\t\tForma Teriantropa(FT)\n");
            scanf("%s", vetEscudoopcao1);
    
            int valorMagia = 0;
            if (strcmp(vetEscudoopcao1, "SB") == 0) valorMagia = SB;
            else if (strcmp(vetEscudoopcao1, "RM") == 0) valorMagia = RM;
            else if (strcmp(vetEscudoopcao1, "MB") == 0) valorMagia = MB;
            else if (strcmp(vetEscudoopcao1, "FT") == 0) valorMagia = FT;
    
            if (strcmp(vetEscudoopcao1, "SB") == 0) {
                *ForcaAtual += SB;
                *DefesaAtual += SB; 
                *VeloAtual += SB;
            } else if (strcmp(vetEscudoopcao1, "RS") == 0) {
                *DefesaAtual += RS;
            } else if (strcmp(vetEscudoopcao1, "MB") == 0) {
                *ForcaAtual += MB;
            } else if (strcmp(vetEscudoopcao1, "FT") == 0) {
                *ForcaAtual += FT;
                *DefesaAtual += FT;
                *VeloAtual += FT;
            }
        }
    }

    /* Escolha de ataque ou defesa */
    char acao;
    printf("\n%s esta atacando ou defendendo?\nDiga A para ataque e B para defesa:\n", (turno == 'A') ? "Fohl" : "Hyroto");
    scanf(" %c", &acao);

    if (acao == 'A') {
        DanoNormal = *ForcaAtual - Defesa;
    } else {
        DanoNormal = Forca - *DefesaAtual;
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
    int difVel = (turno == 'A' ? VeloFohl : VeloHy) - Velo;
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
