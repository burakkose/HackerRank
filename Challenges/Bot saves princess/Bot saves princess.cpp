#include <iostream>
#include <vector>
using namespace std;

void displayPathtoPrincess(int n, vector <string> grid){
    const int N = grid.size();
    for(int i=0;i<N;i++)
        cout<<grid[i]<<endl;

}
vector <string> get_Move(vector <string> vec){
    int mi,mj,pi,pj;
    const int N = vec.size();
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(vec[i][j] == 'm'){
                mi = i;
                mj = j;
            }
            else if(vec[i][j] == 'p'){
                pi = i;
                pj = j;
            }
        }
    }
    vector <string> temp;
    while(mi > pi){
        temp.push_back("UP");
        mi--;
    }
    while (mi < pi) {
        temp.push_back("DOWN");
        mi++;
    }
    while (mj > pj) {
        temp.push_back("LEFT");
        mj--;
    }
    while (mj < pj) {
        temp.push_back("RIGHT");
        mj++;
    }
    return temp;
}

int main(void) {

    int m;
    vector <string> grid;

    cin >> m;

    for(int i=0; i<m; i++) {
        string s; cin >> s;
        grid.push_back(s);
    }

    displayPathtoPrincess(m,get_Move(grid));

    return 0;
}
