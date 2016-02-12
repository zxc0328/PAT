// 1007. 素数对猜想 (20)
// 关键在判断素数的算法isPrime，以及对于下边界情况的handle
// 1不是素数，2是最小的素数
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int num,i,count;
    bool isPrime(int num);
    cin >> num;
    i = 2;
    count = 0;
    while(i <= num){
        if (isPrime(i)){
            // 判断i+2是否越界
            if (isPrime(i+2) && ((i+2) <= num)){
                count += 1;
            }
        }
        i += 1;
    }
    cout << count << endl;
    return 0;
}

bool isPrime(int num){
    // 如果是大于2的偶数，则直接返回false
    if (num >2 && (num%2 == 0)){
        return false;
    }
    int n = int(sqrt(num));
    for (int i=2;i<=n;i++){
        if(num%i == 0){
            return false;
        }
    }  
    return true;
}
