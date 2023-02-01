
def GiaiThua(n):
    if n==0:
        return 1
    else:
        kq = 1
        for i in range(1, n+1):
            kq *= i
        return kq
def ToHopCkn(k, n):
    kq = 1
    for i in range(1, k+1):
        kq *= (n-(i-1));
    kq = kq // GiaiThua(k)
    return kq

# Tạo ra một list và khỏi tạo phần tử ban đầu cho nó
lsX = []
maxN = 20
for i in range(0, maxN+1):
    lsX.append(0)

# Xuất phần tử
def XuatToHop(X, n):
    for i in range(1, n+1):
        print(X[i], end='')
    print("")

#Thuật toán liệt kê Tổ hợp chập k của n phần tử
def LietKeToHop(h, k, n):
    for i in range(lsX[h-1]+1, n - (k-h)+1):
        lsX[h] = i
        if h == k:
            XuatToHop(lsX, k)
        else:
            LietKeToHop(h+1, k, n) # Đệ quy

n = 5
k = 3
print("Số tổ hợp: "+str(n)+"C"+str(k)+" =", ToHopCkn(k, n))
LietKeToHop(1, k, n)






'''
Tác giả: Thầy Đặng Trung Hiếu - Giáo viên dạy Toán trường THCS & THPT Long Thạnh - Giồng Riềng - Kiên Giang - Phone: 0939239628
Donate: Paypal:dangtrunghieuspt@gmail.com ; Sacombank: Dang Trung Hieu - TK: 070126079549
'''
