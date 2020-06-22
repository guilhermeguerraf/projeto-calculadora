#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define e 2.718281828
#define pi 3.141592654

void menu();
void submenu();

float funcao_k();
float funcao_xk();
float funcao_kx();
float funcao_ex();
float funcao_log_kx();
float funcao_lnx();
float funcao_1sobrex();
float funcao_sen();
float funcao_cos();
float funcao_tan();
float calculoFuncao();

float derivada_k();
float derivada_xk();
float derivada_kx();
float derivada_ex();
float derivada_log_kx();
float derivada_lnx();
float derivada_1sobrex();
float derivada_sen();
float derivada_cos();
float derivada_tan();
float calculoDerivada();

float integral_k();
float integral_xk();
float integral_kx();
float integral_ex();
float integral_log_kx();
float integral_lnx();
float integral_1sobrex();
float integral_sen();
float integral_cos();
float integral_tan();
float calculoIntegral();

char *gExpressao;   // declarando variável global
int gOpcaoMenu;     // g indica qua a variável é global
int gOpcaoSubmenu;

int main()
{
    menu();
    return 0;
}

void menu(){
    system("cls");
    printf("\n  ACG - 003\n\n\n");
    printf("\tMenu\n\n");
    printf("  1.  f(x) = k\n");
    printf("  2.  f(x) = x ^ k\n");
    printf("  3.  f(x) = k ^ x\n");
    printf("  4.  f(x) = e ^ x\n");
    printf("  5.  f(x) = log_k (x)\n");
    printf("  6.  f(x) = ln(x)\n");
    printf("  7.  f(x) = 1 / x\n");
    printf("  8.  f(x) = sen(x)\n");
    printf("  9.  f(x) = cos(x)\n");
    printf("  10. f(x) = tg(x)\n\n");
    printf("  11. SAIR\n\n\n");
    printf("  Escolha uma opcao: ");
    scanf("%d", &gOpcaoMenu);

    switch(gOpcaoMenu){
        case 1:
            gExpressao = "f(x) = k";
            submenu(gExpressao);
            break;
        case 2:
            gExpressao = "f(x) = x ^ k";
            submenu(gExpressao);
            break;
        case 3:
            gExpressao = "f(x) = k ^ x";
            submenu(gExpressao);
            break;
        case 4:
            gExpressao = "f(x) = e ^ x";
            submenu(gExpressao);
            break;
        case 5:
            gExpressao = "f(x) = log_k (x)";
            submenu(gExpressao);
            break;
        case 6:
            gExpressao = "f(x) = ln(x)";
            submenu(gExpressao);
            break;
        case 7:
            gExpressao = "f(x) = 1 / x";
            submenu(gExpressao);
            break;
        case 8:
            gExpressao = "f(x) = sen(x)";
            submenu(gExpressao);
            break;
        case 9:
            gExpressao = "f(x) = cos(x)";
            submenu(gExpressao);
            break;
        case 10:
            gExpressao = "f(x) = tg(x)";
            submenu(gExpressao);
            break;
        case 11:
            //printf("\n Voce escolheu SAIR");
            exit(0);
            break;
        default:
            printf("\n  * Escolha invalida! *\n\n");
            system("pause");
            menu();
            break;
    }
}

void submenu(){
    //float resultado;
    system ("cls");
    printf("\n  ACG - 003\n\n\n");
    printf("\t%s\n\n", gExpressao);
    printf("  1.  Funcao\n");
    printf("  2.  Derivada\n");
    printf("  3.  Integral Definida\n\n");
    printf("  4.  VOLTAR AO MENU PRINCIPAL\n\n\n");
    printf("  Escolha uma opcao: ");
    scanf("%d", &gOpcaoSubmenu);
    float resultado;
    switch(gOpcaoSubmenu){
        case 1:
            printf("\n\tf(x) = %.4f\n\n\n", calculoFuncao());
            system("pause");
            break;
        case 2:
            printf("\n\tf'(x) = %.4f\n\n\n", calculoDerivada());
            system("pause");
            break;
        case 3:
            resultado = calculoIntegral();
            if(gOpcaoMenu==10 && resultado==0){
                system("pause");
                break;
            }
            printf("\n\tI(a, b) = %.4f\n\n\n", resultado);
            system("pause");
            break;
        case 4:
            menu();
            break;
        default:
            printf("\n  * Escolha invalida! *\n\n\n");
            system("pause");
            submenu();
            break;
    }
    menu();
}

float funcao_k(){
    system("cls");
    printf("\n  ACG - 003\n\n\n");
    printf("\t%s\n", gExpressao);
    float k;
    printf("\n  Digite o valor de k para a construcao da funcao: ");
    scanf("%f", &k);
    printf("\n  Resultado:\n");
    return k;
}

float funcao_xk(){
    system("cls");
    printf("\n  ACG - 003\n\n\n");
    printf("\t%s\n", gExpressao);
    float k, x;
    printf("\n  Digite o valor de k para a construcao da funcao: ");
    scanf("%f", &k);
    printf("\n\tf(x) = x ^ %.4f\n", k);
    printf("\n  Digite o valor de x que deseja aplicar: ");
    scanf("%f", &x);
    printf("\n  Resultado:\n");
    return pow(x,k);
}

float funcao_kx(){
    system("cls");
    printf("\n  ACG - 003\n\n\n");
    printf("\t%s\n", gExpressao);
    float k, x;
    printf("\n  Digite o valor de k para a construcao da funcao: ");
    scanf("%f", &k);
    printf("\n\tf(x) = %.4f ^ x\n", k);
    printf("\n  Digite o valor de x que deseja aplicar: ");
    scanf("%f", &x);
    printf("\n  Resultado:\n");
    return pow(k,x);
}

float funcao_ex(){
    system("cls");
    printf("\n  ACG - 003\n\n\n");
    printf("\t%s\n", gExpressao);
    printf("\n\te = 2.718281\n");
    float x;
    printf("\n  Digite o valor de x que deseja aplicar: ");
    scanf("%f", &x);
    printf("\n  Resultado:\n");
    return pow(e,x);
}

float funcao_log_kx(){
    system("cls");
    printf("\n  ACG - 003\n\n\n");
    printf("\t%s\n", gExpressao);
    float k, x, resultado=0;
    printf("\n  Digite o valor de k para a construcao da funcao: ");
    scanf("%f", &k);
    // verificar se k > 1
    while(k<=1){
        printf("\n  * ERRO, o valor de k tem que ser maior que 1! *");
        printf("\n  Digite o valor de k para a construcao da funcao: ");
        scanf("%f", &k);
    }
    printf("\n\tf(x) = log_%.4f (x)\n", k);
    printf("\n  Digite o valor de x que deseja aplicar: ");
    scanf("%f", &x);
    printf("\n  Resultado:\n");
    // verificar se x > 0
    while(x<=0){
        printf("\n  * ERRO, o valor de x tem que ser maior que zero! *\n");
        printf("\n  Digite o valor de x que deseja aplicar: ");
        scanf("%f", &x);
    }
    resultado = log10(x)/log10(k);
    return resultado;
}

float funcao_lnx(){
    system("cls");
    printf("\n  NOME DO SISTEMA\n\n\n");
    printf("\t%s\n", gExpressao);
    float x;
    printf("\n  Digite o valor de x que deseja aplicar: ");
    scanf("%f", &x);
    // verificar se x > 0
    while(x<=0){
        printf("\n  * ERRO, o valor de x tem que ser maior que zero! *\n");
        printf("\n  Digite o valor de x que deseja aplicar: ");
        scanf("%f", &x);
    }
    printf("\n  Resultado:\n");
    return log(x);
}

float funcao_1sobrex(){
    system("cls");
    printf("\n  ACG - 003\n\n\n");
    printf("\t%s\n", gExpressao);
    float x;
    printf("\n  Digite o valor de x que deseja aplicar: ");
    scanf("%f", &x);
    while(x==0){
        printf("  * ERRO, o valor de x tem que ser diferente de zero! *\n");
        printf("\n  Digite o valor de x que deseja aplicar: ");
        scanf("%f", &x);
    }
    printf("\n  Resultado:\n");
    return 1/x;
}

float funcao_sen(){
    system("cls");
    printf("\n  ACG - 003\n\n\n");
    printf("\t%s\n", gExpressao);
    //x em graus *CONVERTER RADIANO PARA GRAUS
    float x;
    printf("\n  Digite o valor de x em graus que deseja aplicar: ");
    scanf("%f", &x);
    printf("\n  Resultado:\n");
    x = (x * pi)/180; //formula de conversão de x de radiano para graus
    return sin(x);
}

float funcao_cos(){
    system("cls");
    printf("\n  ACG - 003\n\n\n");
    printf("\t%s\n", gExpressao);
    //x em graus *CONVERTER RADIANO PARA GRAUS
    float x;
    printf("\n  Digite o valor de x em graus que deseja aplicar: ");
    scanf("%f", &x);
    printf("\n  Resultado:\n");
    x = (x * pi)/180; //formula de conversão de x de radiano para graus
    return cos(x);
}

float funcao_tan(){
    system("cls");
    printf("\n  ACG - 003\n\n\n");
    printf("\t%s\n", gExpressao);
    //x em graus *CONVERTER RADIANO PARA GRAUS
    float x;
    printf("\n  Digite o valor de x em graus que deseja aplicar: ");
    scanf("%f", &x);
    while(x==90 || x==270){
        printf("  * ERRO, o valor de x tem que ser diferente de 90 e 270! *\n");
        printf("\n  Digite o valor de x que deseja aplicar: ");
        scanf("%f", &x);
    }
    printf("\n  Resultado:\n");
    x = (x * pi)/180; //formula de conversão de x de radiano para graus
    return tan(x);
}

float calculoFuncao(){
    switch(gOpcaoMenu){
        case 1:
            return funcao_k();
            break;
        case 2:
            return funcao_xk();
            break;
        case 3:
            return funcao_kx();
            break;
        case 4:
            return funcao_ex();
            break;
        case 5:
            return funcao_log_kx();
            break;
        case 6:
            return funcao_lnx();
            break;
        case 7:
            return funcao_1sobrex();
            break;
        case 8:
            return funcao_sen();
            break;
        case 9:
            return funcao_cos();
            break;
        default:
            return funcao_tan();
            break;
    }
}

float derivada_k(){
    system("cls");
    printf("\n  ACG - 003\n\n\n");
    printf("  Derivada da funcao: %s\n\n", gExpressao);
    printf("\tf'(x) = [k]'\n\n");
    printf("\tf'(x) = 0\n\n");
    float k;
    printf("  Digite o valor de k para a construcao da funcao: ");
    scanf("%f", &k);
    printf("\n\tf'(x) = [%.4f]'\n\n", k);
    printf("  Resultado:\n");
    return 0;
}

float derivada_xk(){
    system("cls");
    printf("\n  ACG - 003\n\n\n");
    printf("  Derivada da funcao: %s\n\n", gExpressao);
    printf("\tf'(x) = [x ^ k]'\n\n");
    printf("\tf'(x) = k * x ^ (k - 1)\n\n");
    float k, x;
    printf("  Digite o valor de k para a construcao da funcao: ");
    scanf("%f", &k);
    printf("\n\tf'(x) = %.4f * x ^ (%.4f)\n", k, k-1);
    printf("\n  Digite o valor de x que deseja aplicar: ");
    scanf("%f", &x);
    printf("\n  Resultado:\n");
    return k*pow(x,k-1);
}

float derivada_kx(){
    system("cls");
    printf("\n  ACG - 003\n\n\n");
    printf("  Derivada da funcao: %s\n\n", gExpressao);
    printf("\tf'(x) = [k ^ x]'\n\n");
    printf("\tf'(x) = (k ^ x) * ln(k)\n\n");
    float k, x;
    printf("  Digite o valor de k para a construcao da funcao: ");
    scanf("%f", &k);
    while(x<=0){
        printf("\n  * ERRO, o valor de x tem que ser maior que zero! *\n");
        printf("\n  Digite o valor de x que deseja aplicar: ");
        scanf("%f", &x);
    }
    printf("\n\tf'(x) = (%.4f ^ x) * ln(%.4f)\n\n", k, k);
    printf("  Digite o valor de x que deseja aplicar: ");
    scanf("%f", &x);
    printf("\n  Resultado:\n");
    return pow(k,x)*log(k);
}

float derivada_ex(){
    system("cls");
    printf("\n  ACG - 003\n\n\n");
    printf("  Derivada da funcao: %s\n\n", gExpressao);
    printf("\tf'(x) = [e ^ x]'\n\n");
    printf("\tf'(x) = e ^ x\n\n");
    printf("\te = 2.718281\n\n");
    float x;
    printf("  Digite o valor de x que deseja aplicar: ");
    scanf("%f", &x);
    printf("\n  Resultado:\n");
    return pow(e,x);
}

float derivada_log_kx(){
    system("cls");
    printf("\n  ACG - 003\n\n\n");
    printf("  Derivada da funcao: %s\n\n", gExpressao);
    printf("\tf'(x) = [log_k (x)]'\n\n");
    printf("\tf'(x) = 1 / x * ln(k)\n");
    float k, x;
    printf("\n  Digite o valor de k para a construcao da derivada: ");
    scanf("%f", &k);
    while(k<=1){
        printf("\n  * ERRO, k tem que ser um numero maior que 1! *\n");
        system("pause");
        printf("\n  Digite o valor de k para a construcao da funcao: ");
        scanf("%f", &k);
    }
    printf("\n\tf'(x) = 1 / x * ln(%.4f)\n\n", k);
    printf("  Digite o valor de x que deseja aplicar: ");
    scanf("%f", &x);
    while(x==0){
        printf("\n  * ERRO, x tem que ser um numero diferente de 0! *\n");
        system("pause");
        printf("\n  Digite o valor de x que deseja aplicar: ");
        scanf("%f", &x);
    }
    printf("\n  Resultado:\n");
    return 1/(x*log(k));
}

float derivada_lnx(){
    system("cls");
    printf("\n  ACG - 003\n\n\n");
    printf("  Derivada da funcao: %s\n\n", gExpressao);
    printf("\tf'(x) = [ln(x)]'\n\n");
    printf("\tf'(x) = 1 / x\n");
    float x;
    printf("\n  Digite o valor de x que deseja aplicar: ");
    scanf("%f", &x);
    while(x==0){
        printf("\n  * ERRO, impossivel fazer divisao por zero! *\n\n");
        printf("  Digite o valor de x que deseja aplicar: ");
        scanf("%f", &x);
    }
    printf("\n  Resultado:\n");
    return 1/x;
}

float derivada_1sobrex(){
    system("cls");
    printf("\n  ACG - 003\n\n\n");
    printf("  Derivada da funcao: %s\n\n", gExpressao);
    printf("\tf'(x) = [1 / x]'\n\n");
    printf("\tf'(x) = -1 / x ^ 2\n\n");
    float x;
    printf("  Digite o valor de x que deseja aplicar: ");
    scanf("%f", &x);
    while(x==0){
        printf("\n  * ERRO, impossivel fazer divisao por zero! *\n\n");
        printf("  Digite o valor de x que deseja aplicar: ");
        scanf("%f", &x);
    }
    printf("\n  Resultado:\n");
    return -(1/(x*x));
}

float derivada_sen(){
    system("cls");
    printf("\n  ACG - 003\n\n\n");
    printf("  Derivada da funcao: %s\n\n", gExpressao);
    printf("\tf'(x) = [sen(x)]'\n\n");
    printf("\tf'(x) = cos(x)\n\n");
    float x;
    printf("  Digite o valor de x em graus que deseja aplicar: ");
    scanf("%f", &x);
    printf("\n  Resultado:\n");
    x = (x * pi)/180; //formula de conversão de x de graus para radiano
    return cos(x);
}

float derivada_cos(){
    system("cls");
    printf("\n  ACG - 003\n\n\n");
    printf("  Derivada da funcao: %s\n\n", gExpressao);
    printf("\tf'(x) = [cos(x)]'\n\n");
    printf("\tf'(x) = -sen(x)\n\n");
    float x;
    printf("  Digite o valor de x em graus que deseja aplicar: ");
    scanf("%f", &x);
    x = (x * pi)/180; //formula de conversão de x de radiano para graus
    printf("\n  Resultado:\n");
    return -sin(x);
}

float derivada_tan(){ // VERIFICAR
    system("cls");
    printf("\n  ACG - 003\n\n\n");
    printf("  Derivada da funcao: %s\n\n", gExpressao);
    printf("\tf'(x) = [tan(x)]'\n\n");
    printf("\tf'(x) = sec^2(x)\n\n");
    float x;
    printf("  Digite o valor de x em graus que deseja aplicar: ");
    scanf("%f", &x);
    while(x==90 || x==270){
        printf("  * ERRO, o valor de x tem que ser diferente de 90 e 270! *\n");
        printf("\n  Digite o valor de x que deseja aplicar: ");
        scanf("%f", &x);
    }
    x = (x * pi)/180; //formula de conversão de x de radiano para graus
    printf("\n  Resultado:\n");
    return pow(1/cos(x),2);
}

float calculoDerivada(){
    switch(gOpcaoMenu){
        case 1:
            return derivada_k();
            break;
        case 2:
            return derivada_xk();
            break;
        case 3:
            return derivada_kx();
            break;
        case 4:
            return derivada_ex();
            break;
        case 5:
            return derivada_log_kx();
            break;
        case 6:
            return derivada_lnx();
            break;
        case 7:
            return derivada_1sobrex();
            break;
        case 8:
            return derivada_sen();
            break;
        case 9:
            return derivada_cos();
            break;
        default:
            return derivada_tan();
            break;
    }
}

float integral_k(){
    system("cls");
    printf("\n  ACG - 003\n\n\n");
    printf("  Integral definida de: %s\n\n", gExpressao);
    printf("\tI = k dx\n\n");
    printf("\tI = k * x + C\n\n");
    printf("\tI(a, b) = k * x\n");
    float k, a, b;
    printf("\n  Digite o valor de k para a construcao da funcao: ");
    scanf("%f", &k);
    printf("\n\tI(a, b) = %.4f * x\n", k);
    printf("\n  Digite o valor de a: ");
    scanf("%f", &a);
    printf("\n  Digite o valor de b: ");
    scanf("%f", &b);
    printf("\n\tI(a, b) = %.4f * (b) - %.4f * (a)\n", k, k);
    printf("\n\t= %.4f * %.4f - %.4f * %.4f\n", k, b, k, a);
    printf("\n  Resultado:\n");
    return (k*b)-(k*a);
}

float integral_xk(){
    system("cls");
    printf("\n  ACG - 003\n\n\n");
    printf("  Integral definida de: %s\n\n", gExpressao);
    printf("\tI = x ^ k dx\n\n");
    printf("\tI = x ^ (k + 1) / (k + 1) + C\n\n");
    printf("\tI(a, b) = x ^ (k + 1) / (k + 1)\n");
    float k, a, b;
    printf("\n  Digite o valor de k para a construcao da funcao: ");
    scanf("%f", &k);
    printf("\n\tI(a, b) = x ^ %.4f / %.4f\n", k+1, k+1);
    printf("\n  Digite o valor de a: ");
    scanf("%f", &a);
    printf("\n  Digite o valor de b: ");
    scanf("%f", &b);
    printf("\n     I(a, b) = b ^ %.4f / %.4f - a ^ %.4f / %.4f\n", k+1, k+1, k+1, k+1);
    printf("\n     = %.4f ^ %.4f / %.4f - %.4f ^ %.4f / %.4f\n", b, k+1, k+1, a, k+1, k+1);
    printf("\n  Resultado:\n");
    return ((pow(b, k+1))/(k+1))-((pow(a, k+1))/(k+1));
}

float integral_kx(){
    system("cls");
    printf("\n  ACG - 003\n\n\n");
    printf("  Integral definida de: %s\n", gExpressao);
    printf("\n\tI = k ^ x dx\n");
    printf("\n\tI = k ^ x / ln(k) + C\n");
    printf("\n\tI(a, b) = k ^ x / ln(k)\n");
    float k, a, b;
    printf("\n  Digite o valor de k para a construcao da funcao: ");
    scanf("%f", &k);
    // verificar se k > 1
    while(k<=1){
        printf("\n  * ERRO, k tem que ser um numero maior que 1! *\n");
        system("pause");
        printf("\n  Digite o valor de k para a construcao da funcao: ");
        scanf("%f", &k);
    }
    printf("\n\tI(a, b) = %.4f ^ x / ln(%.4f)\n", k, k);
    printf("\n  Digite o valor de a: ");
    scanf("%f", &a);
    printf("\n  Digite o valor de b: ");
    scanf("%f", &b);
    printf("\n     I(a, b) = %.4f ^ b / ln(%.4f) - %.4f ^ a / ln(%.4f)\n", k, k, k, k);
    printf("\n     = %.4f ^ %.4f / ln(%.4f) - %.4f ^ %.4f / ln(%.4f)\n", k, b, k, k, a, k);
    printf("\n  Resultado:\n");
    return ((pow(k, b))/(log(k)))-((pow(k, a))/log(k));
}

float integral_ex(){
    system("cls");
    printf("\n  ACG - 003\n\n\n");
    printf("  Integral definida de: %s\n", gExpressao);
    printf("\n\tI = e ^ x dx\n");
    printf("\n\tI = e ^ x + C\n");
    printf("\n\tI(a, b) = e ^ x\n");
    printf("\n\te = 2.718281\n");
    float a, b;
    printf("\n  Digite o valor de a: ");
    scanf("%f", &a);
    printf("\n  Digite o valor de b: ");
    scanf("%f", &b);
    printf("\n\tI(a, b) = e ^ b - e ^ a\n");
    printf("\n\t= e ^ %.4f - e ^ %.4f\n", b, a);
    printf("\n  Resultado:\n");
    return (pow(e, b))-(pow(e, a));
}

float integral_log_kx(){
    system("cls");
    printf("\n  ACG - 003\n\n\n");
    printf("  Integral definida de: %s\n", gExpressao);
    printf("\n\tI = log_k (x) dx\n");
    printf("\n\tI = (x * ln(x) - x)/ln(k) + C\n");
    printf("\n\tI(a, b) = (x * ln(x) - x)/ln(k)\n");
    float k, a, b;
    printf("\n  Digite o valor de k para a construcao da funcao: ");
    scanf("%f", &k);
    while(k<=1){
        printf("\n  * ERRO, k tem que ser um numero maior que zero! *\n");
        system("pause");
        printf("\n  Digite o valor de k para a construcao da funcao: ");
        scanf("%f", &k);
    }
    printf("\n\tI(a, b) = [(x * ln(x) - x)/ln(%.4f)]\n", k);
    printf("\n  Digite o valor de a: ");
    scanf("%f", &a);
    while(a<=0){
        printf("\n  * ERRO, a tem que ser um numero maior que zero! *\n");
        system("pause");
        printf("\n  Digite o valor de a: ");
        scanf("%f", &a);
    }
    printf("\n  Digite o valor de b: ");
    scanf("%f", &b);
    while(b<=0){
        printf("\n  * ERRO, b tem que ser um numero maior que zero! *\n");
        system("pause");
        printf("\n  Digite o valor de b: ");
        scanf("%f", &b);
    }
    printf("\n     I(a, b) = (b * ln(b) - b)/ln(%.4f) - (a * ln(a) - a)/ln(%.4f)\n", k, k);
    printf("\n     = (%.4f * ln(%.4f) - %.4f)/ln(%.4f) - (%.4f * ln(%.4f) - %.4f)/ln(%.4f)\n", b, b, b, k, a, a, a, k);
    printf("\n Resultado:\n");
    return ((b * log(b) - b)/log(k))-((a * log(a) - a)/log(k));
}

float integral_lnx(){
    system("cls");
    printf("\n  ACG - 003\n\n\n");
    printf("  Integral definida de: %s\n", gExpressao);
    printf("\n\tI = ln(x) dx\n");
    printf("\n\tI = x * ln(x) - x + C\n");
    printf("\n\tI(a, b) = x * ln(x) - x\n");
    float a, b;
    printf("\n  Digite o valor de a: ");
    scanf("%f", &a);
    while(a<=0){
        printf("\n  * ERRO, a tem que ser um numero maior que zero! *\n");
        system("pause");
        printf("\n  Digite o valor de a: ");
        scanf("%f", &a);
    }
    printf("\n  Digite o valor de b: ");
    scanf("%f", &b);
    while(b<=0){
        printf("\n  * ERRO, b tem que ser um numero maior que zero! *\n");
        system("pause");
        printf("\n  Digite o valor de b: ");
        scanf("%f", &b);
    }
    printf("\n     I(a, b) = [b * ln(b) - b] - [a * ln(a) - a]\n");
    printf("\n     = [%.4f * ln(%.4f) - %.4f] - [%.4f * ln(%.4f) - %.4f]\n", b, b, b, a, a, a);
    printf("\n  Resultado:\n");
    return (b * log(b) - b)-(a * log(a) - a);
}

float integral_1sobrex(){
    system("cls");
    printf("\n  ACG - 003\n\n\n");
    printf("  Integral definida de: %s\n", gExpressao);
    printf("\n\tI = 1 / x dx\n");
    printf("\n\tI = ln(x) + C\n");
    printf("\n\tI(a, b) = ln(x)\n");
    float a, b;
    printf("\n  Digite o valor de a: ");
    scanf("%f", &a);
    while(a<=0){
        printf("\n  * ERRO, a tem que ser um numero maior que zero! *\n");
        system("pause");
        printf("\n  Digite o valor de a: ");
        scanf("%f", &a);
    }
    printf("\n  Digite o valor de b: ");
    scanf("%f", &b);
    while(b<=0){
        printf("\n  * ERRO, b tem que ser um numero maior que zero! *\n");
        system("pause");
        printf("\n  Digite o valor de b: ");
        scanf("%f", &b);
    }
    printf("\n\tI(a, b) = ln(b) - ln(a)\n");
    printf("\n\t= ln(%.4f) - ln(%.4f)\n", b, a);
    printf("\n  Resultado:\n");
    return (log(b)-log(a));
}

float integral_sen(){
    system("cls");
    printf("\n  ACG - 003\n\n\n");
    printf("  Integral definida de: %s\n", gExpressao);
    printf("\n\tI = sen(x) dx\n");
    printf("\n\tI = -cos(x) + C\n");
    printf("\n\tI(a, b) = -cos(x)\n");
    float a, b;
    printf("\n  Digite o valor de a: ");
    scanf("%f", &a);
    printf("\n  Digite o valor de b: ");
    scanf("%f", &b);
    printf("\n\tI(a, b) = [-cos(b)] - [-cos(a)]\n");
    printf("\n\t= -cos(%.4f) + cos(%.4f)\n", b, a);
    printf("\n  Resultado:\n");
    return (-cos(b) + cos(a));
}

float integral_cos(){
    system("cls");
    printf("\n  ACG - 003\n\n\n");
    printf("  Integral definida de: %s\n", gExpressao);
    printf("\n\tI = cos(x) dx\n");
    printf("\n\tI = [sen(x)] + C\n");
    printf("\n\tI(a, b) = [sen(x)]\n");
    float a, b;
    printf("\n  Digite o valor de a: ");
    scanf("%f", &a);
    printf("\n  Digite o valor de b: ");
    scanf("%f", &b);
    printf("\n\tI(a, b) = sen(b) - sen(a)\n");
    printf("\n\t= sen(%.4f) - sen(%.4f)\n", b, a);
    printf("\n  Resultado:\n");
    return (sin(b) - sin(a));
}

float integral_tan(){
    system("cls");
    printf("\n  ACG - 003\n\n\n");
    printf("  Integral definida de: %s\n", gExpressao);
    printf("\n\tI = tg(x) dx\n");
    printf("\n\tI = -ln(cos(x)) + C\n");
    printf("\n\tI(a, b) = -ln(cos(x))\n");
    float a, b;
    printf("\n  Digite o valor de a: ");
    scanf("%f", &a);
    printf("\n  Digite o valor de b: ");
    scanf("%f", &b);
    if(a==b){
        printf("\n  Resultado:\n");
        printf("\n\tI(a, b) = 0.0000\n\n\n");
        return 0;
    }else if((cos(a)<=0 || cos(b)<=0 || a==1 || b==1) && (a!=b)){
        printf("\n  Resultado:\n");
        printf("\n\tI(a, b) = Diverge\n\n\n");
        return 0;
    }else{
        printf("\n\tI(a, b) = [-ln(cos(b))] - [-ln(cos(a))]\n");
        printf("\n\t= -ln(cos(%.4f)) + ln(cos(%.4f))\n", b, a);
        printf("\n  Resultado:\n");
        return (-(log(cos(b))) + (log(cos(a))));
    }
}

float calculoIntegral(){
    switch(gOpcaoMenu){
        case 1:
            return integral_k();
            break;
        case 2:
            return integral_xk();
            break;
        case 3:
            return integral_kx();
            break;
        case 4:
            return integral_ex();
            break;
        case 5:
            return integral_log_kx();
            break;
        case 6:
            return integral_lnx();
            break;
        case 7:
            return integral_1sobrex();
            break;
        case 8:
            return integral_sen();
            break;
        case 9:
            return integral_cos();
            break;
        default:
            return integral_tan();
            break;
    }
}
