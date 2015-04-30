int c, x, H, W;
int search(int x, int y, int d, int r, char** M){
    if(r = (x >= 0 && x < W && y >= 0 && y < H && M[y][x] == '1' && (M[y][x] = '2' + c)))
        for(d = 0; d < 4; search(x + ((d&1) * (1 - (d&2))), y + ((~d&1) * (1 - (d&2))), 0, 0, M), d ++); 
    return r;
}
int numIslands(char **grid, int h, int w) {
    for(c = x = 0, H= h, W= w; x < H * W;c += search((x%W), x/W , 0, 0, grid), x++);
    return c;
}
