#include <stdio.h>
#include <stdlib.h>

int main(){
int x,y,i,j,ileniepuj,max,temp,k;
    printf("Wpisz wymiary tablicy:\n");
        printf("x:");                                         ///x i y nie oznaczaja wspolrzednych, x to 1 rozmiar, y to 2 rozmiar macierzy
    scanf("%d",&x);
        printf("y:");
    scanf("%d",&y);
int tab2[y];                                                  ///tab2 jest o rozmiarze y, bo y oznacza ilosc kolumn, a zliczamy ilosc liczb w kazdej kolumnie
float tab[x][y];
        printf("Podana tablica ma wymiary %d na %d\n",x,y);

        for(i=0;i<x;i++){                                    ///wczytanie tablicy
                for(j=0;j<y;j++){
                    printf("\ntab[%d][%d]",i, j);
                    scanf("%f",&tab[i][j]);
            }
        }

        printf("\nWpisana tablica:\n");

        for(i=0;i<x;i++){
                for(j=0;j<y;j++){
                printf("%.2f ",tab[i][j]);                  ///drukuje liczby z dokladnoscia do dwoch miejsc po przecinku
            }
        printf("\n");
                }

ileniepuj=0;
        for(j=0;j<y;j++){                                   ///zamieniona kolejnosc z j na i bo sprawdzamy KOLUMNAMI a nie WIERSZAMI

                for(i=0;i<x;i++){

                    if(tab[i][j]<0 && tab[i][j]/2!=0){      ///tutaj juz kolejnosc jest prawidlowa bo wciaz mamy macierz o rozmiarach [i][j]
                        ileniepuj+=1;
                    }
            }
                printf("\nIlosc liczb nieparzystych ujemnych w kolumnie %d wynosi %d",j, ileniepuj);        ///printf jest po pierwszym for'ze zeby wyswietlalo wartosc PO sprawdzeniu kolumny
                tab2[j]=ileniepuj;
                ileniepuj=0;                                                                                ///nastepnie ta wartosc jest zerowana zeby obliczyc kolejna kolumne
        }

printf("\n\ntab2: ");
        for(i=0;i<y;i++){                                ///i<y

                printf("%d ",tab2[i]);                  ///drukuje liczby z dokladnoscia do dwoch miejsc po przecinku, tab2
            }



max=0;                                          ///przypisujemy wartosc max dla pierwszego elementu z macierzy jednowymiarowej
            for(i=0;i<y;i++){
                if(tab2[i]>max){               ///jesli znajdzie cos wiekszego to nadpisuje
                    max=i;
                }
            }

    printf("\n\nNajwiecej takich liczb jest w kolumnie %d\n",max);



            for(i=0;i<x;i++){
                for(j=0;j<y-1;j++){                                  ///sortowanie, y-1 zeby nie przekroczyc pol w wierszu
                        for(k=j+1;k<y;k++){                         ///k=j+1 bo kolejny element porownujemy
                            if(tab[i][j]<tab[i][k]){               ///jesli element poprzedni jest mniejszy niz nastepny
                                temp=tab[i][j];                   ///to zapisuje porzedni jako temp
                                tab[i][j]=tab[i][k];             ///nadpisuje go nastepnym
                                tab[i][k]=temp;                 ///i nastepny podmienia na wartosc z temp
                            }
                        }
                    }

                }



        for(i=0;i<x;i++){
                for(j=0;j<y;j++){
                printf("%.2f ",tab[i][j]);                  ///drukuje liczby z dokladnoscia do dwoch miejsc po przecinku
            }
        printf("\n");
                }



    return 0;

}
