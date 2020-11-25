#include <iostream>
using namespace std;
int n;
int result;
string reply = "";

int main()
{
	while (reply != "exit")
	{
		system("clear");
		cout << endl << "Please specify a number" << endl;
		cin >> n;
		result = rand() % n;
		cout << "Random result between 0 and " << n << ":" << endl;
		cout << result << endl << endl;
		cout << "Type anything to continue or 'exit' to close" << endl;
		cin >> reply;
	}

	return 0;
}