bool isIsomorphic(char* s, char* t) {
    static char n[512],*m = n + 256;
    return (!*s && !*t && memset(n,0,512)) || (((!(m[*s] || n[*t] || !(m[*s] = *t, n[*t] = *s)) || (m[*s] == *t && n[*t] == *s)) || !memset(n,0,512))  && isIsomorphic(s+1,t+1)); 
}
