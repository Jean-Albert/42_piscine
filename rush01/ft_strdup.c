#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*str;
	char	*ptr;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	str = (char *) malloc(sizeof(*src) * (i + 1));
	ptr = str;
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return (str);
}
