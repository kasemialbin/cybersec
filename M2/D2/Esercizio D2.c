/* Marco Tani */

/* M2 - esercizio D2 */

/* Calcolo delle aree di un quadrato, di un cerchio e di un triangolo dato un lato D */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	float d ; /* base */
	float aq, ac, at; /* aree */
	float r ; /* raggio cerchio */
	float rad3_4 ; /* radice di (3)/4 */
	
	rad3_4 = sqrt(3) / 4 ;
	
printf("\n\n\tMarco Tani - Calcolo delle aree di un quadrato, di un cerchio e di un triangolo equilatero\n\n") ;

printf("\tScrivi il valore di D (lunghezza del lato) e poi premi invio = ") ;
scanf("%f", &d) ;

/* Area Quadrato */
aq = d * d ;

/* Raggio */
r = d/2 ;

/* Area cerchio */
ac = M_PI * ( r * r ) ;

/* Area Triangolo equilatero */
at = rad3_4 * ( d * d ) ;

/* Finale */

printf("\n\n") ;
printf("\tEcco le aree calcolate!\n\n") ;
printf("\tArea del quadrato = %f\n\n ", aq) ;
printf("\tArea del cerchio = %f\n\n" , ac) ;
printf("\tArea del triangolo equilatero = %f\n\n", at) ;

return 0 ;
}
