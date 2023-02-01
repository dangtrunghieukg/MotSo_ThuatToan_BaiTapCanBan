# Đổi số tự nhiên N từ cơ số 10 sang số nhị phân
def ThapPhanSangNhiPhan(k):
    if k > 0 :
        ThapPhanSangNhiPhan(k//2)
        print(k%2, end='')

ThapPhanSangNhiPhan(10)




'''
Tác giả: Thầy Đặng Trung Hiếu - Giáo viên dạy Toán trường THCS & THPT Long Thạnh - Giồng Riềng - Kiên Giang - Phone: 0939239628
Donate: Paypal:dangtrunghieuspt@gmail.com ; Sacombank: Dang Trung Hieu - TK: 070126079549
'''