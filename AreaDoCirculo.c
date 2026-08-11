#include <stdio.h>
#include <stdlib.h>
#define pi 3.141592


int main() {

float area, r;
printf ("Digite o valor do Raio do Circulo");
scanf ("%f", &r);

area = pi *(r*r);

printf ("A Area do Circulo de raio R %f = %f", r, area);



	return 0;
}
