/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soojoo <soojoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 15:17:11 by soojoo            #+#    #+#             */
/*   Updated: 2023/07/22 18:57:09 by soojoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"
#include"ft_printf/ft_printf.h"

void	err_exit(int exit_code, char *string)
{
	ft_printf("%s\n", string);
	exit(exit_code);
}

void	check_int(char *number)
{
	int	i;

	i = 0;
	while (number[i])
	{
		if (number[i] == '-')
		{
			if (i != 0 || number[i + 1] < '0' || number[i + 1] > '9')
				err_exit(1, "Error");
		}
		if ((number[i] < '0' || number[i] > '9')
			&& number[i] != ' ' && number[i] != '-')
			err_exit(1, "Error");
		++i;
	}
	if (number[0] == '-')
	{
		if (ft_strlen(number) < 11)
			;
		else if (ft_strlen(number) > 11)
			err_exit(1, "Error");
		else if (ft_strncmp(number, "-2147483648", 11) > 0)
			err_exit(1, "Error");
	}
	else
	{
		if (ft_strlen(number) < 10)
			;
		else if (ft_strlen(number) > 10)
			err_exit(1, "Error");
		else if (ft_strncmp(number, "2147483647", 10) > 0)
			err_exit(1, "Error");
	}
}

void	check_duplication(t_stack *stack)
{
	t_node	*temp;
	t_node	*temptemp;
	int		i;
	int		j;

	temp = stack->head;
	i = 0;
	while (i < stack->count)
	{
		j = 0;
		temptemp = stack->head;
		while (j < i)
		{
			if (temptemp->elem == temp->elem)
				err_exit(1, "Error");
			temptemp = temptemp->next;
			++j;
		}
		temp = temp->next;
		++i;
	}
}