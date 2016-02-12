//http://www.patest.cn/contests/pat-b-practise/1006
//分别获取个十百三部分数字，转换后拼接字符串即可。
//用到了C++ 11的新stoi()和to_string() API。

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
