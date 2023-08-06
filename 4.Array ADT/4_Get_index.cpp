#include<iostream>
using namespace std;

struct array  {

int a[10];
int size;
int length;

};

void display(struct array arr ){

int i;
cout<<"array element are ";
for(i=0;i<arr.length;i++){

cout<<" "<<arr.a[i];
}

}

int getindex( struct array *arr, int index){
{
    if (index>=0 && index < arr->length)
    {
        return arr->a[index];
    }
    return -1;
}
}

int main(){
    struct array arr ={{1,2,3,4,5,6,7,8,9},10,9};
    int result;
   result= getindex(&arr,5);
    cout<<"to given index the element are "<<result<<endl;
   display(arr);
    return 0;
}