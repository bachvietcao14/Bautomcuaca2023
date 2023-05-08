#include"CommonFuntion.h"
string xucxac(const string a[],int b){
  if (b==1)return a[0];
    else if(b==2)return a[1];
     else if (b==3)return a[2];
     else if(b==4)return a[3];
     else if(b==5)return a[4];
     else return a[5];

    }
int thang(int x1,int x2,int x3,int x4,int x5,int x6,int k){
    if(k==1)return x1;
    else if (k==2)return x2;
    else if (k==3)return x3;
    else if (k==4)return x4;
    else if (k==5)return x5;
    else if (k==6)return x6;
}

int* create_random_array(int size, int min_value, int max_value) {
    srand(time(nullptr));
    int* arr = new int[size];  // táº¡o má»™t máº£ng Ä‘á»™ng
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % (max_value - min_value + 1) + min_value;  // táº¡o ra giÃ¡ trá»‹ ngáº«u nhiÃªn trong pháº¡m vi tá»« min_value Ä‘áº¿n max_value
    }
    return arr;
}
int congdiem(vector<int> b,int x1,int x2,int x3,int x4,int x5,int x6){
    map<int,int> congdiem;
    for (auto r:b){congdiem[r]++;}
    int an=0;
    for (auto k:congdiem){
        an+= (k.second+1)*thang(x1,x2,x3,x4,x5,x6,k.first);
    }
    return an;
}
