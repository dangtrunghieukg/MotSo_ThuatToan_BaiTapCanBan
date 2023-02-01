#include <iostream>
using namespace std;

int GiaiThua(int N){
    if (N<0) return -1;
    else if (N==0) return 1;
    else {
        int ketQua=1;
        for(int i=1; i<=N; i++){
            ketQua *= i;
        }
        return ketQua;
    }
}
int ToHopCkn(int k, int n){
    int ketQua=1;
    for(int i=1; i<=k; i++){
        ketQua *= (n-(i-1));
    }
    ketQua = ketQua / GiaiThua(k);
    return ketQua;
}

//Thuật toán liệt kê Tổ hợp chập k của n phần tử
#define maxN  20
int x[maxN];

void XuatToHop(int arrA[], int n){
    for (int i = 1; i <= n; i++){
        cout << arrA[i] << " ";
    }
    cout << endl;
}


void LietKeToHop(int h, int k, int n){
	for (int i = x[h-1] + 1; i <= n - (k-h); i++){
		x[h] = i;
		if (h == k) XuatToHop(x, k);
		else {
			LietKeToHop(h+1, k, n); // Đệ quy
		}
	}
}

int main(){
    int n, k; // k <= n
    n = 8; k = 4;
    cout << "To hop: " << n << "C" << k << " = " << ToHopCkn(k, n) << endl;
	LietKeToHop(1, k, n);
    return 0;
}






/*
Tác giả: Thầy Đặng Trung Hiếu - Giáo viên dạy Toán trường THCS & THPT Long Thạnh - Giồng Riềng - Kiên Giang - Phone: 0939239628
Donate: Paypal:dangtrunghieuspt@gmail.com ; Sacombank: Dang Trung Hieu - TK: 070126079549
*/
