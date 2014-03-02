#include <string>
#include <iostream>
using namespace std;


int main() {
    int T,five,three,num,temp;
    const int cFive = 5;
    const int cThree = 3;
    string result;
    while(cin >> T && (1 <= T && T <= 20))
        break;
    for(int i = 0 ; i < T ; i++){
        five = three = 0;
        cin >> num;
        temp = num;
        while(num > 0){
            if(num % cThree == 0){
                three = num / cThree ;
                num %= cThree;
            }else{
                num -= cFive;
                ++five;
            }
        }
        if((three * cThree + five * cFive) != temp){
            cout << "-1" <<endl ;
            continue;
        }
        for(int j = 0 ; j < three ; j++)
            result += "555";
        for(int j = 0 ; j < five ; j++)
            result += "33333";
        cout << result <<endl;
        result.clear();
    }
    return 0;
}
