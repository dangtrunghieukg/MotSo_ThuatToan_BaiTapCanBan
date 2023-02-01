//Liệt kê hoán vị của n phần tử từ 1 đến N;
#include <iostream>
using namespace std;

#define MAX 1001
bool arrDanhDau[MAX]; //Mảng đánh dấu true = chọn, false = không chọn
int arrDayHoanVi[MAX]; //Mảng lưu trữ phần tử trong dãy hoán vị
int N;

void XuatHoanVi(){
    for(int i=1; i<=N; i++){
        cout << arrDayHoanVi[i];
    }
    cout << endl;
}

//Thuật toán quy lui, có đệ quy
void TimHoanVi(int k){
    for(int i=1; i<=N; i++){
        if(arrDanhDau[i]==true){
            arrDayHoanVi[k] = i;
            arrDanhDau[i] = false; //Đánh dấu phần tử i không chọn nữa
            if(k==N){
                XuatHoanVi();
            }else{
                TimHoanVi(k+1); //Đệ quy
            }
            arrDanhDau[i] = true; //
        }
    }
}

int main(){
    N = 4;
    //Đánh dấu tất cả các phần tử ban đầu đều sẵn sàng được chọn = true
    for(int i=1; i<=N; i++)
        arrDanhDau[i] = true;
    TimHoanVi(1);
    return 0;
}





/*
Tác giả: Thầy Đặng Trung Hiếu - Giáo viên dạy Toán trường THCS & THPT Long Thạnh - Giồng Riềng - Kiên Giang - Phone: 0939239628
Donate: Paypal:dangtrunghieuspt@gmail.com ; Sacombank: Dang Trung Hieu - TK: 070126079549
*/