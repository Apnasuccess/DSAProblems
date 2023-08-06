#include<iostream>
using namespace std;

struct array{
int a[20];
int size;
int length;
};
void display(struct array arr){
    int i;
cout<<"array element are "<<endl;
for (  i = 0; i < arr.length; i++)
{
    cout<<" "<<arr.a[i];
}
}
void SetIndex(struct array *arr ,int index,int x){

 if (index>=0 && index < arr->length)
 {
    arr->a[index]=x;
 }
 

}


int main(){
    struct array arr={{1,2,3,4,5,6,7,8,9},10,9};
   
  SetIndex(&arr,1,25);
    display(arr);
    return 0;
}