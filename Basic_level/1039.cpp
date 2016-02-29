#include <iostream>
#include <string>

using namespace std;

int main () {
	string input;
	string demand;
	bool flag = false;
	getline(cin, input);
	getline(cin, demand);

	const int demandSize = demand.size();

	for (int i=0;i<input.size();i++){
		for (int j=0;j<demand.size();j++){
				if(input[i] == demand[j]){	
					demand.erase(j,1);
					break;
			}
		}
	}

	if (demand.size() == 0){
		cout << "Yes";
		cout << " " << input.size() - demandSize << endl;
	}else{
		cout << "No";
		cout << " " << demand.size() << endl;
	}
	
	return 0;
}