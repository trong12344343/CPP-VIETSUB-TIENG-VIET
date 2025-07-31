# CPP-VIETSUB-TIENG-VIET  
C++ VIETSUB FULL  
vietcpp.h – Thư viện Việt hóa C++ toàn diện  
Bản FULL hỗ trợ Unicode trên Windows và các nền tảng khác  
**Nếu dùng windows visual studio hoặc tương tự ghi thêm từ "windows" sau phần bắt đầu gạch xanh kệ nó**  
**nếu viết tiếng việt thì thêm L trước ""**  
Tác giả: Đỗ Đức Trọng  
| **Từ/Macro**           | **Mở rộng thành**                     | **Mô tả**                      | **Tương đương C++**      |
| ---------------------- | ------------------------------------- | ------------------------------ | ------------------------ |
| `bat_dau`              | `int main() {`                        | Bắt đầu hàm main               | `int main()`             |
| `ket_thuc`             | `return 0;`                           | Kết thúc hàm main              | `return 0;`              |
| `neu`                  | `if`                                  | Câu lệnh if                    | `if`                     |
| `thi`                  | `{`                                   | Mở khối lệnh của if            | `{`                      |
| `neu_khi`              | `} else if`                           | Câu lệnh else if               | `else if`                |
| `nguoc_lai`            | `} else {`                            | Câu lệnh else                  | `else`                   |
| `ket_thuc_dk`          | `}`                                   | Kết thúc khối điều kiện        | `}`                      |
| `thu`                  | `try`                                 | Câu lệnh thử                   | `try`                    |
| `bat_loi`              | `catch`                               | Câu lệnh bắt lỗi               | `catch`                  |
| `nem`                  | `throw`                               | Ném ngoại lệ                   | `throw`                  |
| `lap_for`              | `for`                                 | Vòng lặp for                   | `for`                    |
| `lap_while`            | `while`                               | Vòng lặp while                 | `while`                  |
| `lap_vo_tan`           | `while(true)`                         | Vòng lặp vô hạn                | `while (true)`           |
| `dung_lai`             | `break;`                              | Thoát vòng lặp                 | `break`                  |
| `tiep`                 | `continue;`                           | Tiếp tục vòng lặp              | `continue`               |
| `tai_lai`              | `continue;`                           | Tiếp tục vòng lặp              | `continue`               |
| `dung_lap`             | `break;`                              | Thoát vòng lặp                 | `break`                  |
| `xuat`                 | `wcout <<`                            | Xuất dữ liệu Unicode (Windows) | `wcout <<`               |
| `nhap`                 | `wcin >>`                             | Nhập dữ liệu Unicode (Windows) | `wcin >>`                |
| `xuong_dong`           | `endl`                                | Xuống dòng                     | `endl`                   |
| `so_nguyen`            | `int`                                 | Kiểu số nguyên                 | `int`                    |
| `so_thuc`              | `float`                               | Kiểu số thực                   | `float`                  |
| `so_kep`               | `double`                              | Kiểu số thực kép               | `double`                 |
| `ky_tu`                | `char`                                | Kiểu ký tự                     | `char`                   |
| `chuoi`                | `string`                              | Kiểu chuỗi                     | `std::string`            |
| `chuoi_rong_kieu`      | `wstring`                             | Chuỗi rộng hỗ trợ Unicode      | `std::wstring`           |
| `danh_sach`            | `vector`                              | Danh sách động                 | `std::vector`            |
| `danh_sach_kep`        | `deque`                               | Danh sách hai đầu              | `std::deque`             |
| `hang_doi`             | `queue`                               | Hàng đợi                       | `std::queue`             |
| `ngan_xep`             | `stack`                               | Ngăn xếp                       | `std::stack`             |
| `tap_hop`              | `set`                                 | Tập hợp duy nhất               | `std::set`               |
| `ban_do`               | `map`                                 | Bản đồ khóa-giá trị            | `std::map`               |
| `ban_do_khong_thu_tu`  | `unordered_map`                       | Bản đồ không thứ tự            | `std::unordered_map`     |
| `tap_hop_khong_thu_tu` | `unordered_set`                       | Tập hợp không thứ tự           | `std::unordered_set`     |
| `dung`                 | `true`                                | Giá trị đúng                   | `true`                   |
| `sai`                  | `false`                               | Giá trị sai                    | `false`                  |
| `can`                  | `sqrt`                                | Căn bậc hai                    | `std::sqrt`              |
| `mu`                   | `pow`                                 | Lũy thừa                       | `std::pow`               |
| `ngau_nhien`           | `rand`                                | Số ngẫu nhiên                  | `std::rand`              |
| `dat_hat`              | `srand`                               | Seed cho random                | `std::srand`             |
| `thoi_gian_cho_rand`   | `time(0)`                             | Thời gian làm seed             | `std::time(0)`           |
| `lam_tron`             | `round`                               | Làm tròn số                    | `std::round`             |
| `tuyet_doi`            | `abs`                                 | Giá trị tuyệt đối              | `std::abs`               |
| `tran`                 | `floor`                               | Làm tròn xuống                 | `std::floor`             |
| `tran_len`             | `ceil`                                | Làm tròn lên                   | `std::ceil`              |
| `pi`                   | `3.14159265358979323846`              | Hằng số pi                     | `3.14159265358979323846` |
| `la`                   | `==`                                  | So sánh bằng                   | `==`                     |
| `khac`                 | `!=`                                  | So sánh khác                   | `!=`                     |
| `lon_hon`              | `>`                                   | Lớn hơn                        | `>`                      |
| `nho_hon`              | `<`                                   | Nhỏ hơn                        | `<`                      |
| `lon_hon_bang`         | `>=`                                  | Lớn hơn hoặc bằng              | `>=`                     |
| `nho_hon_bang`         | `<=`                                  | Nhỏ hơn hoặc bằng              | `<=`                     |
| `va`                   | `&&`                                  | Toán tử AND                    | `&&`                     |
| `hoac`                 | <code>\|\|</code>                     | Toán tử OR                     | <code>\|\|</code>        |
| `khong`                | `!`                                   | Toán tử NOT                    | `!`                      |
| `tra_ve`               | `return`                              | Trả về giá trị                 | `return`                 |
| `kich_co`              | `.size()`                             | Kích thước container           | `.size()`                |
| `them`                 | `.push_back()`                        | Thêm phần tử vào danh sách     | `.push_back()`           |
| `xoa`                  | `.pop_back()`                         | Xóa phần tử cuối               | `.pop_back()`            |
| `chen`                 | `.insert()`                           | Chèn phần tử                   | `.insert()`              |
| `xoa_tai`              | `.erase()`                            | Xóa phần tử tại vị trí         | `.erase()`               |
| `rong`                 | `.empty()`                            | Kiểm tra rỗng                  | `.empty()`               |
| `sap_xep`              | `sort`                                | Sắp xếp danh sách              | `std::sort`              |
| `dao_nguoc`            | `reverse`                             | Đảo ngược thứ tự               | `std::reverse`           |
| `tim_kiem`             | `find`                                | Tìm phần tử                    | `std::find`              |
| `min_so`               | `min`                                 | Giá trị nhỏ nhất               | `std::min`               |
| `max_so`               | `max`                                 | Giá trị lớn nhất               | `std::max`               |
| `tao_con_tro`          | `kieu* ten = &bien`                   | Tạo con trỏ                    | `kieu* ten = &bien`      |
| `con_tro_toi`          | `*ten`                                | Truy cập qua con trỏ           | `*ten`                   |
| `tham_chieu_toi`       | `kieu& ten = bien`                    | Tạo tham chiếu                 | `kieu& ten = bien`       |
| `doc_file`             | `ifstream`                            | Đọc file                       | `std::ifstream`          |
| `ghi_file`             | `ofstream`                            | Ghi file                       | `std::ofstream`          |
| `dong_file`            | `.close()`                            | Đóng file                      | `.close()`               |
| `do_dai`               | `.length()`                           | Độ dài chuỗi                   | `.length()`              |
| `ghep`                 | `+`                                   | Ghép chuỗi                     | `+`                      |
| `cat`                  | `.substr(vị_trí, độ_dài)`             | Cắt chuỗi                      | `.substr()`              |
| `tim_chuoi`            | `.find()`                             | Tìm chuỗi                      | `.find()`                |
| `thay_the`             | `.replace(vị_trí, độ_dài, chuoi_moi)` | Thay thế chuỗi                 | `.replace()`             |
| `chuyen_chuoi_sang_so` | `stoi`                                | Chuyển chuỗi sang số           | `std::stoi`              |
| `chuyen_so_sang_chuoi` | `to_string`                           | Chuyển số sang chuỗi           | `std::to_string`         |
| `xau_sstream`          | `stringstream`                        | Chuỗi dòng                     | `std::stringstream`      |
