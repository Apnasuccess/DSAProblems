#include<iostream>
using namespace std;
struct array {
int a[10];
int size;
int length;
};
void display(struct array arr)
{
    int i;
    cout << "array element are ";
    for (i = 0; i < arr.length; i++)
    {
        cout <<" "<< arr.a[i];
    }
}
void missingelement(struct array arr){
   int l= arr.a[0];
    int dif=l-0;
    int i;
    for (i = 0; i < arr.length-1; i++)
    {
        if (arr.a[i]-i != dif)
        {
            cout<<"missing element are "<<i+dif<<endl;
            break;
        }
       
    }
    

}

int main(){
    struct array arr = {{6, 7, 8, 9, 10, 11, 13, 14}, 10, 8};
    missingelement(arr);
    display(arr);
    return 0;
}