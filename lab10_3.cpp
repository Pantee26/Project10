#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>

using namespace std;

int main(){
    
    int num = 0;                  
    float Mean ;                
    float sum = 0;
    float sumxpow = 0;
    
    string textline;                
    ifstream source("score.txt");   
   
    while(getline(source, textline)) {
        sum += atof(textline.c_str());
        sumxpow += pow(atof(textline.c_str()),2);
        num++;                       
    }

    Mean = sum/num;
    cout << "Number of data = " << num << endl;
    cout << setprecision(3);  
    cout << "Mean = " << Mean << endl;
    cout << "Standard deviation = " << sqrt(sumxpow/num - pow(Mean,2));

 
}
