#include<stdio.h>
#define MAX 1000000
int main()
{
int Tab[MAX];
int n ;
int var;
int A;
int B;
int C;
    printf("\n ### RECHERCHE DE L'ÉLÉMENT MEDIAN \n DANS UN TABLEAU ###\n\n");
    printf("ENTRER LA TAILLE DU TABLEAU : \t");
    scanf("%d",&n);
    printf("\n");
    for ( int i = 0 ; i < n ; i++){
        printf("T[%d] = \t ", i);
        scanf("%d", &Tab[i]);
    }
    printf("\n");
    for ( int i = 0 ; i < n ; i++){  
        if ( n%2 == 0){
            var = 0;
        } else {
            var = 1;
        }
    }
    A = (n / 2) - 1;
    B = ( n / 2);
    C = ( n - 1) / 2;
    if ( var == 0){
         printf("\nIL Y'A DEUX ÉLÉMENTS MEDIAN.\n");
         printf("\nEN PARTANT DU DÉBUT L'ÉLÉMENT MEDIAN \n EST T[%d] = %d\t", A, Tab[A]);
         printf("\n");
         printf("\nEN PARTANT DE LA FIN L'ÉLÉMENT MEDIAN \n EST T[%d] = %d\t", B, Tab[B] );
    } else if ( var == 1 ){
         printf("\nL'ÉLÉMENT MEDIAN EST T[%d] = %d\t", C, Tab[C]);
         printf("\n");
    }
    return 0;
}