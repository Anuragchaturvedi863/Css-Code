
#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,2,6,1,4};
    int num;
    for (int i=0;i<6;i++)
    {
        for(int j=i+1;j<6;j++)
        {
            if(arr[i]==arr[j]){
            arr[j]=-1;
            }
                
        }
    }
    for (int i=0;i<6;i++)
    {
        if (arr[i]!=-1)
        {
          cout<<arr[i]<<'\t';  
        }
    }
    
        
    }
    