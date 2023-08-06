#include<iostream>
using namespace std;

struct Array {
int A[5];
int size;
int length;

};

int linearsearch(struct Array *arr,int key){
int i;
for ( i = 0; i < arr->length; i++)
{
     if (key==arr->A[i])
     {
         return i;
     }
     
}
return -1;


}


int main(){
int key;
struct Array arr={{12,22,33,44,55},5,5};
cout<<"enter the value of key ";
cin>>key;
cout<<linearsearch(&arr,key);
return 0;
}