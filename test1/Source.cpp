#include "iostream"
using namespace std;
int main(int argc, char* argv[], char* envp[])
{
	cout << "„P„‚„€„ƒ„„„€„z „{„p„|„Ž„{„…„|„‘„„„€„‚, „ƒ„~„p„‰„p„|„p „r„r„u„t„y„„„u „„u„‚„r„€„z „‰„y„ƒ„|„€, „„€„ƒ„|„u „~„u„s„€ „r„„„€„‚„€„u";
	int num_1, num_2, result;
	cin >> num_1;
	cin >> num_2;
	result = num_1 - num_2;
	cout << num_1 << " - " << num_2 << " = " << result << endl;
	if (result > 40) {
		cout << "heloo";
	} else if (result > 5 && result < 13) { // && „x„~„p„‰„y„„ „I
		cout << "Result biger 5 and lower 13";
	} else if (result > 20)
		cout << "Result is biger that 20" << endl;
	
	system("pause");
	return 0;
		
}