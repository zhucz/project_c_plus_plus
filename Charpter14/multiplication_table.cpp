#include <iostream>
#include <iomanip>

using namespace std;

void multipliation_tab_func(int row_nums, int col_nums)
{
	int multipliation_tab[row_nums][col_nums];
	int row = 0, col = 0;

	for(row = 0; row < row_nums; row++){
		multipliation_tab[row][0] = row;
		for(col = 1; col < col_nums; col++){
			if(row == 0)
				multipliation_tab[row][col] = col;
			else	
				multipliation_tab[row][col] = row*col;
		}
	}

	for(row = 0; row < row_nums; row++){
		for(col = 0; col < col_nums; col++){
			cout << setw(3) << multipliation_tab[row][col] << " ";
		}
		cout << endl;
	}

}

int main(int argc, char **argv)
{
	int row_nums = 0, col_nums = 0;

	cout << "please input martix x:";
	cin >> row_nums; 

	cout << "please input martix y:";
	cin >> col_nums; 
	
	multipliation_tab_func(row_nums, col_nums);

	return 0;
}

