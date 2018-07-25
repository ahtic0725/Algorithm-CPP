#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
    int c;
    scanf("%d", &c);
    while (c--) {
        int N, d[1001], cnt = 0, sum = 0;
        scanf("%d", &N);
        for (int i = 0; i < N; ++i) {
            scanf("%d", &d[i]);
            sum += d[i];
        }
        for (int i = 0; i < N; ++i) {
            if (d[i] > (double)sum / N)
                cnt++;
        }
        printf("%.3f%%\n", (double)cnt / N * 100);
    }
}