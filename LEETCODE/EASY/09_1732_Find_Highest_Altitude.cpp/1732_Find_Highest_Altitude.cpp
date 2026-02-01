#include<iostream>
#include <vector>
using namespace std;

int largestAltitude(vector<int>& gain){
    int currentAltitude = 0;
    int maxAltitude = 0;

    for (int  i = 0; i < gain.size(); i++)
    {
        currentAltitude = currentAltitude + gain[i];
        maxAltitude = max(currentAltitude , maxAltitude);
    }
    return maxAltitude;
    
}



int main(){
   vector<int> gain = {-5, 1, 5, 0, -7};

    cout << "Highest Altitude : " << largestAltitude(gain);



    return 0;

}