# Liệt kê hoán vị của n phần tử từ 1 đến N;
# Trong Python, không có mảng, dùng list thay thế. Khởi tạo 2 list chưa có phần tử nào.
listDanhDau = []
listDayHoanVi = []
listABCD = ['']
N = int(input("Nhập N = "))

# Khởi tạo phần tử ban đầu cho 2 cái list
for x in range(0, N+1):
    listDanhDau.append(1)
    listDayHoanVi.append(0)
    listABCD.append(chr(65+x)) # Trong bảng mã ASCII thì 'A'=65

# Thủ tục xuất, vì N là biến toàn cục nên có từ khóa global
def XuatHoanVi():
    global N
    for i in range(1, N+1):
        #print(listDayHoanVi[i], end='')
        print(listABCD[listDayHoanVi[i]], end='')
    print("");

#Thuật toán quy lui, có đệ quy
def TimHoanVi(k):
    global N
    for i in range(1, N+1):
        if listDanhDau[i] == 1:
            listDayHoanVi[k] = i
            listDanhDau[i] = 0
            if k == N:
                XuatHoanVi()
            else:
                TimHoanVi(k+1)
            listDanhDau[i] = 1
TimHoanVi(1);

'''
Tác giả: Thầy Đặng Trung Hiếu - Giáo viên dạy Toán trường THCS & THPT Long Thạnh - Giồng Riềng - Kiên Giang - Phone: 0939239628
Donate: Paypal:dangtrunghieuspt@gmail.com ; Sacombank: Dang Trung Hieu - TK: 070126079549
'''


