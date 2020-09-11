#include <bits/stdc++.h>
using namesapce std;
 
  int main (){

string cad;
cin>>cad;

for(int i=0;i<(1<<cad.size());i++){
    for(int j=0;j<cad.size();j++){
        if(i & (1<<j))cout<<cad[j]<<endl;
    }
}

//un bitmask too weno y simple :v



      return 0;
  }