class Solution {
  public:
    void printTriangle(int n) {
        // code here
         for(int i=1;i<=n;i++)
        {
            char ch = 'A';
            for(int j = 1 ; j<=i;j++)
            {
                cout<<ch;
                ch++;
            }
            cout<<endl;
        }
    }
};
