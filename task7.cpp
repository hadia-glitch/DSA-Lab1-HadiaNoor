#include <iostream>
#include <vector>
using namespace std;

bool isempty(int arr[], int n) {//for empty case
    return n == 0; 
}
vector<int> findIndexes(int arr[], int n, int target) {//to find index and add to vector
    vector<int> indexes;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            indexes.push_back(i); 
        }
    }
    return indexes;
}
int main() {
    int numbers[]= {};
    int n = 0;  
    
    int target;
    cout << "Enter element to be found: ";
    cin >> target;
    
    vector<int> result = findIndexes(numbers, n, target);
    
    if (isempty(numbers, n)) {
        cout << "Array is empty";
    } else if (result.empty()) {
        cout << "Element not found";
    } else {
        cout << "Element found at indexes: ";
        for (int i = 0; i < result.size(); i++) {
            cout << result[i] << " ";
        }
    }
    
    return 0;
}
