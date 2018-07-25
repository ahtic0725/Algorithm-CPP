#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, sum = 0;
    string str;

    scanf("%d", &n);
    cin >> str;

    for (int i = 0; i < n; ++i)
        sum += (str[i] - '0');
    printf("%d", sum);
}