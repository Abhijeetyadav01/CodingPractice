#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Number of Element";
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
            cout<<"Enter "<<i<<" Element";
            cin>>arr[i];
    }
    int f;
    cout<<"Enter Number to search";
    cin>>f;

    int beg=0, last=a;
    while(beg<=last)
    {

        int mid=(beg+last)/2;
        if(f==arr[mid]){
            cout<<"found at == "<<mid;
            exit(0);
        }else if (arr[mid]<f){
        beg=mid+1;}
        else{
            last=mid-1;
        }


    }

    return 0;
}
