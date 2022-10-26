// Libraries
#include <stdio.h>

// Main axis
int i;
int j;
int k;

// Main variables
float ma;
float va;
int na;
float mb;
float vb;
int nb;
float no;

// Functions
float acid(void);
float base(void);
float limit(void);

// Main function
int main(void) {
    while(1) {
        // Acid input
        printf("Enter ma ('0' for empty value):");
        scanf("%f", &ma);   
        printf("Enter va[ml] ('0' for empty value):");
        scanf("%f", &va);
        printf("Enter na ('0' for empty value):");
        scanf("%i", &na);

        // Base input
        printf("Enter mb ('0' for empty value):");
        scanf("%f", &mb);
        printf("Enter vb[ml] ('0' for empty value):");
        scanf("%f", &vb);
        printf("Enter nb ('0' for empty value):");
        scanf("%i", &nb);

        if(ma == 0 || va == 0)
            acid();
        else if(mb == 0 || vb == 0)
            base();
        else
            limit();
        printf("\n\n\n\n\n");
    }
}

float acid(void) {
    if (ma == 0 && va == 0) {
        no = ( (mb * vb * na) / nb) / 1000;
        printf("No.of moles of base = %.5f", no);
    }
    else if(ma == 0) {
        ma = (mb * vb * na) / (nb * va);
        printf("ma = %.5f", ma);
        return 0;
    }
    else if (va == 0) {
        va = (mb * vb * na) / (nb * ma);
        printf("va = %.5f [L]", (float) va / 1000);
        return 0;
    }
    return 1;
}

float base(void)
{
    if ( mb == 0 && vb == 0 ) {
        no = ( ( ma * va * nb) / na ) / 1000;
        printf("No.of moles of base = %.5f", no);
    }
    else if (mb == 0)
    {
        mb = (ma * va * nb) / (na * vb);
        printf("mb = %.5f", mb);
        return 0;
    }
    else if (vb == 0)
    {
        vb = (ma * va * nb) / (na * mb);
        printf("vb = %.5f [L]", (float) vb / 1000);
        return 0;
    }
    return 1;
}

float limit(void) {
    float lim = ( ( (ma * va) / na ) - ( (mb *vb) / nb ) ) / 1000;
    
    if (lim == 0) {
        printf("Neutral solution\n");
        return 0;
    }
    else if (lim > 0) {
        printf("acidic solution by (%.5f) moles\n", lim);
        return 0;
    }
    else{
        printf("basic solution by (%.5f) moles\n", -lim);
        return 0;
    }
    return 1;
}