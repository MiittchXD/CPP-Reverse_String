#include <string>
#include<iostream>

using namespace std;

string reverseString(string original) {
	string reverse = original;
	char temp;
	int endIndex = reverse.length() - 1;

	// String is of even length
	if (reverse.length() % 2 == 0) {
		for (int i = 0; i < reverse.length() / 2; i++) {
			temp = reverse.at(i);
			reverse.at(i) = reverse.at(endIndex);
			reverse.at(endIndex) = temp;
			endIndex--;
		}
	}
	else { // String is of odd length
		for (int i = 0; i < reverse.length() / 2 - 1; i++) {
			temp = reverse.at(i);
			reverse.at(i) = reverse.at(endIndex);
			reverse.at(endIndex) = temp;
			endIndex--;
		}
	}
	return reverse;
}

int main() {
	string myString = "Seven";
	string reverseStr = reverseString(myString);
	cout << reverseStr;

	system("pause");
	return 0;
}