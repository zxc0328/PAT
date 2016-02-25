// 16/20, can't figure out where is wrong
#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main() {
    string a,b;
    cin >> a >> b;
    const int diff = b.size()-a.size();
    const int diffAbs = abs(diff);
    if (diff > 0){
        for (int i=0; i<diffAbs; i++){
            a = "0" + a;
        }
    }else if (diff < 0){
        for (int i=0; i<diffAbs; i++){
            b = "0" + b;
        }
    }
    cout << a.size() << " " << b.size() << endl;
    const int bSize = b.size();
    int j = 1;
    for (int i = (bSize-1);i >= 0; i--){
        if ((j%2) == 0){
            int s = int(b[i])-int(a[i]);
            if (s < 0){
                s += 10;
            }    
            b[i] = char(s + 48);
        }else{
            int sum = int(b[i]) + int(a[i]) - 48*2;
            int temp = sum%13;
            if (temp >= 10) {
                switch (temp){
                    case 10:
                        b[i] = 'J';
                        break;
                    case 11:
                        b[i] = 'Q';
                        break;
                    case 12:
                        b[i] = 'K';
                        break;
                }
            }else{
                b[i] = char(temp + 48);
            }
        }
        j += 1;
    }

    if(diff < 0){
        b = b.substr(0+diffAbs);
    } 
    cout << b << endl;
    
    return 0;
}
