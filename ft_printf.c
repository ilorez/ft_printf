/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znajdaou <znajdaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 19:24:13 by znajdaou          #+#    #+#             */
/*   Updated: 2024/12/01 16:25:00 by znajdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_printf(char *format, ...)
{
  va_list va;
  # function for count number of "% in text"
  # the function sould go line by line if it found ^ it's will calll va-arg w ith the type that comm after the ^ signe 
  # if whas d it's will call putnbr function and send to put nbr function the value that var arg return, after that one by one print the char inter fund next %
  # x will use the putnbrbase, okay  i think it's easy i will first work on create function because it's look simple after that look if i can find any thing else to do or to understand if i didn't really understand ithi will leave the putnber base as it 
  # becaause the is printf i can use it letter in any thing if i want no probleme not metter to what i will add it's my own function lets make it cool 
  # the next thing that i think i should focus on is errors hnadle what ever the user will pass to the function, and test it with orginal one /


}
