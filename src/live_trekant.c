#include <stdio.h>
#include <math.h>

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

    /* Compute side lengths of triangle */

    /* Compute sum of side lengths */

    /* Print sum of side lengths */

    return 0;
}
