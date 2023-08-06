#include <iostream>
using namespace std;

class diagonal
{

private:
    int *a;
    int n;

public:
    diagonal()
    {
        n = 2;
        a = new int[2];
    }
    diagonal(int n)
    {
        this->n = n;
        a = new int[n];
    }
    ~diagonal()
    {
        delete[] a;
    }
    void set(int i, int j, int x);
    int get(int i, int j);
    void display();
    int getdiamention()
    {
        return n;
    }
};
void diagonal::set(int i, int j, int x)
{
    if (i == j)
    {
        a[i - 1] = x;
    }
}
int diagonal::get(int i, int j)
{
    if (i == j)
    {
        return a[i - 1];
    }
    else
    {
        return 0;
    }
}
void diagonal::display()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j)

            {
                cout << a[i - 1] << " ";
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << endl;
    }
}

int main()
{

    int d;
    cout << "enter the diamention of the element " << endl;
    cin >> d;
    diagonal dm(d);
    int i, x, j;
    cout << "enter the element " << endl;
    for (i = 1; i <= d; i++)
    {
        for (j = 1; j <= d; j++)
        {
            cin >> x;
            dm.set(i, j, x);
        }
    }
    dm.display();
    // diagonal d(4);
    // d.set(1, 1, 3);
    // d.set(2, 2, 5);
    // d.set(3, 3, 9);
    // d.set(4, 4, 8);
    // d.display();
    // cout<<"get element are "<<endl;
    // d.get(2,2);
    // d.display();
    return 0;
}

/*out put.................................
3 0 0 0
0 5 0 0
0 0 9 0
0 0 0 8
*/