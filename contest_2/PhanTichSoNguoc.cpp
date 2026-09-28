#include <stdio.h>
int tmp;
void phanTichNguoc(int n, int i) {
    if (n == 1)
        return;

    if (n % i == 0) {
        phanTichNguoc(n / i, i);
        if(n!=tmp)
        	printf("%d *", i);
        else
        	printf("%d",i);
    } else {
        phanTichNguoc(n, i + 1);
    }
}

int main() {
    int n;
    scanf("%d", &n);
	tmp=n;
    phanTichNguoc(n, 2);

    return 0;
}
