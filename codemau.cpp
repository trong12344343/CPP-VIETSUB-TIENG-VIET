#include "vietcpp.h"

bat_dau
windows;

// === 1. Nhập/Xuất và Điều kiện ===
so_nguyen diem;
xuat << L"Nhập điểm (0-100): ";
nhap >> diem;

neu(diem lon_hon_bang 90) thi
xuat << L"Xuất sắc" << xuong_dong;
neu_khi(diem lon_hon_bang 80) thi
xuat << L"Giỏi" << xuong_dong;
neu_khi(diem lon_hon_bang 70) thi
xuat << L"Khá" << xuong_dong;
neu_khi(diem lon_hon_bang 50) thi
xuat << L"Trung bình" << xuong_dong;
nguoc_lai
xuat << L"Yếu" << xuong_dong;
ket_thuc_dk

// === 2. Vòng lặp ===
xuat << L"\nVòng lặp kiểm tra bắt đầu..." << xuong_dong;

lap_for(so_nguyen i = 1; i <= 3; i++) thi
xuat << L"\nLần thứ " << i << L":" << xuong_dong;

chuoi_tiengviet ten;
xuat << L"Nhập tên: ";
doc_dong(wcin, ten);

xuat << L"Xin chào, " << ten << L"!" << xuong_dong;
ket_thuc_dk

// === 3. Toán học và Ngẫu nhiên ===
dat_hat(thoi_gian_cho_rand);
so_nguyen ket_qua = (so_nguyen)(ngau_nhien() % 100 + 1);

xuat << L"\nSố ngẫu nhiên: " << ket_qua << xuong_dong;
neu(ket_qua lon_hon 50 va ket_qua nho_hon_bang 100) thi
xuat << L"Lớn" << xuong_dong;
nguoc_lai
xuat << L"Nhỏ" << xuong_dong;
ket_thuc_dk

// === 4. Con trỏ và Tham chiếu ===
so_nguyen gia_tri = 42;
tao_con_tro(so_nguyen, con_tro, gia_tri);
tham_chieu_toi(so_nguyen, tham_chieu, gia_tri);

xuat << L"\nGiá trị ban đầu: " << con_tro_toi(con_tro) << xuong_dong;
tham_chieu = 100;
xuat << L"Giá trị mới qua tham chiếu: " << con_tro_toi(con_tro) << xuong_dong;

// === 5. Chuỗi ===
chuoi_rong s = L"Tiếng Việt";
xuat << L"\nChuỗi: " << s << xuong_dong;

chuoi_rong s2 = s.cat(0, 6); 
xuat << L"Chuỗi con: " << s2 << xuong_dong;

ket_thuc
//Đây là code test không có ý nghĩa gì
