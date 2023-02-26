class Solution {
  public:
   void printTriangle(int n) 

    {

        // may2021

        for(int i=1 ; i<=n ; i++)

         {

             int print = (i&1)?1:0;

             for(int j=1 ; j<= i ; j++)

              {

                  cout<<print<<" ";

                  print= (print)?0:1;

              }

             cout<<endl;

         }

    }
};
