#include <iostream>
#include <vector>

using namespace std;

int posicio(double x, const vector<double>& v, int esq, int dre,int posx);
int first_occurrence(double x, const vector<double>& v){
    
    return posicio(x,v,0,v.size()-1,-1);
    
}


int posicio(double x, const vector<double>& v, int esq, int dre,int posx){
    int m = (esq+dre)/2;
    if(esq > dre) return posx;
    else if(v[m] > x )return posicio(x,v,esq,m-1,posx);
    else if(v[m] < x )return posicio(x,v,m+1,dre,posx);
    else return posicio(x,v,esq,m-1,m);
     
    
    
}
