#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,i,j;
    printf("Podaj rozmiar tablicy kwadratowej:");
    scanf("%d",&a);
    float tab[a][a],suma,srar,ile;
    printf("\nTablica ma rozmiar %d na %d\n",a,a);

        for(i=0;i<a;i++){                   ///wczytanie tablicy
            for(j=0;j<a;j++){
                printf("tab[%d][%d]: ",i,j);
                scanf("%f",&tab[i][j]);
            }
        }


        printf("Utworzona tablica:\n");

                for(i=0;i<a;i++){           ///wyswietlenie tablicy
            for(j=0;j<a;j++){
                printf("%.2f ",tab[i][j]);
            }
            printf("\n");
        }

suma=0;
ile=0;


         for(j=0;j<a;j++){           ///obliczanie sr arytmetycznej w kolumnach
            for(i=0;i<a;i++){
                suma+=tab[i][j];
                ile++;
            }
            srar=suma/ile;
            printf("Srednia arytmetyczna elementow w kolumnie %d wynosi: %.2f \n",j,srar);
        suma=0;
        ile=0;
        }

suma=0;          ///znow uzyje zmiennej suma zeby nie tworzyc nowej

         for(i=0;i<a;i++){           ///obliczanie sumy elementow z glownej przekatnej
            for(j=0;j<a;j++){
                if(i==j){
                    suma+=tab[i][j];
                }
            }
        }

        printf("Suma elementow z glownej przekatnej wynosi: %.2f",suma);

    return 0;
}
