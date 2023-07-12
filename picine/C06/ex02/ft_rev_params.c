/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soojoo <shjoo820@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 19:40:59 by soojoo            #+#    #+#             */
/*   Updated: 2022/09/12 11:57:00 by soojoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	while (argc -1 > 0)
	{
		i = 0;
		while (argv[argc - 1][i])
		{
			write(1, argv[argc - 1] + i, 1);
			i++;
		}
		write(1, "\n", 1);
		argc--;
	}
}