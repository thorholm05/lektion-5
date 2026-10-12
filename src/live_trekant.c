#include <stdio.h>
#include <math.h>

double compute_total_side_length(double p1_x, double p1_y, double p2_x,
                                 double p2_y, double p3_x, double p3_y);
double compute_side_length(double a_x, double a_y, double b_x, double b_y);

/* Vi starter fra noget der ligner det vi lavede under live coding i Lektion 2. */
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

    total_length = compute_total_side_length(p1_x, p1_y, p2_x, p2_y, p3_x, p3_y);

    /* Print sum of side lengths */
    printf("Total length %lf\n", total_length);

    return 0;
}

double compute_total_side_length(double p1_x, double p1_y, double p2_x,
                                 double p2_y, double p3_x, double p3_y) {
    /* Compute side lengths of triangle */
    double side1 = compute_side_length(p1_x, p1_y, p2_x, p2_y);
    double side2 = compute_side_length(p2_x, p2_y, p3_x, p3_y);
    double side3 = compute_side_length(p3_x, p3_y, p1_x, p1_y);

    /* Compute sum of side lengths */
    return side1 + side2 + side3;
}

double compute_side_length(double a_x, double a_y, double b_x, double b_y) {
    double delta_x = a_x - b_x;
    double delta_y = a_y - b_y;
    return sqrt(delta_x * delta_x + delta_y * delta_y);
}