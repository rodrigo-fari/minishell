/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-fari <rde-fari@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 16:01:47 by rde-fari          #+#    #+#             */
/*   Updated: 2024/12/12 10:32:15 by rde-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/minishell.h"

int	main(void)
{
	char		*input;
	t_env		*env;
	extern char	**environ;

	env = env_to_struct(environ);
	while (true)
	{
		input = readline("🤏🐚⮕ ");
		if (input)
		{
			add_history(input);
			ms_exec(env, input);
			free(input);
		}
	}
}
