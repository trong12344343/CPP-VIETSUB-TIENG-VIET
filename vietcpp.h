// vietcpp.h – Thư viện Việt hóa C++ toàn diện
// Bản FULL hỗ trợ Unicode trên Windows và các nền tảng khác
// nếu dùng windows visual studio hoặc tương tự ghi thêm từ "windows" sau phần bắt đầu gạch xanh kệ nó
// tác giả: Đỗ Đức Trọng

#ifndef VIETCPP_H
#define VIETCPP_H

// === Nhận diện hệ điều hành để bật Unicode ===
#ifdef _WIN32
#include <io.h>
#include <fcntl.h>
#define windows _setmode(_fileno(stdout), _O_U16TEXT);  _setmode(_fileno(stdin), _O_U16TEXT);
#define xuat xuat_unicode
#define nhap nhap_unicode
#define chuoi_tiengviet chuoi_unicode
#define doc_dong doc_dong_unicode
#else
#define windows
#define xuat cout << 
#define nhap cin >>
#define chuoi_tiengviet string
#define doc_dong getline
#endif

// === Thư viện chuẩn ===
#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <deque>
#include <list>
#include <unordered_map>
#include <unordered_set>
#include <sstream>
#include <iomanip>
#include <fstream>
#include <limits>
#include <numeric>
#include <functional>
#include <tuple>
#include <bitset>
#include <random>
#include <chrono>


using namespace std;

// === Hàm chính ===
#define bat_dau int main() {
#define ket_thuc return 0; }

// === Câu lệnh điều kiện ===
#define neu if
#define thi {
#define nguoc_lai } else {
#define ket_thuc_if }

// === Vòng lặp ===
#define lap_while while
#define lap_for for
#define lap_vo_tan while(true)
#define dung_lai break;
#define tiep continue;

// === Xuất/Nhập thường ===
#define in cout <<
#define doc cin >>
#define xuong_dong endl

// === Kiểu dữ liệu ===
#define so_nguyen int
#define so_thuc float
#define so_kep double
#define ky_tu char
#define chuoi string
#define chuoi_rong wstring
#define danh_sach vector
#define danh_sach_kep deque
#define hang_doi queue
#define ngan_xep stack
#define tap_hop set
#define ban_do map
#define ban_do_khong_thu_tu unordered_map
#define tap_hop_khong_thu_tu unordered_set
#define dung true
#define sai false

// === Toán học ===
#define can sqrt
#define mu pow
#define ngau_nhien rand
#define dat_hat srand
#define thoi_gian_cho_rand time(0)
#define lam_tron round
#define tuyet_doi abs
#define tran floor
#define tran_len ceil
#define pi 3.14159265358979323846

// === Toán tử so sánh và logic ===
#define la ==
#define khac !=
#define lon_hon >
#define nho_hon <
#define lon_hon_bang >=
#define nho_hon_bang <=
#define va &&
#define hoac ||
#define khong !

// === Hàm tiện ích ===
#define tra_ve return
#define kich_co size()
#define them push_back
#define xoa pop_back
#define chen insert
#define xoa_tai erase
#define rong empty()
#define tai_lai continue
#define dung_lap break
#define sap_xep sort
#define dao_nguoc reverse
#define tim_kiem find
#define min_so min
#define max_so max

// === Tệp tin ===
#define doc_file ifstream
#define ghi_file ofstream
#define dong_file close

// === Chuỗi ===
#define do_dai length()
#define ghep +
#define cat substr
#define tim_chuoi find
#define thay_the replace
#define chuyen_chuoi_sang_so stoi
#define chuyen_so_sang_chuoi to_string
#define xau_sstream stringstream

// === Unicode (chỉ dùng cho Windows) ===
#define xuat_unicode wcout <<
#define nhap_unicode wcin  >>
#define chuoi_unicode wstring
#define doc_dong_unicode getline

#endif
