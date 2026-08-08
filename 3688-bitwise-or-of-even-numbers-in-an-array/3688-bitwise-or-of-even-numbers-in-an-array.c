int evenNumberBitwiseORs(int* nums, int numSize) 
{
    int result=0;
    for(int i=0;i<numSize;i++)
    {
        if((nums[i]%2)==0)
        {
            result |=nums[i];
        }
    }
    return result;
}