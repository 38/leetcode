int hammingWeight(uint32_t n) {
    int ret = 0;
    for(ret;n;n>>=1) ret +=(n&1);
    return ret;
}
