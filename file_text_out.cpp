#include <stdio.h>
#include <stdlib.h>
#include <fstream> 
//#include <iostream> 
using namespace std;
int main(){
	ofstream fileout("filetest_out.txt");
    int r;
    int n=45849;
    fileout<<n<<"\n";
    for(int i = 0; i < n; ++i){
        r = rand();
        fileout<<r<<" ";
    }
	fileout<<10000000; 
	fileout.close();
}
