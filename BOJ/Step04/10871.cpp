#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int n, x, a[10001];
    scanf("%d %d", &n, &x);
    for (int i = 0; i < n; ++i)
        scanf("%d", &a[i]);

    for (int i = 0; i < n; ++i)
    {
        if (a[i] < x)
            printf("%d ", a[i]);
    }
}