#include <string.h>

size_t	strlcpy(char *dst, const char *src, size_t size)
{
	size_t src_len = strlen(src);

	if (size > 0)
	{
		size_t i = 0;
		while (src[i] != '\0' && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}

	return (src_len);
}