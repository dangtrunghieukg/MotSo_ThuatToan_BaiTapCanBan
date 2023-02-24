/*Ví dụ khác về thuật toán Duyệt là bài toán tìm chuỗi con có tổng lớn nhất của một mảng số nguyên.
Giả sử bạn có một mảng số nguyên {1, -2, 3, 4, -1, 2, -6, 5} và bạn muốn tìm chuỗi con có tổng lớn nhất của mảng này.
Chuỗi con có tổng lớn nhất là {3, 4, -1, 2, -6, 5}, với tổng là 7.
*/
#include <iostream>
#include <vector>
using namespace std;

int TimChuoiConTongLonNhat(vector<int> vtA) {
    int maxTong = vtA[0];
    int tong = 0;
    int n = vtA.size();
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++){
            tong += vtA[j];
        }
        if (tong > maxTong) {
            maxTong = tong;
        }
        tong = 0;
    }
    return maxTong;
}

int main() {
    vector<int> a = {1, -2, 3, 4, -1, 2, -6, 5};
    int tongLonNhat = TimChuoiConTongLonNhat(a);
    cout << "Chuoi con co tong lon nhat la: " << tongLonNhat << endl;
    return 0;
}









/*
Tác giả: Thầy Đặng Trung Hiếu - Giáo viên dạy Toán trường THCS & THPT Long Thạnh - Giồng Riềng - Kiên Giang - Phone: 0939239628
Donate: Paypal:dangtrunghieuspt@gmail.com ; Sacombank: Dang Trung Hieu - TK: 070126079549
*/
