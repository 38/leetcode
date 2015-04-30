int rangeBitwiseAnd(int m, int n) {
    int t = 0x40000000, ret = 0;
    for(;t;ret |= (m&n&t)&-(((n&~t)|(t-1)) < m),t>>=1);
    return ret;
}
