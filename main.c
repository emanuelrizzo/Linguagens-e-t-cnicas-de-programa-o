#include <stdio.h>
#include <stdlib.h>
#define pi 3.141592


int main() {

float areac, r, bmenor, bmaior, h, areat;

printf("Escreva o Raio do Circulo:\n");
scanf ("%f", &r);

areac = pi *(r*r);

printf ("A Area do Circulo de raio R %f = %f\n", r, areac);


printf ("Insira a Base menor do Trapezio:\n");
scanf ("%f", &bmenor);

printf ("Insira a Base maior do Trapezio\n");
scanf ("%f", &bmaior);

printf ("Insira a Altura do Trapezio\n");
scanf ("%f", &h);

areat= (bmaior + bmenor)*h / 2;

  printf("A AREA DO TRAPEZIO DE BASE MENOR %f BASE MAIOR %f E ALTURA %f = %f", bmenor, bmaior, h, areat);


	return 0;
}
