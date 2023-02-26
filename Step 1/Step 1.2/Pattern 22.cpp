class Solution {
  public:
    void printSquare(int n) {
        // code here
        for(int i = 0; i<2*n-1; i++){
            
            for(int j = 0; j<2*n-1; j++){
                int top = i;
                int left = j;
                int right = (2*n-2) - j;
                int bottom = (2*n-2) - i;
                
                int mini = min(min(top,bottom),min(left,right));
                cout<<n-mini<<" ";
            }
            cout<<endl;
        }
    }
};
