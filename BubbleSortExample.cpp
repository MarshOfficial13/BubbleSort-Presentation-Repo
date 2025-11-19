#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& numVector); // bubbleSort function declaration.

int main() {
    vector<int> nums = {5, 3, 2, 9, 8, 1, 7, 4, 6, 0};

    cout << "Before sorting: ";
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    bubbleSort(nums);

    cout << "After sorting:  ";
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}


void bubbleSort(vector<int>& numVector) {
    int vectorSize = numVector.size();
    bool swapped;

    // Outer loop to determine number of times to run sorting algorithm
    for (int i = 0; i < vectorSize - 1; i++) {
        swapped = false;

        // Loop that runs sorting algorithm, comparing adjacent elements
        for (int j = 0; j < vectorSize - i - 1; j++) {
            if (numVector[j] > numVector[j + 1]) {
                int temp = numVector[j];
                numVector[j] = numVector[j + 1];
                numVector[j + 1] = temp;
                swapped = true;
            }
        }

        if (!swapped)
            break; // Array already sorted. Additional loops are not required.
    }
}