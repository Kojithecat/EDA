#include <iostream>


int expmod(int n, int k, int m){
    int var;
    n = n%m;
    if(k == 0) return 1;
    else var = expmod(n,k/2,m)%m; 
    
    if(k %2 == 0) return (var*var)%m;
    else return (((n*var)%m)*(var))%m;
        
         
}

int main(){
    int n,k,m;
    while(std::cin >> n >> k >> m) std::cout << expmod(n ,k ,m) << std::endl;    
}
