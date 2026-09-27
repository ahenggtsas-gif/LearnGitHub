#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef char string[128];
void compareName(string name){
    if(strcmp(name, "aheng") == 0){
        printf("namanya sama dengan owner");
    }else{
        printf("nama beda dengan owner");
    }
}


main(){
    string name;
    printf("Hello world");
    int a = 10;
    int b = 20;
    printf("a+b = %d", a+b);
    printf("whats ur name: "); fflush(stdin); gets(name);
    printf("hola %s", name);
    compareName(name);
}








