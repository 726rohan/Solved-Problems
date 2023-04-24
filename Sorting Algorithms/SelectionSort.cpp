    int select(int arr[], int i)
    {
        return i;
    }
     
    void selectionSort(int arr[], int n)
    {
       //code here
       
       for(int i=0;i<=n-2;i++)
       {
          int mini=select(arr,i);
          for(int j=i;j<=n-1;j++)
          {
              if(arr[j]<arr[mini])
              mini=j;
          }
          swap(arr[mini],arr[i]);
       }
    }
