class Solution{

public:

    void printTriangle(int n) {

        for(int i=0; i<n; i++){

            for(int j=0; j<n-i; j++)

            cout<<"*";

            for(int j=0; j<2*i; j++)

            cout<<" ";

            for(int j=0; j<n-i; j++)

            cout<<"*";

            

            cout<<endl;

        }//upper half ends

        for(int i=0; i<n; i++){

            for(int j=0; j<=i; j++)

            cout<<"*";

            for(int j=0; j<2*n-2*(i+1); j++)

            cout<<" ";

            for(int j=0; j<=i; j++)

            cout<<"*";

            

         cout<<endl;   

        }//for lower half

       

    }

};
