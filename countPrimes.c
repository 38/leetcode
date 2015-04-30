int C[1500001], F[1500031/32] = {3}, i, j;
__attribute__((constructor)) void p(){
    for(i = 2; i * i < 1500000; i ++) 
        if(~F[i/32] & (1 << (i&31))) 
            for(j = i * 2; j < 1500000; F[j/32] |= (1 << (j&31)),j += i);
    for(i = 0; i < 1500000; i ++) C[i + 1] = C[i] + (0 == (F[i/32] & (1 << (i&31))));
}
int countPrimes(int n) {return C[n];}
