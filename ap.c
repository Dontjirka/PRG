#include <stdio.h>
#include <stdlib.h>

void generuj(int a1, int d, int n){
    while 
}

int an(int a1, int d, int n){
    return (a1 + (n - 1) * d);
}

int main() {
    int a1;
    int d;
    int n;
    
    printf("Prvni cislo: \n");
    scanf("%d", &a1);
    
    printf("Druhe cislo: \n");
    scanf("%d", &d);
    
    printf("Treti cislo: \n");
    scanf("%d", &n);
    
    printf("Aritmeticka posloupnost cisla %d je %d", n, an(a1, n, d));
    
    return 0;
}