#include <iostream>
using namespace std;

//Tìm ước chung lớn nhất của 2 số dương, theo kiểu Đệ quy (Recursion)
int UCLN(int a, int b){
    if (b == 0)
        return a;
    return UCLN(b, a % b);
}
//Tìm bội chung nhỏ nhất của hai số dương
int BCNN(int a, int b){
    return (a*b)/UCLN(a, b);
}

int main(){
    cout << UCLN(5627, 33431) << endl; //=331
    cout << BCNN(5627, 33431) << endl; //=568327
    return 0;
}





/*
Tác giả: Thầy Đặng Trung Hiếu - Giáo viên dạy Toán trường THCS & THPT Long Thạnh - Giồng Riềng - Kiên Giang - Phone: 0939239628
Donate: Paypal:dangtrunghieuspt@gmail.com ; Sacombank: Dang Trung Hieu - TK: 070126079549
*/