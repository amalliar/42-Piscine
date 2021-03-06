/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 02:23:04 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/13 04:48:34 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_disp_file.h"

void	ft_putstr_fd(int ofd, char *str)
{
	write(ofd, str, ft_strlen(str));
}
