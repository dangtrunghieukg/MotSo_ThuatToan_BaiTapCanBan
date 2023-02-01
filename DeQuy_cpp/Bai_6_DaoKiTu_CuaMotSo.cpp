#include <iostream>
using namespace std;

//In đảo thứ tự các kí tự của một số ví dụ 123 -> 321
void InDaoNguocKiTu(int k){
    if (k != 0){
        cout << k % 10 ;
        InDaoNguocKiTu(k/10);
    }
}

int main(){
    InDaoNguocKiTu(7890);
    return 0;
}





/*
Tác giả: Thầy Đặng Trung Hiếu - Giáo viên dạy Toán trường THCS & THPT Long Thạnh - Giồng Riềng - Kiên Giang - Phone: 0939239628
Donate: Paypal:dangtrunghieuspt@gmail.com ; Sacombank: Dang Trung Hieu - TK: 070126079549
*/