/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_active_bits.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/13 17:03:36 by jde-la-m     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/13 17:05:16 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

unsigned int	ft_active_bits(int n)
{
	unsigned int count;

	count = 0;
	while (n)
	{
		count += n & 1;
		n >>= 1;
	}
	return (count);
}