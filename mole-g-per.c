#include <stdio.h>

// Variables
double m1;
double m2;
double g_m1;
double g_m2;
double g1;
double g2;
double p_im;

// Main Function
int main(void) {
    while(1) {
        printf("Moles of needed element: ");
        scanf("%lf", &m1);
        printf("Moles of known element: ");
        scanf("%lf",&m2);
        printf("molar mass of needed element: ");
        scanf("%lf",&g_m1);
        printf("Molar mass of known element: ");
        scanf("%lf", &g_m2);
        printf("grams of needed element: ");
        scanf("%lf", &g1);
        printf("grams of known element: ");
        scanf("%lf",&g2);

        double result = (g2 * g_m1 * m1) / (g_m2 * m2);
        printf("Mass of need element %lf [g]\n",result);
        printf("\n");
        printf("mass of impure: ");
        scanf("%lf", &p_im);
        double percent = (result / p_im) * 100;
        printf("%lf %% \n", percent);
        }
}