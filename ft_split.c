#include <string.h>
#include <stdio.h>
#include <stdlib.h>

static int ft_split_count(char *s, char c)
{
  int   count;
  
  count = 0;
  while (s != NULL) {
    count++;
    s = strchr(s + 1, c);
  }
  return (count + 1);
}

void	*free_mem(char **res, int i)
{
	while (i--)
	{
		if (res[i])
			free(res[i]);
	}
	free(res);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char *s_start;
    char *s_move;
    char **rs;
    int count;
    int i;
    int slen;

    count = 0;
    i = 0;
    slen = 0;

	s_start = (char *) s;
    s_move = (char *) s;
    count = ft_split_count(s_start, c);
    rs = (char **)calloc(count, sizeof(char *));


    while (*s_move)
    {
      while (*s_move != c && *s_move != '\0')
      {
        slen++;
        s_move++;
      }
      rs[i] = (char *)calloc(slen + 1, sizeof(char));
	  if (rs[i] == NULL)
	  	free_mem(rs, i);
      strncpy(rs[i], s_start, slen);
      s_start = s_move + 1;
      slen = 0;
      i++;
      s_move++;
    }
	return (rs);
}
