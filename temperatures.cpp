#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>

using namespace std;


int main()
{
    vector <int> temp{-3,4,-5,-12,52};
    
    int result{10000};

    for(int y{}; y < temp.size(); y++){

        if(abs(result) == abs(temp.at(y))){
            if(result < temp.at(y))
                result = temp.at(y);
        } 

        else if(abs(result) > abs(temp.at(y))){
            result = temp.at(y);
        };
    }

    if(result == 10000)
        cout << 0 << endl;
    else{
        cout << result << endl;
    }


}