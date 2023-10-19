/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malena-b <mario3d93@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:45:58 by malena-b          #+#    #+#             */
/*   Updated: 2023/10/19 14:04:46 by malena-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# ifndef STATIC
#  define STATIC 1024
# endif

char	*get_next_line(int fd);
char	*ft_strchr(const char	*s, char c);
char	*ft_strjoin(char *pre_read, char *buffer, int bytes_readed);
int		ft_strlen(char *str);
char	*read_and_save(int fd, char *pre_read);
char	*clean_pre_read(char	*pre_read);
char	*get_new_line(char	*pre_read);
char	*ft_strdup(char *s1);
void	*ft_calloc(size_t count, size_t size);
void	copy_read(char *pre_read, char *copy, int j, int len);

#endif