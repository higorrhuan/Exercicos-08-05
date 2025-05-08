#include <stdio.h>
int ehVogal(char c){
if(c == 'a'|| c == 'A' || c == 'e'|| c == 'E'|| c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U'){
return 1;
}else{
return 0;
}
}

int main(){
char c;
printf("Escreva uma letra: ");
scanf("%c", &c);

if(ehVogal(c)){
printf("%c e uma vogal\n", c);
}
else{
printf("%c nao e uma vogal", c);
}
return 0;
}
