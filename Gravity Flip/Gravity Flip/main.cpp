//
//  main.cpp
//  Gravity Flip
//
//  Created by Bilal on 04/07/2020.
//  Copyright © 2020 Bilal. All rights reserved.
//

#include <iostream>
#include <algorithm>

using namespace std;
int main() {
    int n = 0;
    cin>>n;
    int result [n-1];
    for (int i=0 ; i < n ; i++)
        cin>>result [i];
    

    sort(result, result+n);
    for (int i = 0; i < n; ++i)
        cout<< result[i] << "\n\n";
    
    return 0;

}
