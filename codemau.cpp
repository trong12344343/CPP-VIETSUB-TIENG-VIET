#include "vietcpp.h"

bat_dau
windows // Bật Unicode nếu dùng Visual Studio (gạch xanh kệ nó 😄)

chuoi_tiengviet ten;
xuat L"Nhập tên của bạn: ";
doc_dong(wcin, ten);

xuat L"Xin chào, " << ten << xuong_dong;

ket_thuc
//nếu viết tiếng việt thì thêm L trước ""