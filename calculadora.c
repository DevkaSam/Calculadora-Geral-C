#include <stdio.h>
#include <math.h>

int soma(int pva, int pvb);
int sub(int pva, int pvb);
int multi(int pva, int pvb);
int div(int pva, int pvb);
int bask();
void form();
int matriz();

void main(){
    int a;
    int b;
    int op;


    puts("*******************************************************************************************************************************************");
    puts("Insira o numero de qual operação você queira realizar");
    puts("0 - soma");
    puts("1 - subtração");
    puts("2 - multiplicação");
    puts("3 - divisão");
    puts("4 - Outros");
    puts("*******************************************************************************************************************************************\n");
    scanf("%d", &op);

    if(op != 4){
    puts("*******************************************************************************************************************************************");
    puts("Insira o valor de A");
    scanf("%d", &a);
    puts("Insira o valor de b");
    scanf("%d", &b);
    puts("*******************************************************************************************************************************************\n");
    }


    switch(op){
        case 0: {
            printf("soma é = %d\n", soma(a, b));
            break;
        }
        case 1: {
            printf("sub é = %d\n", sub(a, b));
            break;
        }
        case 2: {
            printf("multi é = %d\n", multi(a, b));
            break;
        }
        case 3: {
            printf("div é = %d\n", div(a, b));
            break;
        }
        case 4: {
            printf("Você selecionou outros\n");
            form();
        }
    }
}
int soma(int pva, int pvb){
    return pva + pvb;
}
int sub(int pva, int pvb){
    return pva - pvb;
}
int multi(int pva, int pvb){
    return pva * pvb;
}
int div(int pva, int pvb){
    return pva / pvb;
}
void form(){
    int op;


    puts("*******************************************************************************************************************************************");
    puts("Insira o numero de qual operação você queira realizar");
    puts("0 - matrizes");
    puts("1 - baskara");
    puts("*******************************************************************************************************************************************\n");
    scanf("%d", &op);


    switch(op){
        case 0:{
            printf(" você selecionou matrizes\n");
            matriz();
            break;
        }
        case 1:{
            puts("você selecionou baskara\n");
            bask();

        }
    }
}
int matriz(){
   int A,i = 0,j = 0,a = 0,b = 0, matriz1[99][99], matriz2[99][99],c,d, x,y, op,C;
    
    printf("\nDigite a operação que queira realizar:\n");
    printf("0 - Soma\n");
    printf("1 - Subtração\n"); 
    printf("2 - Multiplicação\n");
    printf("3 - Divisão\n");
    printf("4 - terminar programa\n");
    
    scanf("%d", &op);//OP é o controlador para escolher qual operação aritimética será realizada.
    switch(op){

            case 0: {
                printf("você selecionou Soma\n");
            }
            case 1: {
                printf("você selecionou Subtração\n");
            }
            case 2: {
                printf("você selecionou Multiplicação\n");
            }
            case 3 : {
                printf("você selecionou Divisão\n");
             
            case 4 :{
                break;
            }
    }


    }
    
    printf("Defina o tamanho de AxB\n");
    puts("Insira o valor de A");
    scanf("%d", &a);
    puts("Insira o valor de B");
    scanf("%d", &b);
    d = a * b;//lado * altura = numero total de elementos da matriz quadrada
    x = a;
    y = b;//guarda os valores de a e b em x e y respectivamente para realizar as operações matemáticas
    A = sqrt(d);//para matriz é retangular
    

    printf("%d x %d\n", a, b);

    if(a == b){//verifica se a matriz é quadrada
        d = A;
    }

    for(a = 1; a <= d; a++){
        for(b = 1; b <= A; b++){
            printf("Insira o valor de da posição matriz_1 %d x %d :\n", a,b);
            scanf("%d", &matriz1[a][b]);
            printf("%d\n", matriz1[a][b]);
        }   
    }
    puts("A matriz 1 é:");
    for(a = 1; a <= d; a++){
        for(b = 1; b <= A; b++){
            printf ("\n%d x %d = %d\n", a, b,matriz1[a][b]);

       }                                
    }

    for(i = 1; i <= d; i++){
        for(j = 1; j <= A; j++){
            printf("Insira o valor de da posição da matriz_2 %d x %d :\n", i,j);
            scanf("%d", &matriz2[i][j]);
            printf("%d\n", matriz2[i][j]);
        }   
    }
    puts("A matriz 2 é:");
    for(i = 1; i <= d; i++){
        for(j = 1; j <= A; j++){
            printf ("\n%d x %d = %d\n", i, j,matriz2[i][j]);

       }                                
    }

    i = 1;
    j = 0;
    a = 1;
    b = 0;
    c = 0;//contador para o calculo
   
    if (x == y){//verifica se a matriz é quadrada e eleva a dois
        d = d*d;
    }


    while(c <= d){

        printf("%d\n", c);

        if(c >= 1){ 
            
            if(op == 1){ 
                C = matriz1[a][b] - matriz2[i][j];
                printf("\nmatriz1[%d][%d] - matriz2[%d[%d] = resultado\n ", a, b, i, j);
                printf("\n %d - %d = %d\n", matriz1[a][b], matriz2[i][j], C);
            }

            if(op == 0){
                C = matriz1[a][b] + matriz2[i][j];
                printf("\nmatriz1[%d][%d] + matriz2[%d[%d] = resultado\n ", a, b, i, j);
                printf("\n %d + %d = %d\n", matriz1[a][b], matriz2[i][j], C);   
            }

            if( op == 2){
                C = matriz1[a][b] * matriz2[i][j];
                printf("\nmatriz1[%d][%d] * matriz2[%d[%d] = resultado\n ", a, b, i, j);
                printf("\n %d * %d = %d\n", matriz1[a][b], matriz2[i][j], C);   
            }     

            if(op == 3){
                C = matriz1[a][b] / matriz2[i][j];
                printf("\nmatriz1[%d][%d] / matriz2[%d[%d] = resultado\n ", a, b, i, j);
                printf("\n %d / %d = %d\n", matriz1[a][b], matriz2[i][j], C);   
            }     
            }
        
       
        if(b < A){
            b++;
            printf("%d\n", A);
        }
        else if (b == A) {
                b = 1;
                a++;
            }
        
        if(j < A){
            j++;
        }
        else if (j == A) {
                j = 1;
                i++;
            }
        c++;
        }   
    
    return 0;
}
int bask(){
    float a,b,c;
    float B1,B2,D;

    puts("Insira o valor de a:");
    scanf("%f", &a);

    puts("Insira o valor de b:");
    scanf("%f", &b);

    puts("Insira o valor de c:");
    scanf("%f", &c);
    D = (4*a*c);
    float b2;
    b2 = b*b;

    B1 = ((-b+sqrt((b2 - D)))/(2*a));
    B2 = ((-b-sqrt((b2 - D)))/(2*a));
    
    printf("o resultado de baskara são x1 = %f e x2 =%f\n", B1,B2);


    return 0;

}
