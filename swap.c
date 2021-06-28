void swap_max(int arr[], int l, int n )
{
  int temp=arr[n];
  int index,i;
    for(i=n+1;i<l;i++)
    {
	    if(arr[i]>temp)
	    {
		    temp=arr[i];
		    index=i;
	    }
   }
  arr[index]=arr[n];
  arr[n]=temp;
}
void ssort(int arr[],int l)
{
  for(int position=0;position<l-1;position++)
  {	
	  swap_max(arr,l,position);
  }
}
