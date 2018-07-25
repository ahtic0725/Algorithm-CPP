#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
    int n, one, two, res, cnt = 0;

    scanf("%d", &n);
    one = n % 10;
    two = n / 10;
    do {
        cnt++;
        res = ((one + two) % 10) + (one * 10);
        one = res % 10;
        two = res / 10;
    } while (n != res);
    printf("%d\n", cnt);
}