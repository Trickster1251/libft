#include "libft.h"

int ft_isalpha(int chr)
{
	if ((chr >= 'a' && chr <= 'z') || (chr >= 'A' && chr <= 'Z'))
		return 1;
	else
		return 0;
}
