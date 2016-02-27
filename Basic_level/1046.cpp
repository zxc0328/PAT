#include <iostream>

using namespace std;

int main(){
	int N;
	int countA = 0;
	int countB = 0;
	cin >> N;
	for (int i=0;i<N;i++){
		int callA,callB,numA,numB;
		cin >> callA;
		cin >> numA;
		cin >> callB;
		cin >> numB;
		int all = callA + callB;
		if (numA == all && numB == all){
			continue;
		}
		if (numA == all){
			countB += 1;
		}else if(numB == all){
			countA += 1;
		}
	}
	cout << countA << " " << countB << endl;
	return 0;
}