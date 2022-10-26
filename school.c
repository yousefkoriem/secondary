#include <stdio.h>
#include <math.h>

int C;
int n;
int z;
int r;
float m;
char* f;
int main(void) {
    while(n >= 0){
        printf("enter theta: ");
        scanf("%i", &C);
        printf("De Moivre's power: ");
        scanf("%i", &n);
        for(int i = 0; i < n; i++) {
            r= C/180;
            z= 2*i;
                if((r+z) > n)
                    printf("Z%i= (cos((%.3f'pi') +i sin (%.3f'pi'))\n\n", i + 1,(float)(r + z - (2*n))/n, (float)(r + z- (2*n))/n);
                else
                    printf("Z%i= (cos((%.3f'pi') +i sin (%.3f'pi'))\n\n", i + 1, (float)(r + z)/n, (float)(r + z)/n);
        }
    }
}