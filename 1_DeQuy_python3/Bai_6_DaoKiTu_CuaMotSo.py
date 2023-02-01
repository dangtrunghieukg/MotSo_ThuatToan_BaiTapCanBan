# In đảo thứ tự các kí tự của một số ví dụ 123 -> 321; Chia phần nguyên là //
def InDaoNguocKiTu(k):
    if k != 0:
        print(k % 10, end='')
        InDaoNguocKiTu(k // 10)

InDaoNguocKiTu(7890);





'''
Tác giả: Thầy Đặng Trung Hiếu - Giáo viên dạy Toán trường THCS & THPT Long Thạnh - Giồng Riềng - Kiên Giang - Phone: 0939239628
Donate: Paypal:dangtrunghieuspt@gmail.com ; Sacombank: Dang Trung Hieu - TK: 070126079549
'''