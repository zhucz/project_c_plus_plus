#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
	int var_int = 0;
	char ch;
	int var_a = 0, var_b = 10;
	string family_name = "lu";
	string last_name = "mingliang";
	string name = "damien";

	cout << "please input a int type number \n";
	cin >> var_int;

	cout << "please input a char type number \n";
	cin >> ch; 

	cout << "var_int = " << var_int << endl;
	cout << "ch = " << ch << endl;
	cout << "var_a + var_b = " << var_a + var_b << endl; 
	cout << "Hi :" << family_name + last_name << endl;
	name = family_name + last_name;
	cout << name << endl;
	
	cout << "1666/2000 = " << 1666/2000 << endl;
 
	return 0;
}
