/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyumpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 11:08:07 by gyumpark          #+#    #+#             */
/*   Updated: 2022/03/28 11:08:10 by gyumpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

char		*ft_strchr(char *s, int c);
char		*ft_strjoin(char *s1, char *s2);
char		*get_next_line(int fd);
char		*ft_print_line(char *save);
char		*ft_saver(char *save);
char		*ft_read_join(int fd, char *save);
void		ft_memset(void *b, size_t len);
void		*ft_calloc(size_t count, size_t size);
size_t		ft_strlen(char *str);

#endif
