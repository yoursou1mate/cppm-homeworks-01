//
//  main.cpp
//  cppm-homeworks_01
//
//  Created by a1ex on 6/11/23.
//

#include <iostream>
#include <string>
#include <fstream>
#include "in.txt"





int main(int argc, const char * argv[]) {

   
    
    std::ifstream fin("in.txt");
   
    std::cout  << n << std::endl;
    for (int i = 0; i<n; ++i){
        std::cout << arr1[i] << " ";
    }
    std::cout << std::endl;
    
  
    std::cout  << m << std::endl;
    for (int j = 0; j<m; ++j){
        std::cout << arr2[j] << " ";
    }
    
    std::cout << '\n';
    
    std::ofstream fout2("out.txt");
    fout2 << m;
    int temp1 = arr2[5];
    fout2 << temp1 << " ";
    for (int j = 0; j<m-1; ++j){
        fout2 << arr2[j] << " ";
    }
    
    fout2 << n;
    int temp2 = arr1[0];
    for (int i = 1; i<n; ++i){
        fout2 << arr1[i] << " ";
    }
    fout2 << temp2;
    
    std::cout << m << '\n';
    std::cout << temp1 << " ";
    for (int j = 0; j<m-1; ++j){
        std::cout << arr2[j] << " ";
    }
    
    std::cout << '\n';
    
    std::cout << n << '\n';
    for (int i = 1; i<n; ++i){
        std::cout << arr1[i] << " ";
    }
    std::cout << temp2;

    std::cout << std::endl;
    
    
    
    
    delete []  arr1;
    delete []  arr2;
    return 0;
}
