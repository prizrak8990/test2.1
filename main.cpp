#include <iostream>
using namespace std;

int main()
{
    int n, i;
    int *a=nullptr;
    cin >> n;
    if (n <= 0)
        return 0;
    a=new int[n];
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (i = 0; i < n / 2; i++) {
        swap(a[i], a[n - i - 1]);
    }
    for (i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
