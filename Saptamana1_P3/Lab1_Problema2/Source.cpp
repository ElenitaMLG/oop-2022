#include <iostream>
#pragma warning(disable : 4996)


int main()
{
	char sir[100], cuvinte[100][100];
	char aux[10];
	int i, j = 0, contor = 0;

	scanf("%[^'\n']s", sir);

	for (i = 0; i <= (strlen(sir)); i++) {
		if (sir[i] == ' ' || sir[i] == '\0') {
			cuvinte[contor][j] = '\0';
			contor++; 
			j = 0; 
		}
		else {
			cuvinte[contor][j] = sir[i];
			j++;
		}
	}
	printf("\nOriginal Sentence is: %s", sir);
	printf("\nSorted words:\n");

	for (i = 0; i < contor-1; i++)
	{
		for (j = i + 1; j < contor; j++)
		{
			if (strlen(cuvinte[i]) < strlen(cuvinte[j]))
			{
				strcpy(aux, cuvinte[i]);
				strcpy(cuvinte[i], cuvinte[j]);
				strcpy(cuvinte[j],aux);
			}
			if (strlen(cuvinte[i]) == strlen(cuvinte[j]))
			{
				if (strcmp(cuvinte[i], cuvinte[j])>0)
				{
					strcpy(aux, cuvinte[i]);
					strcpy(cuvinte[i], cuvinte[j]);
					strcpy(cuvinte[j], aux);
				}
			}
		}
	}


	for (i = 0; i < contor; i++)
		printf("%s\n", cuvinte[i]);

}