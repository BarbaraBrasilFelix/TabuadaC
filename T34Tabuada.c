#include <stdio.h>

int main (){
int numero;

printf("De qual número você deseja ver a tabuada? Informe o número: ");
scanf("%d", &numero);

while(numero > 10 || numero < 1){
    printf("O número deve estar entre 1 e 10. Informe o número: ");
    scanf("%d", &numero);
}

printf("Tabuada de %d:\n", numero);
for (int i = 1; i <= 10; i++){
int valor;

valor = numero * i;

printf("%d x %d = %d\n", numero, i, valor);
}
}
