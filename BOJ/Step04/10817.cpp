#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int d[3];
    for (int i = 0; i < 3; ++i)
        scanf("%d", &d[i]);
    sort(d, d + 3);

    printf("%d", d[1]);
}