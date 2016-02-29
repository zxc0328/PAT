#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	string target = "PATest";
	string input;
	getline(cin, input);
	const int charCodeP = int('P');
	const int charCodeA = int('A');
	const int charCodeT = int('T');
	const int charCodee = int('e');
	const int charCodes = int('s');
	const int charCodet = int('t');

	int count[6] = {0};
	int all = 0;

	for (int i=0;i<input.size();i++){
		switch (int(input[i])){
			case charCodeP:
				count[0] += 1;
				break;
			case charCodeA:
				count[1] += 1;
				break;
			case charCodeT:
				count[2] += 1;
				break;
			case charCodee:
				count[3] += 1;
				break;
			case charCodes:
				count[4] += 1;
				break;
			case charCodet:
				count[5] += 1;
				break;
		}
	}

	for (int i=0;i<6;i++){
		all = all + count[i];
	}
	while(all != 0){
		for (int i=0;i<6;i++){
			if (count[i] > 0){
				cout << target[i];
				count[i] -= 1;
				all -= 1;
			}	
		}
	}
	cout << endl;

	return 0;
}