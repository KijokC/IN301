#include <stdio.h>
#include <stdlib.h>
#include "exo_45.h"

#define carre(x) x*x

void affbits (float x) {
	unsigned int *p = (unsigned int *)&x;
	unsigned int n = *p;
	printf("%36.30f = %08x = ",x,n);
	int pos;
	for (pos = 1 ; pos<=32 ; pos++) {
		unsigned int a = (n>>(32-pos)) & 1;
		if (a) printf("1"); else printf(".");
		if (pos == 1) printf("|");
		if (pos == 9) printf("|");
		if (pos%4 == 0) printf("  ");
	}
	printf("\n");
}

void precision() {
	affbits(0.25);
	affbits(0.5);
	affbits(0.0);
	affbits(1.0);
	affbits(1.99999999);
	affbits(0.00000001);
	
	affbits(2.0);
	affbits(2.25);
	affbits(2.50);
	affbits(2.75);
	affbits(3.999999);
	affbits(1.0/3.0);
	float a,b,c,d;
	a = 0.00000001;
	b = a + 1.0;
	c = b - 1.0;
	d = (a + 1.0) - 1.0;
	affbits(a);
	affbits(b);
	affbits(c);
	affbits(d);
	
	if (c==d) printf("ok\n"); else printf("pb\n");

}
/*
1.0/3.0 =
.1.  1.1.  1.1.  1.1.  1.1.  1.11
 2   4 6   8 10 12 14 16 18 20 22 23

2²¹ + 2¹⁹ + 2¹⁷ + 2¹⁵ + 2¹³ + 2¹¹ + 2⁹ + 2⁷ +2⁵ + 2³ + 2 + 1
------------------------------------------------------------
                    2²³
2²³ = 8388608

2²¹ = 2097152
2¹⁹ =  524288
2¹⁷ =  131072
2¹⁵ =   32768
2¹³ =    8192
2¹¹ =    2048
2⁹  =     512
2⁷  =     128
2⁵  =      32
2³  =       8
2   =       2
1   =       1
TOT = 2796203
2796202 / 8388608 = 0,333333253860474
2796203 / 8388608 = 0,333333373069763
*/
