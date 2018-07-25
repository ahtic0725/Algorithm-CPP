#include <cstdio>

int main() {
    int a;
    scanf("%d", &a);
    if (100 >= a && 90 <= a)
        printf("A");
    else if (89 >= a && 80 <= a)
        printf("B");
    else if (79 >= a && 70 <= a)
        printf("C");
    else if (69 >= a && 60 <= a)
        printf("D");
    else
        printf("F");
}