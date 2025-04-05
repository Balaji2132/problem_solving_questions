// Description

// In the city of Toyland, there are N houses. Noddy is looking for a piece of land in the city to build his house. All the houses in the city lie in a straight line and all of them are given a house number and position of the house from the entry point of the city. Noddy wants to find the house numbers between which he can build the largest house. Write an algorithm to help Noddy to find the house numbers between which he can build his house.

// Hint: No two houses will have the same position in case of multiple such answers, print the one with the least distance from the reference point.



// Input Format

// The first line of the input consists of an integer num, representing the number of houses (N). The next N lines consist of two space-separated integers – house Num and pos, representing the house number and the position of the houses.



// Constraints

// 2 < num < 10^6
// 1 < house Num < num
// 0 < pos < 10^6


// Output Format

// Print two space-separated integers representing the house numbers in ascending order between which the largest plot is available.



// Sample Input

// 5

// 3 7

// 1 9

// 2 0

// 5 15

// 4 30



// Sample Output

// 4 5


#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() 
{
    int num;
    cout << "Enter the number of houses: ";
    cin >> num;
    vector<pair<int, int>> houses(num);

    for (int i = 0; i < num; i++) {
        cout << "Enter house number and position: ";
        int houseNum, pos;
        cin >> houseNum >> pos;
        houses[i] = {pos, houseNum};

    }
    sort(houses.begin(), houses.end());
    int max_distance = 0;
    pair<int, int> result;
    for (int i = 1; i < num; i++)
    {
        int distance = houses[i].first - houses[i - 1].first;
        if (distance > max_distance) {
            max_distance = distance;
            int h1 = houses[i - 1].second;
            int h2 = houses[i].second;
            result = { min(h1, h2), max(h1, h2) };
        }
    }
    cout << "Largest plot is between houses: " << result.first << " " << result.second << endl;

    return 0;
}
