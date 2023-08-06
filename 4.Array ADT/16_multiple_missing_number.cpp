#include<iostream>
using namespace std;
struct array {
    int a[20];
    int size;
    int length;
};
void display(struct array arr){
    int i;
    cout<<"array element are ";
    for(i=0;i<arr.length;i++){
        cout<<" "<<arr.a[i];
    }
}

void multimissing(struct array arr){
int l=arr.a[0];
int dif=l-0;
int i;
for ( i = 0; i <=arr.length; i++)
{
     if (arr.a[i] - i != dif)
     {
        while (dif<arr.a[i]-1)
        {
            cout<<" "<<i+dif;
            dif++;
        }
        
     }
     
}

}
int main(){
    struct array arr={{6,7,8,9,11,12,15,16,17,18,19},20,11};
    multimissing(arr);
    display(arr);
    return 0;
}