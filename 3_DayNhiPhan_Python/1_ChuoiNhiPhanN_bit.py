# Xóa màn hình cũ cho đẹp
import os
os.system('cls')

N = int(input("Nhập N = "))
lsN = []
for i in range(0, N+1):
    lsN.append(0)

# Xuất chuỗi nhị phân n bit
def XuatChuoiNhiPhan(lsX):
    global N
    for i in range(1, N+1):
        print(lsX[i], end='')
    print("")

# Liệt kê, truy lui
def LietKeChuoiNhiPhan(k):
    global N
    for i in range(0,2):
        lsN[k] = i
        if k == N:
            XuatChuoiNhiPhan(lsN)
        else:
            LietKeChuoiNhiPhan(k+1) # Đệ quy

LietKeChuoiNhiPhan(1)




'''
Tác giả: Thầy Đặng Trung Hiếu - Giáo viên dạy Toán trường THCS & THPT Long Thạnh - Giồng Riềng - Kiên Giang - Phone: 0939239628
Donate: Paypal:dangtrunghieuspt@gmail.com ; Sacombank: Dang Trung Hieu - TK: 070126079549
'''
