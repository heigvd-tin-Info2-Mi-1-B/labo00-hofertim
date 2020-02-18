// HEIG-VD - INFO2 - L00 - Programme principal

#define MAX 100

#include <stdio.h> 
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Programme principal

int32_t main(void)
{
	//Déclaration des variables
	char phrase[MAX], mots[MAX];
	int32_t  nMots = 1, i = 0, j = 0, nLettres = 0;

	fgets(phrase, sizeof phrase, stdin);

	//Compte le nombre de lettres
	while (phrase[nLettres] != '\n')
		nLettres++;

	//Compte le nombre d'espaces avant le premier mot
	while (phrase[i] == ' ' && i <= nLettres)
		i++;

	//Boucle qui sert à séparer les mots par une mise à la ligne
	for (i; i <= MAX; i++, j++)
	{
		if (phrase[i] == ' ' && phrase[i + 1] != ' ' && (i + 1) != nLettres)
		{
			mots[j] = '\n';
			nMots++;
		}
		else
			mots[j] = phrase[i];
	}

	printf("%i\n", nMots);
	printf("%s", mots);
	
	system("pause");

	return EXIT_SUCCESS;
}