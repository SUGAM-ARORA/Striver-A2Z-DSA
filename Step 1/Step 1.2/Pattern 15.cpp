class Solution {
  public:
    void printTriangle(int n) {
        // code here
         for(int i = 0; i < n; i++){
     for(int j = 'A'; j < ('A' + n - i); j++){
         cout << char(j);
     }
     cout << endl;
 }
    }
};
