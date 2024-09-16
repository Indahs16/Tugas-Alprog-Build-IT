#include <stdio.h>
#include <math.h>

int cekFaktor(long long N) {
    int jumlahFaktor = 0;

    for (long long i = 1; i <= sqrt(N); ++i) {
        if (N % i == 0) {
            jumlahFaktor++;
            if (i != N / i) {
                jumlahFaktor++;
            }
        }

        if (jumlahFaktor > 2) {
            return 0; 
        }
    }

    return (jumlahFaktor == 2) ? 1 : 0; 
}

int main() {
    long long N;
    scanf("%lld", &N);

    printf("%s\n",cekFaktor(N)?"PRIMA":"BUKAN");

    return 0;
}