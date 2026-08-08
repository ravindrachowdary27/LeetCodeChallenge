int xorOperation(int n, int start) {
    int nums[n];
    for(int i=0;i<n;i++)
    {
        nums[i]=start + 2 * i;
    }
    int xor=nums[0];
    for(int j=0;j<n-1;j++)
    {
        xor^=nums[j+1];
    }
    return xor;
}