#include <stdio.h>

int ehPar(int n){
if(n % 2== 0){
    return 1;
}
else{
    return 0;
}
}






int main(){
int n;
printf("Digite um numero: ");
scanf("%d", &n);
if (ehPar(n)){
printf("O n�mero %d � par.\n", n);
}else{
printf("O n�mero %d � �mpar.\n", n);
}
return 0;
}



