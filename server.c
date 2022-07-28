/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekutlay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 20:34:15 by ekutlay           #+#    #+#             */
/*   Updated: 2022/06/13 20:34:17 by ekutlay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "minitalk.h"

void	handler(int sig)
{
	static int	i;
	static char	c;

	c = c << 1 | sig;
	i++;
	if (i == 8)
	{
		write(1, &c, 1);
		i = 0;
	}
}

void	sigusr(int sign)
{
	if (sign == SIGUSR2)
		handler(1);
	if (sign == SIGUSR1)
		handler(0);
}

int	main(void)
{
	signal(SIGUSR1, sigusr);
	signal(SIGUSR2, sigusr);
	ft_putnbr(getpid());
	write(1, "\n", 1);
	while (1337)
		pause();
}
