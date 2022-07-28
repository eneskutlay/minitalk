/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekutlay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 20:35:07 by ekutlay           #+#    #+#             */
/*   Updated: 2022/06/13 20:35:08 by ekutlay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef MINITALK_H
# define MINITALK_H

# include <signal.h>
# include <unistd.h>
# include <stdlib.h>

void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
void	ft_error(char *str);
int		ft_atoi(char *str);

void	handler(int sig);
void	sigusr(int sign);
int		check_if_digit(char *str);
void	send_byte(char c, int pid);
void	send_str(int pid, char *msg);

#endif
