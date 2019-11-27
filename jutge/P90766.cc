#include <iostream>
#include <vector>
using namespace std;

int n,m;

bool cercatresor(vector<vector<char> > &mat,int x,int y,int &suma){
    if(x< 0 or x >= n or y < 0 or y >= m) return false;
    if(mat[x][y] == 't'){
        suma++;
    } 
    if(mat[x][y] == 'X') return false;
    mat[x][y] = 'X';
    return cercatresor(mat,x+1,y,suma) or cercatresor(mat,x,y+1,suma) or cercatresor(mat,x-1,y,suma) or cercatresor(mat,x,y-1,suma);
}

int main(){
    
    cin >> n >> m;
    vector<vector<char> > mat (n, vector<char> (m));
    for(int i = 0; i<n;i++)
        for(int j = 0; j<m;j++)
            cin >> mat[i][j];
    int x,y;
    int suma = 0;
    cin >> x >> y;
    cercatresor(mat,x-1,y-1,suma);
    cout << suma << endl;
}
