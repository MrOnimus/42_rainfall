#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*p(void)
{
	char buf[64];
	void *eip;

	fflush(stdout);
	gets(buf);
	if (((unsigned int)eip & 0xb0000000) == 0xb0000000)
	{
		printf("(%p)\n", eip);
		exit(1);
	}
	puts(buf);
	return (strdup(buf));
}

int	 main(void)
{
	p();
	return (0);
}
