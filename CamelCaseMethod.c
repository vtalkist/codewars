#include <stdlib.h>
#include <ctype.h>

const char *camel_case(const char *s)
{
	char *camel_case = malloc(1000);
	int i = 0;
	char *ptr = s;
	if (strlen(s) != 0)
		*(camel_case + i) = toupper(*s);
	for (; *ptr != '\0'; ptr++)
	{
		if (*ptr == ' ')
		{
			while (*ptr == ' ') ptr++;
			*(camel_case + i) = toupper(*ptr);
		}
		i++, *ptr++;
		while (*ptr)
		{
			if (*ptr == 32 || *ptr == 0)
				break;
			*(camel_case + i) = *ptr;
			ptr++, i++;
		}
		--ptr;
	}
	*(camel_case + i) = '\0';
	camel_case = realloc(camel_case, 1 + strlen(camel_case) * sizeof(char));
	return strdup(camel_case);
}
