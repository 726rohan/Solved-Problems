class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
         // Your code here
         int lh=l;
         int rh=m+1;
         vector<int>temp;
         while(lh<=m && rh<=r)
         {
             if(arr[lh]<=arr[rh])
             {
                 temp.push_back(arr[lh]);
                 lh++;
             }
             else
             {
                 temp.push_back(arr[rh]);
                 rh++;
             }
         }
         //If any Element is Left
         while(lh<=m)
         {
             temp.push_back(arr[lh]);
             lh++;
         }
         while(rh<=r)
         {
             temp.push_back(arr[rh]);
             rh++;
         }
         //Putting Back The Element in Array in Sorted Order
         for(int i=l;i<=r;i++)
         arr[i]=temp[i-l];
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        //Base Case
        if(l>=r)
        return ;
        
        int mid=(l+r)/2;
        //Recursive Call for Left Half
        mergeSort(arr,l,mid);
        //Recursive Call for Right Half
        mergeSort(arr,mid+1,r);
        //Merge Two Half
        merge(arr,l,mid,r);
        
    }
};
