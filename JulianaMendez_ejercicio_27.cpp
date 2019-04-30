#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

   


int main(){
    float u_old [101][101];
    float u_new [101][101];
    int i;
    int j;
    
    for(i=0;i<101;i++){
        for (j=0;j<101;j++){
            u_old[i][j]= 0;
        }
    }
    

    for(i=20;i<61;i++){
       u_old[i][40]=-100;
       u_old[i][60]=100;
    }
        
    
    float error;
    
    for(i=0;i<101;i++){
        for (j=0;j<101;j++){
            error+=(u_new[i][j]-u_old[i][j])/u_new[i][j];
        }
    }
    
        
    while(error<1/100){
        for(i=1;i<100;i++){
            for (j=1;j<100;j++){
                if(i<20 && i>60 && j!=20 && j!=40){
                    u_new[i][j]= 1/4*(u_old[i+1][j]+u_old[i-1][j] + u_old[i][j+1] + u_old[i][j-1]);
                }
            }
        }
    }    
        
     std::cout << u_new << std::endl;
  return 0;
}