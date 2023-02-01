# Dãy số Fibonacci: F1 = 1, F2 = 1, F3 = F2 + F1, ... , Fn = Fn_1 + Fn_2, n>=3
def SoFiboThuK(k):
    if k >= 3:
        return SoFiboThuK(k-1)+SoFiboThuK(k-2)
    else:
        return 1

for x in range(1, 11):
    fn = SoFiboThuK(x)
    print("F"+str(x), "=", fn)






'''
Tác giả: Thầy Đặng Trung Hiếu - Giáo viên dạy Toán trường THCS & THPT Long Thạnh - Giồng Riềng - Kiên Giang - Phone: 0939239628
Donate: Paypal:dangtrunghieuspt@gmail.com ; Sacombank: Dang Trung Hieu - TK: 070126079549
'''