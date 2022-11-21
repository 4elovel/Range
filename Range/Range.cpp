#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
    vector <double> vec{ 1.2,1.6,2.4,2.3,6.7,8,2,1.3,8.9 };
    vector <double> buf;
    double ub, lb;
    sort(vec.begin(), vec.end());
    cout << "Your vector:\n";
    for (auto i : vec) {
        cout << i << " ";
    }
    cout << "\nLower bound:\n";
    cin >> lb;
    cout << "Upper bound:\n";
    cin >> ub;
    for (size_t i = 0; i < vec.size(); i++)
    {
        if (vec[i] < lb)
        {
            continue;
        }
        if (vec[i]>=lb && vec[i]<ub)
        {
            buf.push_back(vec[i]);
            continue;
        }
        if (vec[i] > ub)
        {
            break;
        }
    }
    cout << "\n\n";
    if (vec.empty()) {
        cout << "Range is empty!\n";
    }
    else {
        cout << "Your range:\n";
        for (auto i : buf) {
            cout << i << " ";
        }
    }

}