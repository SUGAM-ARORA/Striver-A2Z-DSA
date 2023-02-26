class Solution {
  public:
    void printTriangle(int n) {
        // code here
        int k=1;

     for(int i = 1;i <= n;i++)

         {   

            for(int j = 1; j <= n;j++)

            {

                if(j <=i )

                {

                   cout << k++<< " ";

                }

                else 

                cout<<"  ";

            }

            

            cout<<"\n";

        }
    }
};
