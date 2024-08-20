#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;
	size_t	dst_len;

	i = 0;
	while (src[i] != 0)
		i++;
	src_len = i;
	i = 0;
	while (dst[i] != 0)
		i++;
	dst_len = i;
	if (size <= dst_len)
		return (size + src_len);
	i = 0;
	while (src[i] != 0 && i < size - dst_len - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = 0;
	return (src_len + dst_len);
}