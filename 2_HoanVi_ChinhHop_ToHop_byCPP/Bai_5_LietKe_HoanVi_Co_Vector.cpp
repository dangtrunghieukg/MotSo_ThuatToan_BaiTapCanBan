//Liệt kê hoán vị của n phần tử từ 1 đến N;
#include <iostream>
#include <vector>
using namespace std;

// Hàm đệ quy để liệt kê các hoán vị
void permutations(int n, vector<int>& a, vector<bool>& used) {
    // Nếu đã đủ n phần tử trong hoán vị thì in ra
    if (a.size() == n) {
        for (int x : a) {
            cout << x << " ";
        }
        cout << endl;
        return;
    }
    // Liệt kê các phần tử còn lại trong hoán vị
    for (int i = 1; i <= n; i++) {
        if (!used[i]) {
            used[i] = true;
            a.push_back(i); //Thêm vào phần tử cuối
            permutations(n, a, used);
            a.pop_back(); // Xóa phần tử cuối
            used[i] = false;
        }
    }
}

int main() {
    int n;
    cout << "Nhap so n: ";
    cin >> n;

    vector<int> a;
    vector<bool> used(n + 1, false);

    cout << "Cac hoan vi cua " << n << " la: " << endl;
    permutations(n, a, used);

    return 0;
}
/*
Cách hoạt động của chương trình:

    Nhập vào số nguyên dương n từ bàn phím.
    Khởi tạo vector a rỗng để lưu các phần tử trong hoán vị, và vector used để đánh dấu các phần tử đã được sử dụng trong hoán vị.
    Gọi hàm permutations với tham số n, a, used.
    Hàm permutations thực hiện liệt kê các hoán vị của n bằng cách đệ quy. Nếu đã có đủ n phần tử trong hoán vị, in ra và kết thúc hàm. Nếu chưa đủ, thử thêm các phần tử còn lại vào hoán vị bằng cách đánh dấu các phần tử đã được sử dụng và sử dụng đệ quy để liệt kê tiếp các phần tử còn lại. Sau đó, xóa phần tử vừa thêm vào và bỏ đánh dấu để thử các phần tử khác.
    Kết thúc chương trình.


*/


/*
Tác giả: Thầy Đặng Trung Hiếu - Giáo viên dạy Toán trường THCS & THPT Long Thạnh - Giồng Riềng - Kiên Giang - Phone: 0939239628
Donate: Paypal:dangtrunghieuspt@gmail.com ; Sacombank: Dang Trung Hieu - TK: 070126079549
*/
