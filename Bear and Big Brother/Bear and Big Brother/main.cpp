//
//  main.cpp
//  Bear and Big Brother
//
//  Created by Bilal on 03/07/2020.
//  Copyright © 2020 Bilal. All rights reserved.
//

#include <iostream>

int main() {
    // insert code here...
    int a=0;
    int b=0;
    int result=0;
    
    std::cin>>a>>b;
    
   while( a <= b ) {
      a=a*3;
      b=b*2;
      result++;
   }
    std::cout<<result<<"\n";

         
    
}
