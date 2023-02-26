class Solution {
  public:
     void printTriangle(int n) {

        // code here

        for(int i=1; i<=n; i++){

 

                for(int j=0; j<i; j++)

                    cout<<"*";

    

                for(int k=i; k<2*n-i; k++)

                 cout<<" ";

                 

                for(int l = 2*n-i; l<2*n; l++)

                cout<<"*";

                

            cout<<endl;

        }

        

        for(int i=1; i<n; i++){

            

            for(int j=i;j<n; j++)

            cout<<"*";

            

            for(int k=0; k<2*i; k++)

            cout<<" ";

            

            for(int l=n+i; l<2*n; l++)

            cout<<"*";

            

            cout<<endl;

        }

    }
};
