#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
	string var_a;
	string var_b;
	
	getline(cin, var_a, '\n');
	getline(cin, var_b, '\n');

	cout << "var_a + var_b = " << var_a + var_b << endl;
	
	return 0;
}	
