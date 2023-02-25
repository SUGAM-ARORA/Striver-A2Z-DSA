class Solution{
public:
	
void printTriangle(int n) {
	    // outer loop for row
	    int k=n,o=1;
	     
	    for(int i=1;i<=n;i++){
	        // spaces
	        
	        for(int k=1;k<=i-1;k++){
	            cout<<" ";
	        }
	        // printing stars
	        
	        for(int j=1;j<=n-i+k;j++){
	             
	           cout<<"*";
	        }
	        cout<<"\n";
	        o++;
	        k--;
	    }
}
};
