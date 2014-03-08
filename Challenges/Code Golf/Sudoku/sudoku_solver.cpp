#include <iostream>
#include <list>
#define N 9
using namespace std;

list<int> zeroPos;

bool isSafe(int grid[N][N],int mrow,int mcol,int num){
    for(int i = 0 ; i < 9 ; i++)
        if(grid[mrow][i] == num || grid[i][mcol] == num )
            return false;

    mrow -= (mrow%3);
    mcol -= (mcol%3);

    for(int i = 0 ; i < 3 ; i++)
        for(int j = 0 ; j < 3 ; j++){
            if(grid[i+mrow][j+mcol] == num)
                return false;
        }

    return true;
}
bool SudokuSolve(int grid[N][N]){
    if(zeroPos.empty())
        return true;

    int m_row = zeroPos.front() / 9;
    int m_col = zeroPos.front() % 9;

    for(int num = 1 ; num < 10 ; num++){
        if(isSafe(grid,m_row,m_col,num)){

            grid[m_row][m_col]=num;
            zeroPos.pop_front();

            if(SudokuSolve(grid))
                return true;

            grid[m_row][m_col] = 0;
            zeroPos.push_front(m_row * 9 + m_col);
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;

    while(n--){
        int grid[N][N];

        for(int i = 0 ; i < N ; i++)
            for(int j = 0 ; j < N ; j++){
                grid[i][j] = 0;
                cin >> grid[i][j];
                if(!grid[i][j])
                    zeroPos.push_back(i*9 + j);
            }

        SudokuSolve(grid);

        for (int i = 0 ; i < N; i++) {
            for (int j = 0 ; j < N; j++) {
                cout << grid[i][j] << " ";
            }
            cout << endl;
        }

        zeroPos.clear();
    }
    return 0;
}
