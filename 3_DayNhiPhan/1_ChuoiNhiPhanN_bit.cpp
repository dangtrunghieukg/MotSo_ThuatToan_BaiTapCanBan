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

void LietKeChuoiNhiPhan(int i){
    for(int j=0; j<=1; j++){
        arrN[i]=j;
        if(i==N){
            XuatChuoiNhiPhan();
        }else{
            LietKeChuoiNhiPhan(i+1); // Đệ quy
        }
    }
}

int main(){
    N = 11;
    LietKeChuoiNhiPhan(1);
    return 0;
}




/*
Tác giả: Thầy Đặng Trung Hiếu - Giáo viên dạy Toán trường THCS & THPT Long Thạnh - Giồng Riềng - Kiên Giang - Phone: 0939239628
Donate: Paypal:dangtrunghieuspt@gmail.com ; Sacombank: Dang Trung Hieu - TK: 070126079549
*/
