/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_is_prime.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/07 23:38:09 by jde-la-m     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/07 23:38:16 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	long n;

	if (nb == 2)
		return (1);
	n = 3;
	while (n * n > nb)
	{
		if (nb % n == 0)
			return (0);
		n += 2;
	}
	return(1);
}