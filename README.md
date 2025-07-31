# CPP-VIETSUB-TIENG-VIET
C++ VIETSUB FULL
vietcpp.h – Thư viện Việt hóa C++ toàn diện
Bản FULL hỗ trợ Unicode trên Windows và các nền tảng khác
**Nếu dùng windows visual studio hoặc tương tự ghi thêm từ "windows" sau phần bắt đầu gạch xanh kệ nó**
**nếu viết tiếng việt thì thêm L trước ""**
Tác giả: Đỗ Đức Trọng
Giải thích các từ khóa trong VietCPP
| Từ khóa / Macro              | Ý nghĩa / Tương đương trong C++ | Mô tả ngắn gọn                             
| ---------------------------- | ------------------------------- | ------------------------------------------ | 
| **bat_dau**                  | int main() {                    | Bắt đầu hàm chính                          | 
| **ket_thuc**                 | return 0; }                     | Kết thúc hàm main và chương trình          |       
| **neu**                      | if                              | Câu điều kiện                              | 
| **thi**                      | {                               | Mở khối lệnh                               |  
| **nguoc_lai**                | } else {                        | Ngược lại (else)                           | 
| **ket_thuc_if**              | }                               | Kết thúc khối if                           |   
| **lap_for**                  | for                             | Vòng lặp for                               |   
| **lap_while**                | while                           | Vòng lặp while                             |  
| **lap_vo_tan**               | while(true)                     | Vòng lặp vô tận                            |    
| **dung**                     | break;                          | Dừng vòng lặp hoặc switch                  |   
| **tiep**                     | continue;                       | Bỏ qua vòng lặp hiện tại, tiếp vòng sau    |    
| **in**                       | cout <<                         | Xuất dữ liệu ra màn hình                   |   
| **doc**                      | cin >>                          | Nhập dữ liệu từ bàn phím                   |   
| **xuong_dong**               | << endl                         | Xuống dòng                                 |    
| **dung_dong**                | endl                            | Kết thúc dòng                              |   
| **so_nguyen**                | int                             | Kiểu số nguyên                             |   
| **so_thuc**                  | float                           | Kiểu số thực đơn                           |   
| **so_kep**                   | double                          | Kiểu số thực kép                           |   
| **ky_tu**                    | char                            | Kiểu ký tự                                 |    
| **chuoi**                    | string                          | Chuỗi ký tự                                |    
| **danh_sach**                | vectoe                          | Danh sách (vector STL)                     | 
| **danh_sach_kep**            | deque                           | Danh sách kép (deque STL)                  | 
| **hang_doi**                 | queue                           | Hàng đợi (queue STL)                       |    
| **ngan_xep**                 | stack                           | Ngăn xếp (stack STL)                       |  
| **tap_hop**                  | set                             | Tập hợp (set STL)                          |   
| **ban_do**                   | map                             | Bản đồ (map STL)                           |   
| **ban_do_khong_thu_tu**      | unordered_map                   | Bản đồ không thứ tự (hash map)             |   
| **tap_hop_khong_thu_tu**     | unordered_set                   | Tập hợp không thứ tự (hash set)            |   
| **dung**                     | true                            | Giá trị đúng                               |    
| **sai**                      | false                           | Giá trị sai                                |   
| **can**                      | sqrt                            | Căn bậc hai                                |    
| **mu**                       | pow                             | Lũy thừa                                   |   
| **ngau_nhien**               | rand                            | Số ngẫu nhiên                              |    
| **dat_hat**                  | srand                           | Khởi tạo hạt ngẫu nhiên                    |    
| **thoi_gian_cho_rand**       | time(0)                         | Thời gian hiện tại dùng làm hạt ngẫu nhiên |    
| **lam_tron**                 | round                           | Làm tròn số                                |    
| **tuyet_doi**                | abs                             | Giá trị tuyệt đối                          |    
| **tran**                     | floor                           | Làm tròn xuống                             |    
| **tran_len**                 | ceil                            | Làm tròn lên                               |   
| **pi**                       | 3.14159265358979323846          | Hằng số pi                                 |    
| **la**                       | ==                              | So sánh bằng                               |   
| **khac**                     | !=                              | So sánh khác                               |  
| **lon_hon**                  | >                               | Lớn hơn                                    |    
| **nho_hon**                  | <                               | Nhỏ hơn                                    |    
| **lon_hon_bang**             | >=                              | Lớn hơn hoặc bằng                          |   
| **nho_hon_bang**             | <=                              | Nhỏ hơn hoặc bằng                          |   
| **va**                       | &&                              | Toán tử AND                                |    
| **hoac**                     | \                               | Toán tử OR                                 |         
| **khong**                    | !                               | Phủ định (NOT)                             |    
| **tra_ve**                   | return                          | Trả về                                     |   
| **kich_co**                  | .size()                         | Kích thước                                 |    
| **them**                     | .push_back()                    | Thêm phần tử vào cuối                      |   
| **xoa**                      | .pop_back()                     | Xóa phần tử cuối                           |    
| **chen**                     | .insert()                       | Chèn phần tử                               |    
| **xoa_tai**                  | .erase()                        | Xóa phần tử tại vị trí                     |  
| **rong**                     | .empty()                        | Kiểm tra rỗng                              |    
| **tai_lai**                  | continue                        | Tiếp tục vòng lặp                          |    
| **dung_lap**                 | break                           | Dừng vòng lặp                              |    
| **sap_xep**                  | sort()                          | Sắp xếp                                    |   
| **dao_nguoc**                | reverse()                       | Đảo ngược                                  |    
| **tim_kiem**                 | find()                          | Tìm kiếm                                   |    
| **min_so**                   | min()                           | Giá trị nhỏ nhất                           |   
| **max_so**                   | max()                           | Giá trị lớn nhất                           |    
| **doc_file**                 | ifstream                        | Đọc file                                   |    
| **ghi_file**                 | ofstream                        | Ghi file                                   |    
| **dong_file**                | .close()                        | Đóng file                                  |   
| **do_dai**                   | .length()                       | Độ dài chuỗi                               |    
| **ghep**                     | +                               | Nối chuỗi                                  |   
| **cat**                      | .substr()                       | Cắt chuỗi                                  |    
| **tim_chuoi**                | .find()                         | Tìm chuỗi                                  |  
| **thay_the**                 | .replace()                      | Thay thế chuỗi                             |    
| **chuyen_chuoi_sang_so**     | stoi()                          | Chuyển chuỗi sang số nguyên                |    
| **chuyen_so_sang_chuoi**     | to_string()                     | Chuyển số sang chuỗi                       |    
| **xau_sstream**              | stringstream                    | Đối tượng xử lý chuỗi                      |    
