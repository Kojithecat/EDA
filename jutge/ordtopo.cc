#include <iostream>
#include <vector>
#include <queue>
using namespace std;






int main(){
    int n,m;
    
    while(cin >> n >> m){
        vector<vector<int>> G(n);
        vector<int> apuntaciones(n);
        int vs, vd;
        for(int i = 0; i < m;i++){
        cin >> vs >> vd;
        apuntaciones[vd]++;
        G[vs].push_back(vd);
        }
    
        vector<int> sol;
        priority_queue<int, vector<int>, greater<int>> pq;
        for(int i = 0; i < n; i++) if(apuntaciones[i] == 0) pq.push(i);
        while(not pq.empty()){
            int x = pq.top();
            pq.pop();
            sol.push_back(x);
            for(int j = 0; j < G[x].size();j++){
                    if(--apuntaciones[G[x][j]] == 0) pq.push(G[x][j]);
            }
                
        }

        for(int k = 0; k < sol.size()-1;k++) cout << sol[k] << " ";
        cout << sol[sol.size()-1] << endl;
        
    }
    
    
}
