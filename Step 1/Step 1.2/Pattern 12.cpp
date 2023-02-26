class Solution {
  public:
    void printTriangle(int n) {
        // code here
         int k=0;

     for(int i = 1;i <= n;i++)

         {   

            k =0;  

            for(int j = 1; j <= 2*n;j++)     {

                if(j <=i || j >= 2*n -i +1 )

                {

                    if(j<=i)

                    k++;

                    else if(j > 2*n-i+1)

                    k--;

                    cout << k<< " ";

                }

                else 

                cout<<"  ";

            }

            

            cout<<"\n";

        }
    }
};
