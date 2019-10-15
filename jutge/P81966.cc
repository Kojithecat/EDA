#include <iostream>
#include <vector>

using namespace std;

int posicio(double x, const vector<double>& v, int esq, int dre){
    int m = (esq+dre)/2;
    if(esq > dre) return -1;
    else if(v[m] > x )return posicio(x,v,esq,m-1);
    else if(v[m] < x )return posicio(x,v,m+1,dre);
    else return m;   
}
