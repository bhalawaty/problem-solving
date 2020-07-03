//
//  Vanya and Fence.cpp
//  problem solving
//
//  Created by Bilal on 03/07/2020.
//  Copyright © 2020 Bilal. All rights reserved.
//

#include <iostream>


int main() {
    int dFenceHigh = 0;
    int iFriendsNumber = 0;
    int friendsHigh = 0;
    int ans = 0;
    // insert code here...
    std::cin>>iFriendsNumber>>dFenceHigh;


    for (int i=0; i<iFriendsNumber; i++){
         
        std::cin>>friendsHigh;
        if (friendsHigh > dFenceHigh) {
            ans ++;
        }
        
        ans ++;
    }
    
    std::cout << ans<<'\n';

    

    }

    
