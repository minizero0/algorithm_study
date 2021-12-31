#include <stdio.h>
#include <stdbool.h>

int	cnt;

void	ft_num(int result, int num)
{
	if (result > num) 
		return;
	if (result == num) 
	{
		cnt++;
		return;
	}
	else 
	{
		for (int i = 1; i <= 3; i++) 
			ft_num(result+i, num);
	}
}

int	main(void)
{
	int	count;
	int	num;

	scanf("%d", &count);

	while (count != 0)
	{
		scanf("%d", &num);
		cnt = 0;
		ft_num(0, num);
		printf("%d\n", cnt);
		count--;
	}
	return (0);
}
