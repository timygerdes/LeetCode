#include <stdlib.h>
#include <unistd.h>

int	ft_atoi(const char *str)
{
	int		i;
	long	nbr;
	int		nbrneg;

	i = 0;
	nbr = 0;
	nbrneg = 0;
	while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
			|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v'))
		i++;
	if (str[i] != '\0' && str[i] == '-')
	{
		nbrneg = 1;
		i++;
	}
	else if (str[i] != '\0' && str[i] == '+')
		i++;
	while (str[i] != '\0' && isdigit(str[i]))
	{
		nbr = (nbr * 10) + (str[i] - '0');
		i++;
	}
    if (nbr > 2147483647 || nbr < -2147483648)
        return (666);
	if (nbrneg == 1)
		return (-nbr);
	return (nbr);
}

static char	*ft_convert(int n, int digit_len, int is_neg)
{
	char	*ptr;
	int		i;
	int		j;

	i = 1;
	j = 0;
	if (is_neg == 1)
		j++;
	while (i <= n / 10)
	{
		digit_len++;
		i = i * 10;
	}
	ptr = calloc((digit_len + 1), sizeof(char));
	if (!ptr)
		return (NULL);
	while (digit_len > 0 && i != 0)
	{
		ptr[j] = (n / i) + '0';
		n = n % i;
		i = i / 10;
		digit_len--;
		j++;
	}
	return (ptr);
}

char	*ft_itoa(int n)
{
	int		is_neg;
	int		digit_len;
	char	*str;

	digit_len = 1;
	is_neg = 0;
	if (n == -2147483648)
		return (strdup("-2147483648"));
	if (n < 0)
	{
		n = n * -1;
		is_neg = 1;
		digit_len++;
	}
	str = ft_convert(n, digit_len, is_neg);
	if (!str)
		return (NULL);
	if (is_neg == 1)
		*str = '-';
	return (str);
}

int reverse(int x){
    char *str;
    char *intstr;
    int returnVal;
    int len = 0;
    int isNeg = 0;

    if (x < 0)
        isNeg = 1;
    str = ft_itoa(x);
    len = strlen(str);
    intstr = calloc(len, sizeof(char) + 1);
    for (int i = 0; len != 0; i++)
    {
        intstr[i] = str[--len];
    }
    returnVal = ft_atoi(intstr);
    if (returnVal == 666)
        return (0);
    free(intstr);
    if (isNeg)
        return (-returnVal);
    return (returnVal);
}
