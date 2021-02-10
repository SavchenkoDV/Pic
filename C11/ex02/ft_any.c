/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buthor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 16:37:53 by buthor            #+#    #+#             */
/*   Updated: 2020/08/25 19:02:52 by buthor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char*))
{
	int rez;

	while (*tab)
	{
		rez = f(*tab);
		if (rez != 0)
			return (1);
		tab++;
	}
	return (0);
}
