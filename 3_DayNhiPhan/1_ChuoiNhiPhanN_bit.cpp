#include <iostream>
using namespace std;

int arrN[101];
int N;
// Xuất chuỗi nhị phân có độ dài n bit (gồm n số 0, 1)
void XuatChuoiNhiPhan(){
    for(int i=1; i<=N; i++){
        cout << arrN[i];
    }
    cout << endl;
}

void DeQuy(int i){
    for(int j=0; j<=1; j++){
        arrN[i]=j;
        if(i==N){
            XuatChuoiNhiPhan();
        }else{
            DeQuy(i+1);
        }
    }
}

int main(){
    N = 11;
    DeQuy(1);
    return 0;
}
