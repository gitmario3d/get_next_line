/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malena-b <mario3d93@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:46:07 by malena-b          #+#    #+#             */
/*   Updated: 2023/10/19 13:47:39 by malena-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char	*s, char c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *pre_read, char *buffer, int bytes_readed)
{
	char	*str;
	int		i;
	int		j;

	if (!pre_read)
		pre_read = ft_calloc(1, 1);
	str = malloc((ft_strlen(pre_read) + ft_strlen(buffer) + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (pre_read[i])
		str[j++] = pre_read[i++];
	i = 0;
	while (i < bytes_readed)
		str[j++] = buffer[i++];
	str[j] = '\0';
	free (pre_read);
	return (str);
}

char	*ft_strdup(char *s1)
{
	char	*copy;
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(s1);
	copy = (char *)malloc(sizeof(const char) * (len + 1));
	if (copy == NULL)
		return (copy);
	while (s1[i])
	{
		copy[i] = s1[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*mem;
	size_t	len;
	size_t	i;

	i = 0;
	len = size * count;
	mem = malloc(len);
	if (mem == NULL)
		return (NULL);
	while (i < len)
	{
		((unsigned char *)mem)[i] = '\0';
		i++;
	}
	return (mem);
}
