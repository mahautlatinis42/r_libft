#include "libft.h"

int main(void)
{
    printf("%i\n", atoi(" -123junk"));
    printf("%i\n", ft_atoi(" -123junk"));
    printf("%i\n", atoi("0"));
    printf("%i\n", ft_atoi("0"));
    printf("%i\n", atoi("junk"));
    printf("%i\n", ft_atoi("junk"));// no conversion can be performed
    printf("%i\n", atoi("2147483648"));// UB: out of range of int
    printf("%i\n", ft_atoi("2147483648"));
}
