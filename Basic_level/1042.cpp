#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	string input;
	int alpahbet[26] = {0};
	int maxIndex = 0;
	getline(cin, input);
	for (int i=0;i<input.size();i++){
		if ((input[i] >= 65) && (input[i] <= 90)){
			input[i] = input[i] + 32;
		}
	}
	for (int i=0;i<input.size();i++){
		int index = int(input[i]) - 97;
		if ((index >= 0) && (index <= 26)){
			alpahbet[index] = alpahbet[index] + 1;
		}
	}

	for (int i=0;i<26;i++){
		if (alpahbet[i] > alpahbet[maxIndex]){
			maxIndex = i;
		}
	}
	cout << char(maxIndex+97) << " " << alpahbet[maxIndex] << endl;
	return 0;
}