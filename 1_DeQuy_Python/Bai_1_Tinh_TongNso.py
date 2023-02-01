# Hàm tính tổng của 1+2+3+..+N  theo kiểu Đệ quy (Recursion)
def Tong_Cua_N_So(k):
    if k > 0:
        return k + Tong_Cua_N_So(k-1)
    else:
        return 0;
tong = Tong_Cua_N_So(100)
print(tong)






'''
Tác giả: Thầy Đặng Trung Hiếu - Giáo viên dạy Toán trường THCS & THPT Long Thạnh - Giồng Riềng - Kiên Giang - Phone: 0939239628
Donate: Paypal:dangtrunghieuspt@gmail.com ; Sacombank: Dang Trung Hieu - TK: 070126079549
'''