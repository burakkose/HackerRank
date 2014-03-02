#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

const int dx[] = {1,-1,0,0},dy[] = {0,0,-1,1};
char board[101][101];
int by,bx,cnt = 0;

bool norm(int x, int y)
{
    return x >= 0 && y >= 0 && x < by && y < bx;
}

bool dfs(int x, int y, int px=-1, int py=-1)
{
    if(board[x][y] == '*')
        return 1;
    int cc = 0;
    bool fl = 0;
    for(int i = 0 ; i < 4 ; ++i)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(!norm(nx, ny))
            continue;
        if(nx == px && ny == py)
            continue;
        if(board[nx][ny] == 'X')
            continue;
        if(dfs(nx, ny, x, y))
            fl = 1;
        ++cc;
    }
    if(fl && cc > 1)
        ++cnt;
    return fl;
}

int main() {
    int ttime;
    cin >> ttime;

    while(ttime--){
        int mx , my ;
        cin >> by >> bx;

        for(int i = 0 ; i < by ; i++)
            for(int k = 0 ; k < bx ; k++){
                cin >> board[i][k];
                if(board[i][k] == 'M'){
                    mx = i; my = k;
                }
            }
        int k;
        cin >> k;
        cnt = 0;
        dfs(mx,my);
        if(cnt == k)
            cout << "Impressed" << endl;
        else
            cout << "Oops!" << endl;
    }

    return 0;
}



