#include <iostream>
using namespace std;

int main() {
    //Write your code here
int start,end,step;
    cin>>start>>end>>step;
    for (int currentFahrenhietValue = start; currentFahrenhietValue <= end; currentFahrenhietValue += step)

    {
        int celsiusValue = (int)((5.0 / 9) * (currentFahrenhietValue - 32));
        cout << currentFahrenhietValue << "\t" << celsiusValue << endl;;
    }
    return 0;
}

