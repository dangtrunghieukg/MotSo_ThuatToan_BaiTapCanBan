#include <iostream>
using namespace std;

//Hàm tính N giai thừa = 1x2x3x..xN theo kiểu Đệ quy (Recursion)
int GiaiThuaN(int k){
    if (k > 1){
        return k*GiaiThuaN(k-1);
    }else{
        return 1;
    }
}

int main(){
    cout << GiaiThuaN(5);
    return 0;
}





/*
Tác giả: Thầy Đặng Trung Hiếu - Giáo viên dạy Toán trường THCS & THPT Long Thạnh - Giồng Riềng - Kiên Giang - Phone: 0939239628
Donate: Paypal:dangtrunghieuspt@gmail.com ; Sacombank: Dang Trung Hieu - TK: 070126079549
*/
