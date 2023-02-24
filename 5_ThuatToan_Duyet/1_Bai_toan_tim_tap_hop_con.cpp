/*Ví dụ về việc áp dụng thuật toán Duyệt là bài toán tìm tất cả các tập con của một tập hợp.
Giả sử bạn có tập hợp {1, 2, 3} và bạn muốn tìm tất cả các tập con của tập hợp này.
Tập hợp tất cả các tập con của tập hợp {1, 2, 3} là: {}, {1}, {2}, {3}, {1, 2}, {1, 3}, {2, 3}, {1, 2, 3}.
*/
#include <iostream>
#include <vector>
using namespace std;

void LietKeTapHopCon(vector<int>& vtTapHop, vector<int>& vtTapCon, int viTri) {
    if (viTri == vtTapHop.size()){
        cout << "{";
        for (int i = 0; i < vtTapCon.size(); i++){
            if (i > 0) {
                cout << ", ";
            }
            cout << vtTapCon[i];
        }
        cout << "}" << endl;
        return; // có tác dụng thoát ra khỏi void
    }
    vtTapCon.push_back(vtTapHop[viTri]);
    LietKeTapHopCon(vtTapHop, vtTapCon, viTri+1);
    vtTapCon.pop_back();
    LietKeTapHopCon(vtTapHop, vtTapCon, viTri+1);
}

int main() {
    vector<int> vt_tap_hop = {1, 2, 3};
    vector<int> vt_tap_con;
    LietKeTapHopCon(vt_tap_hop, vt_tap_con, 0);
    return 0;
}








/*
Tác giả: Thầy Đặng Trung Hiếu - Giáo viên dạy Toán trường THCS & THPT Long Thạnh - Giồng Riềng - Kiên Giang - Phone: 0939239628
Donate: Paypal:dangtrunghieuspt@gmail.com ; Sacombank: Dang Trung Hieu - TK: 070126079549
*/
