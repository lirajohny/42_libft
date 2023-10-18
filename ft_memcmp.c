/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlira <jlira@student.42.rj>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 11:27:55 by jlira             #+#    #+#             */
/*   Updated: 2023/10/18 14:35:52 by jlira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*str1;
	const unsigned char	*str2;

	i = 0;
	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (*str1 != *str2)
			return (str1[i] - str2[i]);
		str1++;
		str2++;
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

// Protótipo da função ft_memcmp
int ft_memcmp(const void *s1, const void *s2, size_t n);

int main() {
    // Exemplo 1: Strings iguais
    const char str1[] = "Hello";
    const char str2[] = "Hello";
    size_t len1 = 5;

    int result1 = ft_memcmp(str1, str2, len1);
    printf("Resultado 1: %d\n", result1); // Deve imprimir 0

     result1 = memcmp(str1, str2, len1);
    printf("Resultado 1: %d\n", result1); // Deve imprimir 0
    // Exemplo 2: Strings diferentes
    const char str3[] = "Hello";
    const char str4[] = "Hxllo";
    size_t len2 = 5;

    int result2 = ft_memcmp(str3, str4, len2);
    printf("Resultado 2: %d\n", result2); // Deve imprimir a diferença entre 'e' e 'x' ASCII

     result2 = memcmp(str3, str4, len2);
    printf("Resultado 2: %d\n", result2); // Deve imprimir a diferença entre 'e' e 'x' ASCII
    // Exemplo 3: Comparação parcial
    const int arr1[] = {1, 2, 3, 4, 5};
    const int arr2[] = {1, 2, 0, 4, 5};
    size_t len3 = 3 * sizeof(int); // Comparar apenas os primeiros 3 inteiros

    int result3 = ft_memcmp(arr1, arr2, len3);
    printf("Resultado 3: %d\n", result3); // Deve imprimir a diferença entre 3 e 0

     result3 = memcmp(arr1, arr2, len3);
    printf("Resultado 3: %d\n", result3); // Deve imprimir a diferença entre 3 e 0
    return 0;
}*/
