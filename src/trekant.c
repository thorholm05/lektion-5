#include <stdio.h>
#include <math.h>

double compute_sum_of_length(double p1_x, double p1_y, double p2_x, double p2_y, double p3_x, double p3_y);
double compute_side_length(double pA_x, double pA_y, double pB_x, double pB_y);
double compute_sum_of(double a, double b, double c);
void print_result(double result);

/* TODO: Auditorieopgave B
 *  Modificer programmet så det tager imod 4 punkter – svarende til en firkant. Programmet skal så udregne summen af siderne.
 */
int main(void) {
    double p1_x, p2_x, p3_x,
           p1_y, p2_y, p3_y;
    double total_length;

    /* Prompt three points with x- and y-coordinate. */
    printf("Please write the first point:\n");
    scanf("%lf %lf", &p1_x, &p1_y);
    printf("Please write the second point:\n");
    scanf("%lf %lf", &p2_x, &p2_y);
    printf("Please write the third point:\n");
    scanf("%lf %lf", &p3_x, &p3_y);
    /* Print the coordinates the user just entered */
    printf("The triangle is:\n");
    printf("(%lf, %lf) -- (%lf, %lf) -- (%lf, %lf)\n", p1_x, p1_y, p2_x, p2_y, p3_x, p3_y);

    total_length = compute_sum_of_length(p1_x, p1_y, p2_x, p2_y, p3_x, p3_y);

    print_result(total_length);

    return 0;
}

/**
 * Funktionen beregner den samlede sidelængde af en trekant, angivet med (x,y)-koordinater.
 */
double compute_sum_of_length(double p1_x, double p1_y, double p2_x, double p2_y, double p3_x, double p3_y) {
    /* Compute side lengths of triangle */
    double side1 = compute_side_length(p1_x, p1_y, p2_x, p2_y);
    double side2 = compute_side_length(p2_x, p2_y, p3_x, p3_y);
    double side3 = compute_side_length(p3_x, p3_y, p1_x, p1_y);

    /* Compute sum of side lengths */
    double sum = compute_sum_of(side1, side2, side3);
    return sum ;
}
/**
 * The function computes the distance between points a and b
 * @param a_x x-coordinate of point a
 * @param a_y y-coordinate of point a
 * @param b_x x-coordinate of point b
 * @param b_y y-coordinate of point b
 * @return distance between points a and b.
 */
double compute_side_length(double a_x, double a_y, double b_x, double b_y) {
    double deltaX = a_x - b_x;
    double deltaY = a_y - b_y;
    return sqrt(deltaX * deltaX + deltaY * deltaY);
}

double compute_sum_of(double a, double b, double c) {
    return a + b + c;
}

void print_result(double result) {
    printf("Total side length is %lf.\n", result);
}
