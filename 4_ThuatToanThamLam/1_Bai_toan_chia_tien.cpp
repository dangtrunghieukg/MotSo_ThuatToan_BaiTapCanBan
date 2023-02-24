/* Đề bài: Giả sử bạn muốn chia số tiền n$ thành các tờ tiền có mệnh giá 1$, 2$, 3$ …. k$  sao cho số tờ tiền cần sử dụng là ít nhất.
Giả sử có các mệnh giá tiền tệ là 1$, 5$, 10$, 25$, và số tiền cần chia là 36$.
Ta muốn chia số tiền này thành các tờ tiền sao cho số tờ tiền sử dụng là ít nhất.
Để giải quyết bài toán này bằng thuật toán tham lam, ta chọn tờ tiền có mệnh giá lớn nhất mà vẫn nhỏ hơn hoặc bằng số tiền cần chia,
sau đó lấy số tờ tiền đó ra khỏi số tiền cần chia. Tiếp theo, ta lặp lại quá trình này với số tiền còn lại cho đến khi số tiền cần chia là 0.
Trong trường hợp này, ta sẽ chọn tờ tiền mệnh giá 25$ và lấy một tờ tiền đó ra. Sau đó, ta sẽ còn lại số tiền cần chia là 36$ – 25$ = 11$.
Tiếp theo, ta chọn tờ tiền mệnh giá 10$ và lấy 1$ tờ tiền đó ra, để lại 11$-10$ = 1$. Cuối cùng, ta chọn tờ tiền mệnh giá 1$ và lấy 1$ tờ tiền đó ra.
Vậy, tổng số tờ tiền cần sử dụng là 3, và giá trị của các tờ tiền đó là 25$ + 10$ + 1$ = 36$.
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int ChiaTien(vector<int> &  vtMenhGia, int tien){
    // Sắp xếp các mệnh giá tiền theo thứ tự giảm dần
    sort(vtMenhGia.rbegin(), vtMenhGia.rend());
    int soToTien = 0;
    for(int i=0; i<vtMenhGia.size(); i++){
        int m = vtMenhGia[i];
        // Lấy số tờ tiền có mệnh giá m và cập nhật số tiền cần chia
        int soTo = tien / m;
        soToTien += soTo;
        tien -= soTo * m;
        // Kết thúc nếu đã chia hết số tiền cần chia
        if(tien == 0) break;
    }
    return soToTien;
}
int main() {
    vector<int> vtMenhGiaTien = {1, 5, 10, 25};
    int tienHienCo = 36;
    int soToTien = ChiaTien(vtMenhGiaTien, tienHienCo);
    cout << "So to tien can dung la: " << soToTien << endl;
    return 0;
}






/*
Tác giả: Thầy Đặng Trung Hiếu - Giáo viên dạy Toán trường THCS & THPT Long Thạnh - Giồng Riềng - Kiên Giang - Phone: 0939239628
Donate: Paypal:dangtrunghieuspt@gmail.com ; Sacombank: Dang Trung Hieu - TK: 070126079549
*/
