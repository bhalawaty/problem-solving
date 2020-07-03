//
//  main.cpp
//  Anton and Danik
//
//  Created by Bilal on 03/07/2020.
//  Copyright © 2020 Bilal. All rights reserved.
//

#include <iostream>

int main() {
    int n =0;
    int a=0;
    int d=0;
    char s;
    
    
    std::cin>>n;

    for (int i =0 ; i < n ; i++) {
        std::cin>>s;
        if (s == 'A') {
            a++;
        }if (s == 'D') {
            d++;
        }
    
    }
    if (a > d) {
        std::cout<<"Anton\n\n";
    }else if (a < d){
        std::cout<<"Danik\n\n";

    }else{
        std::cout<<"Friendship\n\n";

    }
}
