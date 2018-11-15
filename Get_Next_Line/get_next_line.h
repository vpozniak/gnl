/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpozniak <vpozniak@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 12:34:42 by vpozniak          #+#    #+#             */
/*   Updated: 2018/11/15 12:34:57 by vpozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 4096

typedef struct s_list
{
	char				*buf;
	int							count;
	int 						i;
	int 						nl;
	int 						fd;
	void						*content;
	size_t						content_size;
	struct s_list				*next;
}								t_list;
int 			get_next_line(int const fd, char **line);
#endif
