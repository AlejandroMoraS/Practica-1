#include <stdio.h>
#include <conio.h>

void HanoiTower(int, char, char, char);
int main() {
    printf("Torres de Hanoi en C\n");

    int n;
    printf("Inserta el numero de discos \n");
    scanf("%d", &n);

    HanoiTower(n, 'A', 'B', 'C');
    getch();
    return 0;
}

void HanoiTower(int n, char Source, char Aux, char Dest) {

    if (n == 1) {
        printf("Se mueve de %c a la torre %c \n", Source, Dest);
        printf ("%d \n", n);
    } else {
        printf ("%d \n", n);
        HanoiTower(n - 1, Source, Dest, Aux);
        printf ("%d \n", n);
        HanoiTower(1, Source, Aux, Dest);
        printf ("%d \n", n);
        HanoiTower(n - 1, Aux, Source, Dest);
        printf ("%d \n", n);
    }


}
