#include <stdio.h>
void hanoi(int n, char x, char y, char z)
{
    if (n == 1)
    {
        printf("Pindahkan cakram 1 dari %c ke %c\n", x, y);
        return;
    }
    hanoi(n - 1, x, z, y);
    printf("Pindahkan cakram %d dari %c ke %c\n", n, x, y);
    hanoi(n - 1, z, y, x);
}
int main()
{
    int n;
    printf("Masukkan jumlah cakram (N > 1): ");
    scanf("%d", &n);
    hanoi(n, 'A', 'C', 'B');
    return 0;
}