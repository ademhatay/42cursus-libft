#include "libft.h"
#include <stdio.h>
#include <strings.h>


int main()
{
	
	// // ATOİ
	// char dizi[] = "+42";
	// printf ("%d\n", ft_atoi(dizi));
	// printf("%d\n", atoi(dizi));
	

	
	// // BZERO	
	// char dizi[] = "merhaba dunya";
	// char dizi1[] = "merhaba dunya";
	// ft_bzero(dizi, 1);
	// bzero(dizi1, 1);
	// printf("%s", dizi);
	// printf("%s", dizi1);
	//// null döner return yok!

	// // CALLOC
	//  int *ip, id;

    // ip = (int *) ft_calloc(10, sizeof(int));

    // for (id=0; id<10; id++) {
    //      *(ip+id) = (id+1) * 5;
    //      printf("%p adresindeki değer: %d\n", (ip+id), *(ip+id));
    // }
    // free(ip);
	// // 	0x7fcef3c05830 adresindeki değer: 5
	// // 0x7fcef3c05834 adresindeki değer: 10
	// // 0x7fcef3c05838 adresindeki değer: 15
	// // 0x7fcef3c0583c adresindeki değer: 20
	// // 0x7fcef3c05840 adresindeki değer: 25
	// // 0x7fcef3c05844 adresindeki değer: 30
	// // 0x7fcef3c05848 adresindeki değer: 35
	// // 0x7fcef3c0584c adresindeki değer: 40
	// // 0x7fcef3c05850 adresindeki değer: 45
	// // 0x7fcef3c05854 adresindeki değer: 50
	// ? // yer açar hepsini null döndürür ve  adresini döner
	
	// // MEMCHR
	//  const char *cp = "Bilgisayar";
    // const char cd = 'g';

    // printf("%c karakterinin bellek adresi: %s\n", cd, ft_memchr(cp, cd, 5));
	// // g karakterinin bellek adresi: 0x104eb1f83

	
	// // MEMCMP
	// const char *cp1 = "Bilgisayar";
    // const char *cp2 = "Bilgileri";
    // int ret;

    // ret = ft_memcmp(cp1, cp2, 10);

    // if(ret<0) printf("cp1 bellek içeriği cp2 bellek içeriğinden küçüktür!");
    // else if(ret>0) printf("cp2 bellek içeriği cp1 bellek içeriğinden küçüktür!");
    // else printf("cp1 bellek içeriği cp2 bellek içeriğine eşittir!");
	// // cp2 bellek içeriği cp1 bellek içeriğinden küçüktür!

	// MEMCPY
	// const char *s1 = "bilgisyar&proglamlama";
    // char d1[40];
    // const char *s2 = "bilgisyar&proglamlama";
    // char d2[40];
    // char *res;
    // char *ret;

    // res = memcpy(d1, s1, 15);
    // ret = ft_memcpy(d2, s2, 15);
    // printf("%s\n", res);
    // printf("%s\n", ret);
	// // bilgisyar&progl
	// // bilgisyar&progl

	
	// //MEMSET	
	// char dizi[] = "Bilgisayar";
	// printf ("%s", ft_memset(dizi, 'X', 3));
	// // XXXgisayar
	
	// //STRCHR	
	// char dizi[] = "bilgisayar";
	// printf("%s", ft_strchr(dizi, 'a'));
	// // ayar

	
	// //STRDUP	
	// char dizi1[] = "aaaaaaaaxa";
	// char *dizi2 = "bbbbbbb";
	// dizi2 = ft_strdup(dizi1);
	// printf("%s", dizi2);
	// // aaaaaaaaxa
	

	
	// // STRJOİN
	// char	dizi1[] = "adem";
	// char	dizi2[] = " hatay";
	// printf("%s", ft_strjoin(dizi1, dizi2));
	// // adem hatay

	
	// // STRLCPY
	// char cdizi1[] = "Bilgisayar";
    // const char cdizi2[] = "Programlama";

    // ft_strlcpy(cdizi1, cdizi2, 7);

    // printf("cdizi1 bellek içeriği: %s\n", cdizi1);
	// // cdizi1 bellek içeriği: Progra

	//// FT_İTOA
	// printf("%s", ft_itoa(   +-123));
	// // -123

	// // MEMMOVE
	// char	dizi1[] = "adem1";
	// char	dizi2[] = "hatay";
	// printf("%s\n", ft_memmove(dizi1, dizi2, 8));
	// printf("%s\n", dizi2);
	// // hata


	// // SPLİT 
	// char *a ="adem,hatay,antakya";
	// char **dizi = ft_split(a, ',');
	// int i = 0;
	// while (dizi[i])
	// {
	// 	printf("%s\n",dizi[i]);
	// 	i++;
	// }
	// // adem
	// // hatay
	// // antakya
	// // gcc -Wall -Wextra -Werror ft_split.c main.c ft_calloc.c ft_memset.c ft_strlcpy.c ft_bzero.c ft_strlen.c

	//// STRMAPİ
		
		// char str1[] = "abc";
		// char *str2;
		// str2 = ft_strmapi(str1, *f);
		// printf("%s\n", str2);
		// // bcd


	//// STRNCMP
	// const char *cp1 = "Bilgisayar";
    // const char *cp2 = "Bilgileri";
    // int ret;

    // ret = ft_strncmp(cp1, cp2, 5);

    // if(ret<0) printf("cp1 karakter dizisi cp2 karakter dizisinden küçüktür!");
    // else if(ret>0) printf("cp2 karakter dizisi cp1 karakter dizisinden küçüktür!");
    // else printf("cp1 karakter dizisi cp2 karakter dizisine eşittir!");

    // // cp1 karakter dizisi cp2 karakter dizisine eşittir!
	

	//// SUBSTR

	// char cdizi[] = "Karakter dizisi içinde işlem";

	// /* 9 değeri karakter dizisi içinde 0'dan başlayarak verilir ve 10.karaktere karşılık gelir. */
	// char* substr = ft_substr(cdizi, 9, 6);

	// printf("%s\n", substr);

	// /* Fonksiyon içinde tahsis edilen dinamik belleği boşaltma */
	// free(substr);
	//// dizisi
	//// gcc -Wall -Wextra -Werror  ft_substr.c main.c ft_strdup.c ft_strlen.c


	char const dizi1[] = "antakyaAdemHatayantakya";
	char const set[] = "antakya";
	printf("%s", ft_strtrim(dizi1, set));
	// // gcc -Wall -Wextra -Werror  ft_strtrim.c main.c ft_substr.c ft_strlen.c ft_strchr.c ft_strdup.c
}
