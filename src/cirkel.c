#include <math.h>
#include <stdio.h>

double beregn_omkreds(double radius);
double beregn_areal(double radius);

int main(void) {
    double r, resultat;
    int valg;

    printf("Hvad vil du beregne?\n");
    printf("Omkreds (Skriv 1)\n");
    printf("Areal (skriv 2)\n");
    printf("Indtast dit valg: ");
    scanf("%d", &valg);

    if (valg == 1 || valg == 2) {
        printf("Indtast en radius: ");
        scanf("%lf", &r);

        if (valg == 1) {
            resultat = beregn_omkreds(r);
            printf("Omkredsen er: %lf\n", resultat);
        }
        else {
            resultat = beregn_areal(r);
            printf("Arealet er: %lf\n", resultat);
        }
    }
    else {
        printf("Ikke et gyldigt valg!\n");
    }

    return 0;
}

double beregn_omkreds(double radius) {
    return 2 * M_PI * radius;
}

double beregn_areal(double radius) {
    return M_PI * radius * radius;
}
