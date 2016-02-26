#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;
string earthToMars(string num);
string marsToEarth(string num);
vector<int> trans10To13(string num10);
int trans13To10(vector<int>);

stringstream ss;
const string marsZero = "tret";
const string marsLow[12] = {"jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
const string marsHigh[12] = {"tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};

int main() {
	char ch;
	int N;
	cin >> N;
	vector<string> input(N);
	vector<string> output(N);
	cin.get(ch);
	for (int i=0;i<N;i++){
		getline(cin, input[i]);
	}
	for (int i=0;i<N;i++){
		if (char(input[i][0]) >= 48 && char(input[i][0]) <= 57){
			output[i] = earthToMars(input[i]);		
		}else{
			output[i] = marsToEarth(input[i]);
		}
	}
	for (int i=0;i<N;i++){
		cout << output[i] << endl;
	}
}

string earthToMars(string num) {
	  vector<int> num13 = trans10To13(num);
	  string output;
		if (num13.size() == 2){
			if (num13[0] == 0){
				output = marsHigh[num13[1]-1];
			}else{
				output = marsHigh[num13[1]-1] + " " + marsLow[num13[0]-1];
			}	
		}else{
			if (num13[0] == 0){
				output = marsZero;
			}else{
				output = marsLow[num13[0]-1];
			}	
		}
		return output;
}

string marsToEarth(string marsStr) {
	vector<string> marsVec;
	int position = 0;
  position = marsStr.find(" "); 
  if (position > 0) {
  	marsVec.push_back(marsStr.substr(0,position));
  	marsVec.push_back(marsStr.substr(position + 1));
  }else{
  	marsVec.push_back(marsStr);
  }
  vector<int> num13;
  	if (marsVec.size() == 2){
  		for (int i=0;i<12;i++){
  			if (marsVec[0] == marsHigh[i]){
  				num13.push_back(i+1);
  			}
  		}
  		if (marsVec[1] == marsZero){
  			num13.push_back(0);
  		}
  		for (int i=0;i<12;i++){
  			if (marsVec[1] == marsLow[i]){
  				num13.push_back(i+1);
  			}
  		}
  	}else{
  		for (int i=0;i<12;i++){
  			if (marsVec[0] == marsHigh[i]){
  				num13.push_back(i+1);
  				num13.push_back(0);
  			}
  		}
  		if (marsVec[0] == marsZero){
  			num13.push_back(0);
  			num13.push_back(0);
  		}
  		for (int i=0;i<12;i++){
  			if (marsVec[0] == marsLow[i]){
  				num13.push_back(0);
  				num13.push_back(i+1);
  			}
  		}
  	}
  int num10;
  string output;
  num10 = trans13To10(num13);
  ss.clear();
	ss << num10;
	ss >> output;
  return output;
}

vector<int> trans10To13(string num10) {
	vector<int> num13Int;
	int num10Int;
	ss.clear();
	ss << num10;
	ss >> num10Int;
	int ans = num10Int;
	int remain;

	while(ans != 0){
		remain = ans%13;
		num13Int.push_back(remain);
		ans = ans/13;
	}
	return num13Int;
}

int trans13To10(vector<int> num13){
	int num10;
	num10 = num13[1]+ num13[0]*13;
	return num10;
}





