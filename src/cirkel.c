#include <math.h>
#include <stdio.h>

double beregn_omkreds(double radius);

/* TODO Auditorieopgave A
 *  Brugerne skal spørges om de ønsker at regne areal eller omkreds.
     - Hvis de vælger omkreds skal omkredsen udregnes vha en funktion.
     - Hvis de vælger areal skal arealet udregnes vha en funktion.
 */
int main(void) {
    double r, omkreds;

    printf("Indtast en radius:\n>");
    scanf("%lf", &r);

    omkreds = beregn_omkreds(r);

    printf("Omkredsen er: %lf", omkreds);

    return 0;
}

double beregn_omkreds(double radius) {
    return 2 * M_PI * radius;
}
