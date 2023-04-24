class Solution
{
    public:
    void insert(int arr[], int i,int n)
    {
        //code here
        //Base Case
        if(i==n)
        return ;
        
        int j=i;
        while(j>0 && arr[j-1] > arr[j])
        {
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
        }
        insert(arr,i+1,n);
    }
     public:
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        //code here
        //Base Case
        return insert(arr,0,n);
    }
};
