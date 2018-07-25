#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int n, d[1001];
    double db[1001], sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
        scanf("%d", &d[i]);

    sort(d, d + n);
    int max = d[n - 1];

    for (int i = 0; i < n; ++i) {
        db[i] = (double)d[i] / max * 100;
        sum += db[i];
    }
    printf("%.2f\n", sum / n);
}