/* CS1C HW05
* Programmer: Adit Mohindra
* Class: CS1C T-Th 12:30 pm
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//declares new vector Lotto of type int with two parameters of ints
vector <int> Lotto(int, int);


int main()
{
    vector<int> winners;
 
    winners = Lotto(51, 6);
    
    for (int i = 0; i < winners.size(); i++) {
        cout << winners.at(i) << " ";
    }

    cout << endl;

    return 0;
}

vector <int> Lotto(int max, int num)
{
    vector<int> winners;

    vector<int> temp;

    for (int i = 1; i <= max; i++) {
        temp.push_back(i);
    }

    random_shuffle(temp.begin(), temp.end());

    for (int i = 0; i < num; i++) {
        winners.push_back(temp.at(i));
    }

    sort(winners.begin(), winners.end());

    return winners;
}