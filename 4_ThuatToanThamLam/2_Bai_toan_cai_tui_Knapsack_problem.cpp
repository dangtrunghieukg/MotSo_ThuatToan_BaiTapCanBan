/* Ví dụ khác của thuật toán tham lam là bài toán cái túi (Knapsack problem).
Giả sử bạn có một cái túi có khả năng chứa trọng lượng tối đa là W và một danh sách các vật phẩm với giá trị và trọng lượng tương ứng.
Nhiệm vụ của bạn là chọn một số lượng vật phẩm sao cho giá trị tổng cộng là lớn nhất,
nhưng trọng lượng tổng cộng không vượt quá trọng lượng tối đa W của túi. Ví dụ, bạn có các vật phẩm sau:
Vật phẩm  Giá trị Trọng lượng
	1 	    6 	      2
	2 	    10 	      3
	3 	    12 	      4
	4 	    7 	      2
Nếu túi có khả năng chứa tối đa W = 7 đơn vị trọng lượng, thì chọn các vật phẩm 1, 2 và 4
sẽ cho tổng giá trị là 6 + 10 + 7 = 23, 
trọng lượng tổng cộng là 2+3+2=7 và không có cách nào chọn các vật phẩm khác để có tổng giá trị cao hơn. 
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct strVatPham {
    int giaTri;
    int trongLuong;
};

bool SoSanhTheoTiLeGiaTriTrongLuong(const strVatPham& a, const strVatPham& b) {
    double t1 = (double) a.giaTri / a.trongLuong;
    double t2 = (double) b.giaTri / b.trongLuong;
    return t1 > t2;
}

double CaiTui(vector<strVatPham>& dsVatPham, int khoiLuongToiDa) {
    //Sắp xếp từ bé đến lớn
    sort(dsVatPham.begin(), dsVatPham.end(), SoSanhTheoTiLeGiaTriTrongLuong);
    double tongGiaTri = 0.0;
    int tongTrongLuong = 0;
    for (int i = 0; i < dsVatPham.size(); i++){
        if (tongTrongLuong + dsVatPham[i].trongLuong <= khoiLuongToiDa) {
            tongGiaTri += dsVatPham[i].giaTri;
            tongTrongLuong += dsVatPham[i].trongLuong;
        } else {
            int canBo = khoiLuongToiDa - tongTrongLuong;
            tongGiaTri += dsVatPham[i].giaTri * ((double) canBo / dsVatPham[i].trongLuong);
            break;
        }
    }
    return tongGiaTri;
}

int main() {
    vector<strVatPham> ds_vat_pham = {{6, 2}, {10, 3}, {12, 4}, {7, 2}};
    int khoiLuongToiDa = 7;
    cout << CaiTui(ds_vat_pham, khoiLuongToiDa);
    return 0;
}







/*
Tác giả: Thầy Đặng Trung Hiếu - Giáo viên dạy Toán trường THCS & THPT Long Thạnh - Giồng Riềng - Kiên Giang - Phone: 0939239628
Donate: Paypal:dangtrunghieuspt@gmail.com ; Sacombank: Dang Trung Hieu - TK: 070126079549
*/
