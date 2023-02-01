# Dãy số Tribonacci Tr1 = 1, Tr2 = 1, Tr3 = 2, Tr4 = Tr3+Tr2+Tr1, ..., Trn=Trn_1+Trn_2+Trn_3, n>=4
def SoTriBoThuK(k):
    if k >= 4:
        return SoTriBoThuK(k-1)+SoTriBoThuK(k-2)+SoTriBoThuK(k-3)
    elif k == 3:
        return 2
    else:
        return 1

for i in range(1, 11):
    fb = SoTriBoThuK(i);
    print("Tr"+str(i)+" =", fb)






'''
Tác giả: Thầy Đặng Trung Hiếu - Giáo viên dạy Toán trường THCS & THPT Long Thạnh - Giồng Riềng - Kiên Giang - Phone: 0939239628
Donate: Paypal:dangtrunghieuspt@gmail.com ; Sacombank: Dang Trung Hieu - TK: 070126079549
'''