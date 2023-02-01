#include <iostream>
using namespace std;

//Dãy số Tribonacci Tr1 = 1, Tr2 = 1, Tr3 = 2, Tr4 = Tr3+Tr2+Tr1, ..., Trn=Trn_1+Trn_2+Trn_3, n>=4

int SoTriBoThuK(int k){
    if (k >=4 ){
        return SoTriBoThuK(k-1)+SoTriBoThuK(k-2)+SoTriBoThuK(k-3);
    }else if (k == 3) return 2;
    else return 1;
}
int main(){
    for(int i = 1; i <= 10; i++){
        cout << SoTriBoThuK(i) << endl;
    }
    return 0;
}





/*
Tác giả: Thầy Đặng Trung Hiếu - Giáo viên dạy Toán trường THCS & THPT Long Thạnh - Giồng Riềng - Kiên Giang - Phone: 0939239628
Donate: Paypal:dangtrunghieuspt@gmail.com ; Sacombank: Dang Trung Hieu - TK: 070126079549
*/