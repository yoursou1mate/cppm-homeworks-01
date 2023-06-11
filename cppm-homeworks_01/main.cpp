//
//  main.cpp
//  cppm-homeworks_01
//
//  Created by a1ex on 6/11/23.
//

#include <iostream>
#include <string>
#include <fstream>




int main(int argc, const char * argv[]) {

    const int n = 5;
    const int m = 6;
    
    int arr1[n] = {1,2,3,4,5};
    int arr2[m] = {10,20,30,40,50,60};
    
    std::ofstream fout("in.txt");
    fout << arr1;
    fout << arr2;

    
    
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
    int temp2 = arr1[4];
    fout2 << temp2 << " ";
    for (int i = 0; i<n-1; ++i){
        fout2 << arr1[i] << " ";
    }
    
    std::cout << m << '\n';
    std::cout << temp1 << " ";
    for (int j = 0; j<m-1; ++j){
        std::cout << arr2[j] << " ";
    }
    
    std::cout << '\n';
    
    std::cout << n << '\n';
    std::cout << temp2 << " ";
    for (int i = 0; i<n-1; ++i){
        std::cout << arr1[i] << " ";
    }

    std::cout << std::endl;
    
    return 0;
}
