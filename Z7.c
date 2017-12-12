#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,i,j,ile,ilek,ilo;
    printf("Podaj rozmiar macierzy: ");
    scanf("%d",&a);
    int tab[a][a];
    printf("Wpisana macierz ma rozmiar %d na %d\n",a,a);

            for(i=0;i<a;i++){
                for(j=0;j<a;j++){
                    printf("tab[%d][%d]: ",i,j);
                    scanf("%d",&tab[i][j]);
                }
            }

        printf("Wpisana tablica: \n");

            for(i=0;i<a;i++){           ///wyswietlanie macierzy
                for(j=0;j<a;j++){
                    printf("%d ",tab[i][j]);
                }
                printf("\n");
            }

ile=0;
ilek=0;

            for(j=0;j<a;j++){
                for(i=0;i<a;i++){
                    if(tab[i][j]%2==0){
                        ile++;
                    }
                }
                if(ile==a){
                    ilek++;
                }
                ile=0;
            }

            printf("Wszystkie elementy sa parzyste w %d kolumnie/kolumnach",ilek);
ilo=1;
             for(i=0;i<a;i++){
               if(tab[i][a-1-i]>0){
                ilo*=tab[i][a-1-i];
               }
            }

            printf("\nIloczyn elementow 0< lezacych na drugiej przekatnej wynosi %d",ilo);
    return 0;
}
