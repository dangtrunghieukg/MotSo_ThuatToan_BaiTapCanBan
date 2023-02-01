#include <iostream>
using namespace std;

//Dãy số Fibonacci: F1 = 1, F2 = 1, F3 = F2 + F1, ... , Fn = Fn_1 + Fn_2, n>=3

int SoFiboThuK(int k){
    if (k >=3 ){
        return SoFiboThuK(k-1)+SoFiboThuK(k-2);
    }else{
        return 1;
    }
}

int main(){
    for(int i=1; i<=10; i++){
        cout << "F" << i << " = " << SoFiboThuK(i) << endl;
    }
    return 0;
}





/*
Tác giả: Thầy Đặng Trung Hiếu - Giáo viên dạy Toán trường THCS & THPT Long Thạnh - Giồng Riềng - Kiên Giang - Phone: 0939239628
Donate: Paypal:dangtrunghieuspt@gmail.com ; Sacombank: Dang Trung Hieu - TK: 070126079549
*/