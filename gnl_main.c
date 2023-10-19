/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malena-b <mario3d93@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:55:41 by malena-b          #+#    #+#             */
/*   Updated: 2023/10/19 14:03:09 by malena-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

void leak()
{
	system("leaks test");
}

int	main(void)
{
	int		fd;
	char	*next_line;
	int		i = 1;

	atexit(leak);
	fd = open("read_error.txt", 0);
	while (i <= 3)
	{
		next_line = get_next_line(fd);
		printf("Line number %d: %s\n", i++, next_line);
		free(next_line);
	}
	next_line = get_next_line(-1);
	printf("Line number %d: %s\n", i++, next_line);
	close(fd);
	fd = open("read_error.txt", 0);
	while (i <= 6)
	{
		next_line = get_next_line(fd);
		printf("Line number %d: %s\n", i++, next_line);
		free(next_line);
	}
	close (fd);
	return (0);
}*/
