long long check(long long w,long long h,long long T)
 {
    for(long long i =1;i<=(T/2)+1;i++)
        {
        long long x = T/i;
        if(T%i==0 && T%x==0 &&((x<=w &&i<=h) ||(i<=w&&x<=h)))
            {
            return 0;
            }
    }
    return 1;
}
int getMinSplit(int width, int height, int nTiles) {
  unsigned  long long x = (width*height);
if(nTiles ==x)
    return 0;
else if (nTiles > x)
    return -1;
else if(check(width,height,nTiles)==1 && nTiles!=1)
    return -1;
else if(nTiles%width == 0 || nTiles%height == 0)
    return 1;
else
    return 2;
}

