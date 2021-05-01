#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*g_auth = NULL;
char	*g_service = NULL;

int	main(void)
{
	char	buf[128];

	while (1)
	{
		printf("%p, %p\n", g_auth, g_service);
		if (!fgets(buf, 128, stdin))
			break ;
		if (!strncmp(buf, "auth ", 5))
		{
			g_auth = malloc(4);
			g_auth[0] = 0;
			if (strlen(buf + 5) <= 30)
				strcpy(g_auth, buf + 5);
		}
		if (!strncmp(buf, "reset", 5))
			free(g_auth);
		if (!strncmp(buf, "service", 6))
			g_service = strdup(buf + 7);
		if (!strncmp(buf, "login", 5))
		{
			if (g_auth[32] == 0)
				fwrite("Password:\n", 10, 1, stdout);
			else
				system("/bin/sh");
		}
	}
	return (0);
}
