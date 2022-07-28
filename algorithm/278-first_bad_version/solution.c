// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

int firstBadVersion(int n) {
    int s = 1, m, e = n;
    
    while (s < e )
    {
        m = s + ((e - s) / 2);
        
        if (isBadVersion(m))
        {
            e = m;
        }
        else {
            s = m + 1;
        }
    }
    
    return (s);
}