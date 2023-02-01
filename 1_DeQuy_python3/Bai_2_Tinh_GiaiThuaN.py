# Hàm tính N giai thừa = 1x2x3x..xN theo kiểu Đệ quy (Recursion)
# Python có thể tính gia thừa số rất lớn !
def GiaiThuaN(n):
    if n > 1:
        return n*GiaiThuaN(n-1)
    else:
        return 1
gt = GiaiThuaN(100)
print(gt)






'''
Tác giả: Thầy Đặng Trung Hiếu - Giáo viên dạy Toán trường THCS & THPT Long Thạnh - Giồng Riềng - Kiên Giang - Phone: 0939239628
Donate: Paypal:dangtrunghieuspt@gmail.com ; Sacombank: Dang Trung Hieu - TK: 070126079549
'''