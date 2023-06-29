
#include <stdio.h>

int esPrimoFunc(int n){
    int valor =1, i =2, ex = 0;
    //simplemente lo que haremos será comprobar cada numero hasta n, y mirar si dividiendolo sale 0 de resto.
    while(i<n && ex ==0){
        if(n%i == 0){
            ex = 1;
            valor = 0;
        } else {
            i = i+1;
        }
    }
    return valor;
}


int main(){
    int n = 4,  primo= esPrimoFunc(n);
    if(primo == 1){
        printf("%d es primo", n);
    } else {
        printf("%d no es primo", n);
    }
    return 0;
}
