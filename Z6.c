#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,i,j,suma,ile,ilew;
    printf("Podaj rozmiar tablicy kwadratowej: \n");
    scanf("%d",&a);
    int tab[a][a];
    printf("Podana tablica ma wymiary %d na %d\n",a,a);

        for(i=0;i<a;i++){                   ///wczytanie tablicy
            for(j=0;j<a;j++){
                printf("tab[%d][%d]: ",i,j);
                scanf("%d",&tab[i][j]);
            }
        }

        printf("\nWpisana tablica: \n");

        for(i=0;i<a;i++){                   ///wyswietlenie tablicy
            for(j=0;j<a;j++){
                printf("%d ",tab[i][j]);
            }
            printf("\n");
        }
suma=0;
        for(i=0;i<a;i++){                   ///suma elementow na drugiej przekatnej
                    suma+=tab[i][a-1-i];
                  //  printf("suma: %d\n",suma); ///to tylko sprawdzenie do debugowania
                }


        printf("\nSuma elementow na drugiej przekatnej wynosi: %d\n",suma);

ile=0;
ilew=0;

        for(i=0;i<a;i++){                   ///ile wierszy w ktorych nie ma
            for(j=0;j<a;j++){              ///elementow nieparzystych
                if(tab[i][j]%2==0){
                    ile++;
                }
            }
            if(ile==a){
                ilew++;
                ile=0;
            }
        }

        printf("Jest %d wierszy, w ktorych nie ma elementow nieparzystych",ilew);

    return 0;
}
