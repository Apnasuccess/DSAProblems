#include <iostream>
using namespace std;
 
class LTMatrix{
private:
    int n;
    int* A;
public:
    LTMatrix(int n){
        this->n = n;
        A = new int [n * (n + 1)/2];
    }
    ~LTMatrix(){ delete[] A; }
    void Display(bool row=true);
    void setRowMajor(int i, int j, int x);
    void setColMajor(int i, int j, int x);
    int getRowMajor(int i, int j);
    int getColMajor(int i, int j);
    int getN(){ return n; }
 
};
 
void LTMatrix::setRowMajor(int i, int j, int x) {
    if (i >= j){
        int index = ((i * (i - 1))/2) + j - 1;
        A[index] = x;
    }
}
 
void LTMatrix::setColMajor(int i, int j, int x) {
    if (i >= j){
        int index = (n * (j-1) - (((j-2) * (j-1))/2)) + (i-j);
        A[index] = x;
    }
}
 
int LTMatrix::getRowMajor(int i, int j) {
    if (i >= j){
        int index = ((i * (i - 1))/2) + j - 1;
        return A[index];
    } else {
        return 0;
    }
}
 
int LTMatrix::getColMajor(int i, int j) {
    if (i >= j){
        int index = (n * (j-1) - (((j-2) * (j-1))/2)) + (i-j);
        return A[index];
    } else {
        return 0;
    }
}
 
void LTMatrix::Display(bool row) {
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            if (i >= j){
                if (row){
                    cout << getRowMajor(i, j) << " ";
                } else {
                    cout << getColMajor(i, j) << " ";
                }
            } else {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
}
 
int main() {
 
    LTMatrix rm(4);
    rm.setRowMajor(1, 1, 1);
    rm.setRowMajor(2, 1, 2);
    rm.setRowMajor(2, 2, 3);
    rm.setRowMajor(3, 1, 4);
    rm.setRowMajor(3, 2, 5);
    rm.setRowMajor(3, 3, 6);
    rm.setRowMajor(4, 1, 7);
    rm.setRowMajor(4, 2, 8);
    rm.setRowMajor(4, 3, 9);
    rm.setRowMajor(4, 4, 10);
 
    rm.Display();
    cout << endl;
 
    LTMatrix cm(4);
    cm.setColMajor(1, 1, 1);
    cm.setColMajor(2, 1, 2);
    cm.setColMajor(2, 2, 3);
    cm.setColMajor(3, 1, 4);
    cm.setColMajor(3, 2, 5);
    cm.setColMajor(3, 3, 6);
    cm.setColMajor(4, 1, 7);
    cm.setColMajor(4, 2, 8);
    cm.setColMajor(4, 3, 9);
    cm.setColMajor(4, 4, 10);
 
    cm.Display(false);
 
    return 0;
}






/*#include <iostream>
using namespace std;

class ltmatrix
{

private:
    int *a;
    int n;

public:
    ltmatrix(int n)
    {
        this->n = n;
        a = new int[n * (n + 1) / 2];
    }
    ~ltmatrix()
    {
        delete[] a;
    }
    void display(bool row = true);
    void setrowmajor(int i, int j, int x);
     setcolmajor(int i, int j, int x);
    int getrowmajor(int i, int j);
    int getcolmajor(int i, int j);
    int getn()
    {
        return n;
    }
};

void ltmatrix::setrowmajor(int i, int j, int x)
{
    if (i >= j)
    {
        int index = ((i * (i - 1)) / 2) + j - 1;
        a[index] = x;
    }
}

void ltmatrix::setcolmajor(int i, int j, int x)
{
    if (i >= j)
    {
        int index = (n * (j - 1) - (((j - 2) * (j - 1)) / 2)) + (i - j);
        a[index] = x;
    }
}

int ltmatrix::getrowmajor(int i, int j)
{
    if (i >= j)
    {
        int index = ((i * (i - 1)) / 2) + j - 1;
        return a[index];
    }
    else
    {
        return 0;
    }
}

int ltmatrix::getcolmajor(int i, int j)
{
    if (i >= j)
    {
        int index = (n * (j - 1) - (((j - 2) * (j - 1)) / 2)) + (i - j);
        return a[index];
    }
    else
    {
        return 0;
    }
}

void ltmatrix::display(bool row)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i >= j)
            {
                if (row)
                {
                    cout << getrowmajor(i, j) << " ";
                }
                else
                {
                    cout << getcolmajor(i, j) << " ";
                }
            }
            else
            {
                cout << "0 "
                     << " ";
            }
        }
        cout << endl;
    }
}

int main()
{

    cout << "row major " << endl;
    ltmatrix rm(4);
    rm.setrowmajor(1, 1, 1);
    rm.setrowmajor(1, 1, 1);
    rm.setrowmajor(1, 1, 1);
    rm.setrowmajor(1, 1, 1);
    rm.setrowmajor(1, 1, 1);
    rm.setrowmajor(1, 1, 1);
    rm.setrowmajor(1, 1, 1);
    rm.setrowmajor(1, 1, 1);
    rm.setrowmajor(1, 1, 1);
    rm.setrowmajor(1, 1, 1);
    rm.display();
    cout << endl;

    ltmatrix cm(4);
    cm.setcolmajor(1, 1, 1);
    cm.setcolmajor(1, 1, 1);
    cm.setcolmajor(1, 1, 1);
    cm.setcolmajor(1, 1, 1);
    cm.setcolmajor(1, 1, 1);
    cm.setcolmajor(1, 1, 1);
    cm.setcolmajor(1, 1, 1);
    cm.setcolmajor(1, 1, 1);
    cm.setcolmajor(1, 1, 1);
    cm.setcolmajor(1, 1, 1);
    cm.display();

    return 0;
}










 */

 