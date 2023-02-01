#include <iostream>
using namespace std;

//Đổi số tự nhiên N từ cơ số 10 sang số nhị phân
void ThapPhanSangNhiPhan(int k){
    if (k >0 ){
        ThapPhanSangNhiPhan(k/2);
        cout << k % 2;
    }
}

int main(){
    ThapPhanSangNhiPhan(10);
    return 0;
}




/*
Tác giả: Thầy Đặng Trung Hiếu - Giáo viên dạy Toán trường THCS & THPT Long Thạnh - Giồng Riềng - Kiên Giang - Phone: 0939239628
Donate: Paypal:dangtrunghieuspt@gmail.com ; Sacombank: Dang Trung Hieu - TK: 070126079549
*/