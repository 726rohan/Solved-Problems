class Solution
{
    public:
    //Function to sort the array using bubble sort algorithm.
    void Rec_bubbleSort(int arr[],int i)
    {
        //Base Case
        if(i==0)
        return ;
         bool didswap=true;
          for(int j=0;j<=i-1;j++)
          {
              if(arr[j]>arr[j+1])
              {
                  swap(arr[j],arr[j+1]);
                  didswap=false;
              }
          }
          if(didswap)
          return ;
          return Rec_bubbleSort(arr,i-1);
    }
    void bubbleSort(int arr[], int n)
    {
        // Your code here  
        return Rec_bubbleSort(arr,n-1);
    }
};
