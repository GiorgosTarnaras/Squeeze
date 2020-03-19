#include <stdio.h>

void sq(char s[], char s2[]);

int main(int argc, char const *argv[])
{

	char str[] = "hello";
	char str2[] = "eo";
	sq(str, str2);

	printf("%s\n", str); /*hll*/

	return 0;
}

void sq(char s[], char s2[])
{
	int i, j, k;
	for(i = 0;s2[i] != '\0';i++)
	{
		for(j = k = 0;s[j] != '\0';j++)
		{
			if (s2[i] != s[j])
				s[k++] = s[j];
		}
	}
	s[k] = '\0';
}