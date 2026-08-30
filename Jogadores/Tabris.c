/*Este algoritmo não engloba a fusão de variação e o uso simultâneo de + de uma variação ou + de uma magia. A responsabilidade disso fica pro Mestre.
caso o jogador utilize mais de uma skill, usa a estrutura de repetição for mesmo.*/
#include <stdio.h>
#include <string.h>

int main() {
    int ForcaTabris = 66, DefesaTabris = 88, VeloTabris = 107, ForcaMeg = 47, ForcaMegCan = 56, DefesaMeg = 58, VeloMeg = 56, ForcaMer = 18, DefesaMer = 21, VeloMer = 17;
    int Forca, Defesa, Velo;
    int level = 0;
    float DanoNormal, DanoBom, DanoPerfeito, DanoExtremo;
    char skillOpcao, arcoOpcao, turno;
    char vetArcoopcao1[10];

    /* Valores das variacoes e magias */
    int CA = 4, CHSA = 6, NA = 6, CSA = 8, AR = 3, ANA = 3, WA = 4, DA = 4, SB = 6;
    int TS = 6, RBA = 4, SOA = 1, RUA = 4, FSA = 6, BNA = 4, PFA = 5, KA = 5, PUFA = 5;
    int GB = 3, GES = 6, FIB = 1, GSB = 6, LB = 5;
    int LS = 18, RM = 8, FD = 13, FB = 13, ZHF = 15, AB = 13, AS = 3, FS = 4, GF = 4, FF = 11, DDF = 15;

    printf("O turno eh de Tabris, Megumin ou de Meruem?\nDiga A para Tabris, B para Megumin ou C para Meruem:\n");
    scanf(" %c", &turno);
    int *ForcaAtual, *DefesaAtual, *VeloAtual;
    ForcaAtual = (turno == 'A') ? &ForcaTabris : (turno == 'B') ? &ForcaMeg : &ForcaMer;
    DefesaAtual = (turno == 'A') ? &DefesaTabris : (turno == 'B') ? &DefesaMeg : &DefesaMer;
    VeloAtual = (turno == 'A') ? &VeloTabris : (turno == 'B') ? &VeloMeg : &VeloMer;
    
    printf("\nQual eh o valor da Forca do oponente?\n");
    scanf("%d", &Forca);
    printf("\nQual eh o valor da Defesa do oponente?\n");
    scanf("%d", &Defesa);
    printf("\nQual eh o valor da Velocidade do oponente?\n");
    scanf("%d", &Velo);
    
    int numSkills;
    printf("\nQuantas skills %s esta utilizando neste turno?\n", (turno == 'A') ? "Tabris" : (turno == 'B') ? "Megumin" : "Meruem");
    scanf("%d", &numSkills);

    for (int i = 0; i < numSkills; i++) {
        printf("\nSkill %d\n", i + 1);
        printf("\nO que %s esta usando como Skill?\nDiga A para 'Variacao' e B para 'Magia':\n", (turno == 'A') ? "Tabris" : (turno == 'B') ? "Megumin" : "Meruem");
        scanf(" %c", &skillOpcao);
    
        if (skillOpcao == 'A') {
            printf("\nEm que nivel Tabris esta?\n");
            scanf("%d", &level);
    
            printf("\nQuais delas ele esta usando?\n");
            printf("Lista de Variacoes:\nCerberus Arrow(CA)\t\t\tChimera Skull Arrow(CHSA)\nNue Arrow(NA)\t\t\tCactus Stain Arrow(CSA)\nArrow Rain(AR)\t\t\tAnimal Needle Arrow(ANA)\nWind Arrow(WA)\t\t\tDrilling Arrow(DA)\nSiderite Bow(SB)\t\t\tThunder Shoot(TS)\nRed Ballon Arrow(RBA)\t\t\tSmall Orange Arrow(SOA)\nRed Usapil Arrow(RUA)\t\t\tFang Shark Arrow(FSA)\nBee Neddle Arrow(BNA)\t\t\tPoison Frog Arrow(PFA)\nKraken Arrow(KA)\t\t\tPurple Frog Arrow(PUFA)\nGengar Bow(GB)\t\t\tGengar+1 Bow(GES)\nFillorial Bow(FIB)\t\t\tGengar Snake Bow(GSB)\nLocust Bow(LB)\n");
            scanf("%s", vetArcoopcao1);
    
            int valorArco = 0;
            if (strcmp(vetArcoopcao1, "CA") == 0) valorArco = CA;
            else if (strcmp(vetArcoopcao1, "CHSA") == 0) valorArco = CHSA;
            else if (strcmp(vetArcoopcao1, "NA") == 0) valorArco = NA;
            else if (strcmp(vetArcoopcao1, "CSA") == 0) valorArco = CSA;
            else if (strcmp(vetArcoopcao1, "AR") == 0) valorArco = AR;
            else if (strcmp(vetArcoopcao1, "ANA") == 0) valorArco = ANA;
            else if (strcmp(vetArcoopcao1, "WA") == 0) valorArco = WA;
            else if (strcmp(vetArcoopcao1, "DA") == 0) valorArco = DA;
            else if (strcmp(vetArcoopcao1, "SB") == 0) valorArco = SB;
            else if (strcmp(vetArcoopcao1, "TS") == 0) valorArco = TS;
            else if (strcmp(vetArcoopcao1, "RBA") == 0) valorArco = RBA;
            else if (strcmp(vetArcoopcao1, "SOA") == 0) valorArco = SOA;
            else if (strcmp(vetArcoopcao1, "RUA") == 0) valorArco = RUA;
            else if (strcmp(vetArcoopcao1, "FSA") == 0) valorArco = FSA;
            else if (strcmp(vetArcoopcao1, "BNA") == 0) valorArco = BNA;
            else if (strcmp(vetArcoopcao1, "PFA") == 0) valorArco = PFA;
            else if (strcmp(vetArcoopcao1, "KA") == 0) valorArco = KA;
            else if (strcmp(vetArcoopcao1, "PUFA") == 0) valorArco = PUFA;
            else if (strcmp(vetArcoopcao1, "GB") == 0) valorArco = GB;
            else if (strcmp(vetArcoopcao1, "GES") == 0) valorArco = GES;
            else if (strcmp(vetArcoopcao1, "FIB") == 0) valorArco = FIB;
            else if (strcmp(vetArcoopcao1, "GSB") == 0) valorArco = GSB;
            else if (strcmp(vetArcoopcao1, "LB") == 0) valorArco = LB;
    
            *ForcaAtual += level + valorArco;
            if (strcmp(vetArcoopcao1, "ANA") == 0) { 
                *ForcaAtual += ANA;
                *VeloAtual += ANA;
            } else if (strcmp(vetArcoopcao1, "FSA") == 0) { 
                *ForcaAtual += FSA;
                *VeloAtual += FSA;
            } else if (strcmp(vetArcoopcao1, "BNA") == 0) { 
                *ForcaAtual += BNA;
                *VeloAtual += BNA;    
            } else if (strcmp(vetArcoopcao1, "LB") == 0) {
                *VeloAtual += LB;
            }

        } else if (skillOpcao == 'B') {
            printf("\nQuais delas ele esta usando?:\n");
            printf("Lista de Magias:\nLightning Speed (LS)\t\tResistencia Magica(RM)\nFast Drift (FD)\t\tFire Blaze(FB)\nZweite Hell Fire (ZHF)\t\tAccel Boost (AB)\nAir Shot (AS)\t\tFire Slam (FS)\nGreek Fire (GF)\t\tFehgen Form (FF)\nDark Dragon Flame (DDF)\n");
            scanf("%s", vetArcoopcao1);
            
            if (turno == 'B') {
                printf("\nQual arma ela esta usando? Diga 'A' para Staff/Cannon ou 'B' para Ambos:\n");
                scanf(" %c", &arcoOpcao); 
            }

            int valorMagia = 0;
            if (strcmp(vetArcoopcao1, "LS") == 0) valorMagia = LS;
            else if (strcmp(vetArcoopcao1, "RM") == 0) valorMagia = RM;
            else if (strcmp(vetArcoopcao1, "FD") == 0) valorMagia = FD;
            else if (strcmp(vetArcoopcao1, "FB") == 0) valorMagia = FB;
            else if (strcmp(vetArcoopcao1, "ZHF") == 0) valorMagia = ZHF;
            else if (strcmp(vetArcoopcao1, "AB") == 0) valorMagia = AB;
            else if (strcmp(vetArcoopcao1, "AS") == 0) valorMagia = AS;
            else if (strcmp(vetArcoopcao1, "FS") == 0) valorMagia = FS;
            else if (strcmp(vetArcoopcao1, "GF") == 0) valorMagia = GF;
            else if (strcmp(vetArcoopcao1, "FF") == 0) valorMagia = FF;
            else if (strcmp(vetArcoopcao1, "DDF") == 0) valorMagia = DDF;
            

            if (strcmp(vetArcoopcao1, "LS") == 0) { 
                *VeloAtual += LS;
            } else if (strcmp(vetArcoopcao1, "RM") == 0) {
                *DefesaAtual += RM;
            } else if (strcmp(vetArcoopcao1, "FD") == 0) {
                *ForcaAtual += FD;
            } else if (strcmp(vetArcoopcao1, "FB") == 0) {
                *ForcaAtual += FB;
            } else if (strcmp(vetArcoopcao1, "ZHF") == 0) {
                *ForcaAtual += ZHF;
            } else if (strcmp(vetArcoopcao1, "AB") == 0) {
                *ForcaAtual += AB;
                *DefesaAtual += AB;
                *VeloAtual += AB;
            } else if (strcmp(vetArcoopcao1, "AS") == 0) {
                *ForcaAtual += AS;
            } else if (strcmp(vetArcoopcao1, "FS") == 0) {
                *ForcaAtual += FS;
            } else if (strcmp(vetArcoopcao1, "GF") == 0) {
                *ForcaAtual += GF;
            } else if (strcmp(vetArcoopcao1, "FF") == 0) {
                *ForcaAtual += FF;
                *DefesaAtual += FF;
                *VeloAtual += FF;
            } else if (strcmp(vetArcoopcao1, "DDF") == 0) {
                *ForcaAtual += DDF; 
            }
                
            if (arcoOpcao == 'A') {
                *ForcaAtual = ForcaMeg;
            } else if (arcoOpcao == 'B') {
                *ForcaAtual = ForcaMegCan + valorMagia;
            }
        }
    }

    /* Escolha de ataque ou defesa */
    char acao;
    printf("\n%s esta atacando ou defendendo?\nDiga A para ataque e B para defesa:\n", (turno == 'A') ? "Tabris" : (turno == 'B') ? "Megumin" : "Meruem");
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
    int difVel = ((turno == 'A') ? VeloTabris : (turno == 'B') ? VeloMeg : VeloMer) - Velo;
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
