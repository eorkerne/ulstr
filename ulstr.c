#include <unistd.h>
#include <stdlib.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

char *ft_ulstr(char **str)
{
	int i;

	i = 0;
	while (str[1][i])
	{
		if (str[1][i] >= 'a' && str[1][i] <= 'z')
		{
			str[1][i] -= 32;
			if (str[1][ + 1] == '\0')
				break;
			i++;
		}
		if (str[1][i] >= 'A' && str[1][i] <= 'Z')
		{
			str[1][i] += 32;
			if (str[1][i + 1] == '\0')
				break;
			i++;
		}
		else if (str[1][i] != '\0')
		{
			if (str[1][i + 1] == '\0')
				break;
			i++;
		}
		
	}
	return (*str);
}

int main(int argc, char **argv)
{
	if (argc != 2)
		{
			ft_putstr("\0");
			return (0);
		}
	ft_putstr(ft_ulstr(argv));
	ft_putstr("\0");
	return (0);
}