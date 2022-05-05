#include "libft.h"

 void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i;                                

	if (!dest && !src)
		return (NULL);

          i = 0;                                
          if (dest > src) {                                
                  while(n) {
			  ((unsigned char*)dest)[n] = ((unsigned char)src)[n];
			  n--;                                
                  }                                
          }                                
          else {                                
                  while (i < n)                                
                  {                                
                          ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
                          i++;                                
                  }                                
          }                                
          return (dest);
}