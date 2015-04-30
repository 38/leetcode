bool isHappy(int n) {
    static int result[100] = {1,2}, nn, nnn;
    if(n < 100)if(result[n]) return result[n] == 2; else result[n] = 1;
    for(nnn = n, nn=0;n;n/=10) nn += (n%10) * (n%10);
    return (nnn < 100)?(2 == (result[nnn] = isHappy(nn) + 1)):isHappy(nn);
}
