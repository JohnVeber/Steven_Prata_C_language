// This file is needed to test some of the code examples given throughout the chapter.

#include <stdio.h>

int main(void){
	// Case 1 - "/ operation" (at page 172). 
    printf("Case 1.1\n \
11/5 = %-10d, 11/5 = %-10f, 11/5 = %-10f\n", (11 / 5), (11. / 5.), (11 / 5));
    // My output: 2    2.200000    0.000000
    printf("Case 1.2\n \
11/-5 = %-10d, 11/-5 = %-10f, 11/-5 = %-10f\n", (11 / -5), (11. / -5.), (11 / -5));
    // My output: -2    -2.200000    0.000000
    printf("Case 1.3\n \
-11/-5 = %-10d, -11/-5 = %-10f, -11/-5 = %-10f\n", (-11 / -5), (-11. / -5.), (-11 / -5));
    // My output: 2    2.200000    0.000000
    printf("Case 1.4\n \
-11/5 = %-10d, -11/5 = %-10f, -11/5 = %-10f\n\n", (-11 / 5), (-11. / 5.), (-11 / 5));
//_________________________________________________________________________________

    // Case 2 - "% operation" (at page 172).
    printf("Case 2.1\n \
11%%5 = %-10d, 11%%5 = %-10f\n", (11 % 5), (11 % 5));
    // My output: 2    2.200000    0.000000
    printf("Case 2.2\n \
11%%-5 = %-10d, 11%%-5= %-10f\n", (11 % -5), (11 % -5));
    // My output: -2    -2.200000    0.000000
    printf("Case 2.3\n \
-11%%-5 = %-10d, -11%%-5 = %-10f\n", (-11 % -5), (-11 % -5));
    // My output: 2    2.200000    0.000000
    printf("Case 2.4\n \
-11%%5 = %-10d, -11%%5 = %-10f\n\n", (-11 % 5), (-11 % 5)); 

	return 0;
}