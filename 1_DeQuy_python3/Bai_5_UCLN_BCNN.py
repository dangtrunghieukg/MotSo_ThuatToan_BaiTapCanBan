# Tìm ước chung lớn nhất của 2 số dương, theo kiểu Đệ quy (Recursion), chia phần nguyên //
def UCLN(a, b):
    if b == 0:
        return a
    return UCLN(b, a % b)
#Tìm bội chung nhỏ nhất của hai số dương
def BCNN(a, b):
    return (a*b) // UCLN(a, b)
x = UCLN(5627, 33431) # =331
y = BCNN(5627, 33431) # =568327

print(x)
print(y)





'''
Tác giả: Thầy Đặng Trung Hiếu - Giáo viên dạy Toán trường THCS & THPT Long Thạnh - Giồng Riềng - Kiên Giang - Phone: 0939239628
Donate: Paypal:dangtrunghieuspt@gmail.com ; Sacombank: Dang Trung Hieu - TK: 070126079549
'''