#include <stdio.h>
#include <stdlib.h>

void colours_and_ohms(){

}

void cores_e_ohms(){
    int opcao;
    int numero_resistencias;
    int[5] numero_de_bandas;
    char c;
    int valor_resistencia;

    // Valores das resistências;
    char* cores[] = {
        "black", "brown", "red", "orange", "yellow",
        "green", "blue", "violet", "gray", "white"
    };

    printf("********************************************\n");
    printf("* Descobrir a cor das resistencias ou vice-versa *\n");
    printf("********************************************\n");
    printf("* Qual o valores que tens? *\n");
    printf(" 1. Cores da resistencia \n");
    printf(" 2. Valor da resistencia (OHMS) \n");
    printf("Opção: \n");
    
    

    if (scanf("%d", &opcao) != 1) {
            while ((c = getchar()) != '\n' && c != EOF); // clear the buffer
            printf("Option is not valid. Plz, insert some number of the options above.\n");
            printf("%d", opcao);
            opcao = 99;
    };

    switch (opcao)
    {
    case 1:
        printf("Quantas bandas têm a resistencia?");
        scanf("%d", &numero_de_bandas);
        break;
    case 2:
        printf("Quantas bandas têm a resistencia? 4 ou 5\n");
        scanf("%d", &numero_de_bandas);

        printf("Valor da resistencia em ohms\n");
        scanf("%d", &valor_resistencia);
        printf("VALOR DA RESISTENCIA é %d ", valor_resistencia);

        valor_resistencia = valor_resistencia % 1000;        

        printf("VALOR DA RESISTENCIA é %d ", valor_resistencia);

        break;
    default:
        break;
    }

} 

void calucation_of_resistances(){

}


void calculo_resistencia(){
    int opcao;
    int numero_resistencias;
    char c;
    
    // system("cls") - esta expressão é para o windows
    system("clear"); // expressao para mac
    printf("********************************************\n");
    printf("**** Calcular o valores da resistencias*****\n");
    printf("********************************************\n");
    printf("1. Resistência equivalente em Serie \n");
    printf("2. Resistência quivalente em Paralelo\n");
    printf("0. Fechar programa\n");
    printf("Opção: ");

    if (scanf("%d", &opcao) != 1) {
            while ((c = getchar()) != '\n' && c != EOF); // clear the buffer
            printf("Option is not valid. Plz, insert some number of the options above.\n");
            printf("%d", opcao);
            opcao = 99;
    }

    switch(opcao){
        case 1:
            printf("Quantas resistências são: \n");
            scanf("%d", &numero_resistencias);
            int valores_das_resistencias[100] = {0};
            int valor_total_serie = 0;

            for(int x = 0; x < numero_resistencias; x++){
                int resistencia;
                int y = 1 + x;
                printf("Adiciona aqui a resistencia nº%d \n", y);
                scanf("%d", &resistencia);
                valores_das_resistencias[x] = resistencia;
            }

            for( int i = 0; i < numero_resistencias; i++){
                valor_total_serie += valores_das_resistencias[i];
            }

            printf("Resistencia equivalente é %d OHMS" , valor_total_serie);
            break;
        case 2:
            printf("Quantas resistências são: \n");
            scanf("%d", &numero_resistencias);
            int valores_das_resistencias_paralelo[100] = {0};
            double valor_total_paralelo = 0.0;
            double valor_total_paralelo_final = 0.0;

            for(int x = 0; x < numero_resistencias; x++){
                int resistencia;
                int y = 1 + x;
                printf("Adiciona aqui a resistencia nº%d \n", y);
                scanf("%d", &resistencia);
                valores_das_resistencias_paralelo[x] = resistencia;
            }

            for( int i = 0; i < numero_resistencias; i++){
                valor_total_paralelo += (1.0/valores_das_resistencias_paralelo[i]);
            }

            valor_total_paralelo_final = 1.0 / valor_total_paralelo;

            printf("Resistencia equivalente é %f OHMS" , valor_total_paralelo_final);
            break;
        default:
            break;
   }

}   

void menu_english(){
        int opcao;
        char c;

        // system("cls") - esta expressão é para o windows
        // system("clear"); // expressao para mac
        printf("********************************************\n");
        printf("*************** MENU ***********************\n");
        printf("********************************************\n");
        printf("1. Calculation of resistances\n");
        printf("2. Electronic color code\n");
        printf("3. Theorems of the electrial Circuit\n");
        printf("4. Calculation of capacitors\n");
        printf("5. Calculation of coils\n");
        printf("6. Digital Lab, waveform visualization\n");
        printf("7. Manual\n");
        printf("0. Close the program\n");
        printf("*******************************************\n");
        printf("Option: ");

        if (scanf("%d", &opcao) != 1) {
            while ((c = getchar()) != '\n' && c != EOF); // clear the buffer
            printf("Option is not valid. Plz, insert some number of the options above.\n");
            printf("%d", opcao);
            opcao = 99;
        }

        switch (opcao)
        {
        case 1:
            calculo_resistencia();
            break;
        default:
            break;
        }

}

void menu(){
    int opcao_menu;
    char c;
    printf("********************************************\n");
    printf("*************** MAIN MENU ******************\n");
    printf("********************************************\n");
    printf("1. Calculo de resistencias\n");
    printf("2. Codigo das cores de resistencias\n");
    printf("3. Teoremas de circuitos eletricos\n");
    printf("4. Calculo de condensadores\n");
    printf("5. Calculo de bobines\n");
    printf("6. Digital Lab, waveform visualization\n");
    printf("7. Manual\n");
    printf("0. Fechar programa\n");
    printf("*******************************************\n");
    printf("Opção: ");

    if (scanf("%d", &opcao_menu) != 1) {
        // system("cls") - esta expressão é para o windows
        // system("clear"); // expressao para mac
        while ((c = getchar()) != '\n' && c != EOF); // clear the buffer
        opcao_menu = 1;
    }


    switch (opcao_menu)
        {
        case 1:
            calculo_resistencia();
            break;
        case 2:
            cores_e_ohms();
            break;
        case 3:
            printf("HEY HEY HEY");
        default:
            printf("Opção inválida. Por favor, insere algum numero\n");
            menu();
            break;
        }


}

// PARTE 0 - Perguntar o Idioma

void parte_0(){
    int opcao;
    char c;

    printf("********************************************\n");
    printf("*************** INICIO *********************\n");
    printf("********************************************\n");
    printf("1. Português \n");
    printf("2. English \n");
    printf("0. Fechar Programa \n");
    printf("********************************************\n");
    printf("Opçao: ");

    // caso seja inserido uma letra este if deteta;
    // caso o resulta do scanf seja 1 significa que não é o valor pedido ou seja um numero
    if (scanf("%d", &opcao) != 1) {
        while ((c = getchar()) != '\n' && c != EOF); // clear the buffer
        printf("Opção inválida. Por favor, insere algum numero.\n");
        printf("%d", opcao);
        opcao = 99;
    }

    switch (opcao)
        {
        case 1:
            menu();
            break;
        case 2:
            menu_english();
            printf("LET'S TALK IN ENGLISH \n");
            break;
        case 0:
            printf("\n");
            break;
        default:
            printf("Opção inválida. Por favor, insere algum numero\n");
            parte_0();
            break;
    }
}

// PARTE 0.1 - Menu

// PARTE 1 - Calcular

// PARTE 2 - Aplicar Teoremas de análise de circuitos elétricos:

// PARTE 3 - Gerar sinais elétricos

// PARTE 4 - Dimensionar material elétrico

// Parte ENGLISH

// PARTE 0.1 - Menu (ENGLISH)

// PARTE 1 - Calcular (ENGLISH)

// PARTE 2 - Aplicar Teoremas de análise de circuitos elétricos: (ENGLISH)

// PARTE 3 - Gerar sinais elétricos (ENGLISH)

// PARTE 4 - Dimensionar material elétrico (ENGLISH)



int main(){

    parte_0();

    return 0;
}