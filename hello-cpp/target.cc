/*
 * @author  :  Rajan Khullar
 * @created :  03/18/16
 * @updated :  03/19/16
 */

#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char **argv)
{
	// check for correct number of args
	if(argc < 3)
	{
		cout << "missing parameters" <<endl;
		exit(1);
	}

	// pass args into msg and n
	char *msg = argv[1];
	int n = stoi(argv[2]);

	// print msg n times
	for(int i=0; i<n; i++)
		cout << msg << endl;
	return 0;
}
