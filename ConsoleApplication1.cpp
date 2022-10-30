// Чертоусова умножения
//

#include <iostream>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	cout << "  ";

	for (int i2 = 1; i2 <= m; i2++) {

		cout <<  i2 << " ";
	}
	for (int i = 1; i <= n; i++) {
		cout << endl;
		cout << i << " "; 
		for (int i2 = 1; i2 <= m; i2++) {
			
			cout << i * i2 << " ";
			



		}
	}


}
