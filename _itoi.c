#include <stdlib.h>
#include "holberton_printf.h"
char *_itoi(int num)
{
	int i = 0;
	int j, tmp_num;
	int n = num;
	int minus = 0;
	int len_number = 0;
	char *str_num;
	char temp;

	if (num == 0) {
		str_num = malloc(2 * sizeof(char));
		if (str_num == NULL) {
			return NULL;
		}
		str_num[0] = '0';
		str_num[1] = '\0';
		return str_num;
	}

	if (num < 0)
	{
		minus  = 1;
		n = -num;
	}

  tmp_num = n;
  while (tmp_num != 0)
  {
    tmp_num = tmp_num / 10;
    len_number++;
  }

  str_num = malloc((len_number + minus + 1) * sizeof(char));
  if (str_num == NULL) {
    return NULL;
  }

  while (n != 0)
  {
    str_num[i] = (n % 10) + '0';
    n = n / 10;
    i++;
  }

  if (minus == 1) {
    str_num[i] = '-';
    i++;
  }

  str_num[i] = '\0';

  for (j = 0; j < i / 2; j++) {
    temp = str_num[j];
    str_num[j] = str_num[i - j - 1];
    str_num[i - j - 1] = temp;
  }

  return str_num;
}
