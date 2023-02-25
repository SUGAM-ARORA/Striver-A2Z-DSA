
class Solution {
  public:
   void printDiamond(int n) {
        for(int i = 1; i<=n; i++){
            //for First spaces
            int spaces1 = n - i;
            for(int j = 1; j<=spaces1; j++){
                cout<<" ";
            }
            //stars first triangle
            for(int k = 1; k<=i; k++){
                cout<<"* ";
            }
            cout<<endl;
        }
            for(int a = 1; a<=n; a++){
            //2nd triangle spaces
            for(int l = 1; l< a; l++){
                cout<<" ";
            }
            //2nd triangle stars
            for(int m = 1; m<= n-a+1; m++ ){
                cout<<"* ";
            }
            cout<<endl;
            }
}
};
