#include<iostream>
using namespace std;


// 1. Make Function for addition of TWO numbers 
void sum(int x,int y){
    cout<<x+y<<endl;
    }

int main(){
    int a ,b; cin>>a>>b;
    sum(a,b);
}




// 2. Make function for Factorial  


int  fact(int x){

    if(x==0) return 1;
    int val =1;
    
    for(int i=1;i<=x;i++){
        val*=i;
    }
    return val;
        }

int main(){
    int a ; cin>>a;
    int ans =fact(a);
    cout<<ans;
}



// 3. Make Function for Combination 

int  fact(int x){

    if(x==0) return 1;
    int val =1;
    
    for(int i=1;i<=x;i++){
        val*=i;
    }
    return val;
        }


void com(int x,int y){
    
    int nval =fact(x);
    int rval=fact(y);
    int nrval = fact(x-y);
    cout<<(nval)/(nrval * rval);

    }

int main(){
    int n ,r; cin>>n>>r;
    com(n,r);
}






//4. Make function for Permutation 

int  fact(int x){

    if(x==0) return 1;
    int val =1;
    
    for(int i=1;i<=x;i++){
        val*=i;
    }
    return val;
        }


void per(int x,int y){
    
    int nval =fact(x);
    int nrval = fact(x-y);
    cout<<(nval)/(nrval);

    }

int main(){
    int n ,r; cin>>n>>r;
    per(n,r);
}





//5. Make PASCAL Triangle (Using combination) 

int  fact(int x){

    if(x==0) return 1;
    int val =1;
    
    for(int i=1;i<=x;i++){
        val*=i;
    }
    return val;
        }


int com(int x,int y){
    
    int nval =fact(x);
    int rval=fact(y);
    int nrval = fact(x-y);
   return ((nval)/(nrval * rval));

    }

int main(){
    int n; cin>>n; // for how many rows you want to print it

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<com(i,j)<<" ";
        }
        cout<<endl;
    }
   
}


//6. Find GCD of two number(Using function concept) 

void hcf(int x,int y){
    int hcf =0;
   
   for(int i=1;i<=min(x,y);i++){
        if(x%i==0 && y%i==0){
            hcf=max(hcf,i);
        }
   }

   cout<<hcf;


    }

int main(){
    int a ,b; cin>>a>>b;
    hcf(a,b);
}




/*

REST TRY TO DO YOURSEF

7. Write a function to print squares of first n natural numbers, taking n 
as argument to the function Write a function that takes the radius of a 
circle as an argument and returns its area 




8. Write a function that takes the radius of a circle as an argument 
and returns its area. 
9. Given two numbers a and b, write a function to print all odd 
numbers between them. 
10. 
Write a function to count the number of digits in a 
number and then print the square of this number.




*/