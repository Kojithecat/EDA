#include <iostream>
#include <vector>


bool im_resistant_search(double x, const std::vector<double> &v, int esq, int dre);


bool resistant_search(double x, const std::vector<double>& v){
        return im_resistant_search(x, v, 0, v.size()-1);
    
}

bool im_resistant_search(double x, const std::vector<double>& v, int esq, int dre){
    if(esq > dre) return false;
    else if(esq + 1 >= dre) return x == v[esq] or x == v[dre];
    else{
        int m = (esq + dre)/2;   
        if(x > v[m]) return x == v[m-1] or im_resistant_search(x,v,m+1,dre);
        else if(x < v[m]) return x == v[m+1] or im_resistant_search(x,v,esq,m-1);
        else return true;
    }
}

