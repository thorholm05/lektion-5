
#include <stdio.h>
#include <math.h>

double compute_sum_of_length(double p1_x, double p1_y, double p2_x, double p2_y,
                             double p3_x, double p3_y, double p4_x, double p4_y);
double compute_side_length(double a_x, double a_y, double b_x, double b_y);
double compute_sum_of(double a, double b, double c, double d);
void print_result(double result);

int main(void) {
    double p1_x, p2_x, p3_x, p4_x,
           p1_y, p2_y, p3_y, p4_y;

    double total_length;

    printf("Please write the first point:\n");
    scanf("%lf %lf", &p1_x, &p1_y);

    printf("Please write the second point:\n");
    scanf("%lf %lf", &p2_x, &p2_y);

    printf("Please write the third point:\n");
    scanf("%lf %lf", &p3_x, &p3_y);

    printf("Please write the fourth point:\n");
    scanf("%lf %lf", &p4_x, &p4_y);

    printf("The square is:\n");
    printf("(%lf, %lf) -- (%lf, %lf) -- (%lf, %lf) -- (%lf, %lf)\n",
           p1_x, p1_y, p2_x, p2_y,
           p3_x, p3_y, p4_x, p4_y);

    total_length = compute_sum_of_length(
        p1_x, p1_y, p2_x, p2_y,
        p3_x, p3_y, p4_x, p4_y
    );

    print_result(total_length);

    return 0;
}

double compute_sum_of_length(double p1_x, double p1_y, double p2_x, double p2_y,
                             double p3_x, double p3_y, double p4_x, double p4_y) {

    double side1 = compute_side_length(p1_x, p1_y, p2_x, p2_y);
    double side2 = compute_side_length(p2_x, p2_y, p3_x, p3_y);
    double side3 = compute_side_length(p3_x, p3_y, p4_x, p4_y);
    double side4 = compute_side_length(p4_x, p4_y, p1_x, p1_y);

    double sum = compute_sum_of(side1, side2, side3, side4);

    return sum;
}

double compute_side_length(double a_x, double a_y, double b_x, double b_y) {
    double deltaX = a_x - b_x;
    double deltaY = a_y - b_y;

    return sqrt(deltaX * deltaX + deltaY * deltaY);
}

// Add four numbers together
double compute_sum_of(double a, double b, double c, double d) {
    return a + b + c + d;
}

// Print the result
void print_result(double result) {
    printf("Total side length is %lf.\n", result);
}
