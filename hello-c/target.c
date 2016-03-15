/*
 * @author  :  Rajan Khullar
 * @created :  03/14/16
 * @updated :  03/14/16
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	// check for correct number of args
	if(argc < 3)
	{
		printf("missing parameters\n");
		exit(0);
	}

	// pass args into msg and n
	char *msg = argv[1];
	// converts string to int with no error reporting
	int n = atoi(argv[2]);

	// print msg n times
	int i;
	for(i = 0; i < n; i++)
		printf("%s\n", msg);

	return 0;
}
