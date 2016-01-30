# include <iostream>
# include <string>

int main(){
    using namespace std;

    string input;
    string output = "";
    string first = "";
    string second = "";
    string third = "";

    cin >> input;
    int length = input.length();

    if (length >= 1){
        int num = stoi(input.substr(length-1));
        
        for (int i=1;i<num+1;i++){ 
           third +=  to_string(i);
        }
    }
    
    if (length >= 2){
        int num = stoi(input.substr(length-2, 1));

        for (int i=0;i<num;i++){
            second += "S";
        }
    }

    if (length >= 3){
        int num = stoi(input.substr(length-3, 1));

        for (int i=0;i<num;i++){
            first += "B";
        }
    }
    output = first + second + third;
    cout << output << endl;
    return 0;
}
