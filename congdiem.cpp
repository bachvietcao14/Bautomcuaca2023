#include "CommonFuntion.h"

int congdiem(vector<int> b,int x1,int x2,int x3,int x4,int x5,int x6){
    map<int,int> congdiem;
    for (auto r:b){congdiem[r]++;}
    int an=0;
    for (auto k:congdiem){
        an+= (k.second+1)*thang(x1,x2,x3,x4,x5,x6,k.first);
    }
    return an;
}
