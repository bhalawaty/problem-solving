//
//  main.cpp
//  Team
//
//  Created by Bilal on 03/07/2020.
//  Copyright © 2020 Bilal. All rights reserved.
//

#include <iostream>

int main() {
    int n = 0;
    int r = 0;
    int sum = 0;
    int result = 0;

    std::cin>>n;
    for (int i = 0; i < n; i++) {
        sum=0;
        for (int j=0; j<3; j++) {
            std::cin>>r;
            sum += r;
        }

        if (sum >= 2) {
            result++;
        }
    }
    std::cout<<result<<"\n\n";
}
