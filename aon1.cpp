#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int arr[6], sum = 0;
        for (int i = 0; i < 6; i++)
            cin >> arr[i];

        for (int i = 0; i < 5; i++)
            sum += arr[i];

        if (sum * arr[5] <= 120)
            cout << "No"<< endl;
        else
            cout<<"Yes"<<endl;
    }
}
