#include <stdlib.h>

void	ft_memdel(void **app)
{
	if (app && *app)
	{
		free(*app);
		*app = NULL;
	}	
}
