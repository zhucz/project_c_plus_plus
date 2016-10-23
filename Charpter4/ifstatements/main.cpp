#include <iostream>
#include <string>

using namespace std;

void maxval(void)
{
	int a, b;

	cout << "please input int a:" <<endl;
	cin >> a;	

	cout << "please input int b:" <<endl;
	cin >> b;

	if(x > y){
		cout << "x > y \n";
	}else
		cout << "y > x \n";

}

void samestring( void )
{

	string a, b;

	cout << "please input string a:" <<endl;
	getline(cin, a, '\n');
	
	cout << "please input string b:" <<endl;
	getline(cin, b, '\n');

	if(a == b)
		cout << "same string" << endl;
	else
		cout << "not same string" << endl;
}


void login(void)
{
	string login_name = "admin";
	string login_pswd = "admin";
	string input_pswd = "admin";
	int i = 0;

	cout << "please input login name" << endl;
	cin >> login_name;

	for(i = 0; i < 100; i++){
		cout << "*";
		cin >> login_pswd;
		login_pswd += login_pswd;
	}

	if(login_name == "admin"){
		if(login_pswd == "admin"){
			cout << "welecome to login!" << endl;
		}else{
			cout << "user name or password error" << endl;
		}
	}

}


int main(int argc, char **argv)
{
//	samestring();
	login();

	return 0;
}
