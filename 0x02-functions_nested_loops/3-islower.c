#include "main.h"
/**
 * _islower - Test the _islower function
 *
 * @c: Number to pass to _islower function
 */
int _islower(int c)
{
if (c < 'z' && c > 'a')
return (1);
else
return (0);
}
