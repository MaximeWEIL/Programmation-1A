#include <stdio.h>
#include <gmp.h>

main()
{
	int valeurx = 0;
	int valeury = 0;

	printf("Choisir un entier x\n");
	scanf("%d", &valeurx);

	mpz_t x;
	mpz_init (x);
	mpz_set_si (x, valeurx);

	printf("Choisur un entier y\n");
	scanf("%d", &valeury);

	mpz_t y;
	mpz_init (y);
	mpz_set_si (y, valeury);

	mpz_t r;
	mpz_init (r);

	mpz_add(r, x, y);
	gmp_printf("Le résultat de l'addition de %d et %d est %Zd\n", valeurx, valeury, r);

	mpz_sub(r, x, y);
	gmp_printf("Le résultat de la soustraction de %d et %d est %Zd\n", valeurx, valeury, r);

	mpz_mul(r, x, y);
	gmp_printf("Le résultat de la multiplication de %d et %d est %Zd\n", valeurx, valeury, r);

	mpz_cdiv_q(r, x, y);
	gmp_printf("Le résultat de la division entière de %d et %d est %Zd\n", valeurx, valeury, r);

	mpz_mod(r, x, y);
	gmp_printf("Le reste de la division de %d et %d est %Zd\n", valeurx, valeury, r);

	if (mpz_sgn(x)==0)
	{printf("x vaut 0\n");}
	else if (mpz_sgn(x)==1)
	{printf("x est supérieur à 0\n");}
	else if (mpz_sgn(x)==-1)
	{printf("x est inférieur à 0\n");}

	if (mpz_cmp(x,y)==0)
	{printf("x est y sont égaux\n");}
	else if (mpz_cmp(x,y)>0)
        {printf("x est supérieur à y\n");}
        else if (mpz_cmp(x,y)<0)
        {printf("x est inférieur à y\n");}



}
 
