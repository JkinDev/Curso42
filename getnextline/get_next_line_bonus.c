/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrus-gar <jrus-gar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 10:49:25 by jrus-gar          #+#    #+#             */
/*   Updated: 2023/06/02 11:09:01 by jrus-gar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

/*Se encarga de concatenar dos cadenas de texto*/

char	*join_lines(char *line1, char *line2)
{
	char	*concatenated;

	if (!line1)
	{
		line1 = malloc(1);
		line1[0] = 0;
	}
	if (!line1)
		return (NULL);
	concatenated = ft_strjoin(line1, line2);
	free(line1);
	return (concatenated);
}

/*Se utiliza para extraer una línea de texto*/

char	*get_line(char *stack_lines)
{
	char	*line;
	size_t	i;

	if (!stack_lines || !*stack_lines)
		return (NULL);
	i = 0;
	while (stack_lines[i] != '\n' && stack_lines[i] != '\0')
		i++;
	if (stack_lines[i] == '\n')
		i++;
	line = malloc(sizeof(char) * i + 1);
	if (!line)
		return (NULL);
	i = 0;
	while (stack_lines[i] != '\n' && stack_lines[i] != '\0')
	{
		line[i] = stack_lines[i];
		i++;
	}
	if (stack_lines[i] == '\n')
		line[i++] = '\n';
	line[i] = '\0';
	return (line);
}

/*Se utiliza para actualizar stack_lines después de haber extraído una
línea de texto */

char	*upgrade_stack(char *stack_lines)
{
	char	*remaining_lines;
	char	*rest_of_stack;
	int		i;

	i = 0;
	rest_of_stack = ft_strchr(stack_lines, '\n');
	if (!rest_of_stack)
	{
		free(stack_lines);
		return (NULL);
	}
	rest_of_stack++;
	remaining_lines = malloc(sizeof(char) * (ft_strlen(rest_of_stack) + 1));
	if (!remaining_lines)
		return (NULL);
	while (*rest_of_stack != '\0')
	{
		remaining_lines[i] = *rest_of_stack;
		i++;
		rest_of_stack++;
	}
	remaining_lines[i] = '\0';
	free(stack_lines);
	return (remaining_lines);
}

char	*get_next_line(int fd)
{
	static char	*stack_lines[FD_MAX];
	char		temp[BUFFER_SIZE + 1];
	char		*line;
	ssize_t		btread;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	btread = 1;
	while (btread > 0)
	{
		btread = read(fd, temp, BUFFER_SIZE);
		if (btread < 0)
			return (free(stack_lines[fd]), stack_lines[fd] = NULL, NULL);
		temp[btread] = '\0';
		stack_lines[fd] = join_lines(stack_lines[fd], temp);
		if (!stack_lines[fd])
			return (NULL);
		if (ft_strchr(stack_lines[fd], '\n'))
			break ;
	}
	line = get_line(stack_lines[fd]);
	stack_lines[fd] = upgrade_stack(stack_lines[fd]);
	return (line);
}
