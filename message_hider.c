#include <stdio.h>
#include "encrypt.h"

int main()
{	
	char msg[80];
	while(fgets(msg,80,stdin))
	{
		char a;
		encrypt(msg);
		puts(msg);
	}
	return 0;
}
