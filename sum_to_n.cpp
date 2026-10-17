#include<iostream>
using namespace std;
int main(){
    int n;                       // 存储用户输入的正整数 n
    int sum = 0;                 // 累加和，初始化为 0
    cout << "请输入一个正整数 n：";
    cin >> n;
    // 校验输入是否合法：n 必须为正整数
    if (n <= 0) {
        cout << "输入错误：n 必须是正整数！" << endl;
        return 1;                // 非 0 表示程序异常退出
    }
    // 循环累加：将 1 到 n 依次加到 sum 上
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    cout << "1 到 " << n << " 的累加和为：" << sum << endl;
    return 0;
}
