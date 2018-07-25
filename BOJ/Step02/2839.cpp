#include <cstdio>

using namespace std;

int main(){
    int n, a, res = -1;
    scanf("%d", &n);
    for (a = 0; a * 5 <= n; a++)
        if ( (n - (a * 5)) % 3 == 0)
            res = a + ((n - (a * 5)) / 3);
    printf("%d", res);
}