// 1049. The key to this is to conduct a math equation. And this kind of
// question is typical in PAT. Similar question: 1003

//code credit: http://blog.csdn.net/wudaxiaosheng/article/details/50329105
#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main() {
    int N,i;
    cin >> N;
    vector<double> nums(N);
    double sum = 0;
    for (i=0;i<N;i++){
        cin >> nums[i];
    }
    for (i=0;i<N;i++){
        sum += (N - i)*nums[i]*(i + 1);
    }

    cout << fixed << setprecision(2) << sum << endl;

    return 0;
}
