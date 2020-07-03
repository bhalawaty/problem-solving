//
//  main.cpp
//  Beautiful Matrix
//
//  Created by Bilal on 03/07/2020.
//  Copyright © 2020 Bilal. All rights reserved.
//

#include <iostream>

int main() {
    int result=0;
    int x[5][5];
    for (int i =0 ; i<5; i++) {
         for (int j =0 ; j<5; j++) {
             std::cin>>x[i][j];
             if(x[i][j]==1){
                 result=abs(2-i)+abs(2-j);
             }
           }
    }
    std::cout<<result<<"\n\n";
}
