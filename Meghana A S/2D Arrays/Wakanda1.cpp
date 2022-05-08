#include<iostream>
#include<vector>

using namespace std;

void columnTraversal(vector<vector<int>>arr,int n,int m) {
//   Write your code here.

    // Loop to traverse matrix
    for (int j = 0; j < n; j++) {
 
        // If current column
        // is even index, print
        // it in forward order
        if (j % 2 == 0) {
            for (int i = 0; i < m; i++) {
                cout << arr[i][j] << " ";
            }
        }
 
        // If current column
        // is odd index, print
        // it in reverse order
        else {
            for (int i = m - 1; i >= 0; i--) {
                cout << arr[i][j] << " ";
            }
        }
    }
}

int main() {
  int n;
  int m;
  cin >> n;
  cin >> m;

  vector<vector<int>> mat;
  for (int i = 0; i < n; i++) {
    vector<int> arr;
    for (int j = 0; j < m; j++) {
      int ele;
      cin >> ele;
      arr.push_back(ele);
    }
    mat.push_back(arr);
  }

  columnTraversal(mat,n,m);
}
