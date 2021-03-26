/*

	1.
	첫번째 값을 입력해주세요 >> 입력1
	두번째 값을 입력해주세요 >> 입력2


	2값을 받아서 덧셈 곱셈 나눗셈 뺄셈을


	입력1 + 입력2 = 결과값
	입력1 * 입력2 = 결과값
	입력1 / 입력2 = 결과값
	입력1 - 입력2 = 결과값


*/

#include<iostream>

using namespace std;
void main() {

	int var1, var2;

	cout << "첫번째 값을 입력해주세요>>";
	cin >> var1;
	cout << "두번째 값을 입력해 주세요>>";
	cin >> var2;

	cout << var1 << "+" << var2 << "=" << var1 + var2 << endl;
	cout << var1 << "*" << var2 << "=" << var1 + var2 << endl;
	cout << var1 << "/" << var2 << "=" << var1 + var2 << endl;
	cout << var1 << "-" << var2 << "=" << var1 + var2 << endl;

}



