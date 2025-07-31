// vietcpp.h – Thư viện Việt hóa C++ toàn diện
// Bản FULL hỗ trợ Unicode trên Windows và các nền tảng khác
// code này chưa bao gồm thư viện đồ họa
// Tác giả: Đỗ Đức Trọng


#ifndef VIETCPP_H
#define VIETCPP_H

// === Nhận diện hệ điều hành để bật Unicode ===
#ifdef _WIN32
#include <io.h>
#include <fcntl.h>
#define windows do { _setmode(_fileno(stdout), _O_U16TEXT); _setmode(_fileno(stdin), _O_U16TEXT); } while(0)
#define xuat xuat_unicode
#define nhap nhap_unicode
#define chuoi_tiengviet chuoi_unicode
#define doc_dong doc_dong_unicode
#else
#include <locale>
#define windows std::setlocale(LC_ALL, "en_US.UTF-8")
#define xuat cout<<
#define nhap cin>>
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
#include <filesystem>

using namespace std;

// === Hàm chính ===
#define bat_dau int main() {
#define ket_thuc return 0; }

// === Câu lệnh điều kiện ===
#define neu if
#define thi {
#define nguoc_lai } else {
#define ket_thuc_dk }
#define neu_khi } else if
#define thu try
#define bat_loi catch
#define nem throw

// === Vòng lặp ===
#define lap_while while
#define lap_for for
#define lap_vo_tan while(true)
#define dung_lai break
#define tiep continue

// === Xuất/Nhập thường ===
#define in xuat // Sửa để sử dụng xuat thay vì cout<<
#define doc nhap // Sửa để sử dụng nhap thay vì cin>>
#define xuong_dong endl

// === Kiểu dữ liệu ===
#define so_nguyen int
#define so_thuc float
#define so_kep double
#define ky_tu char
#define chuoi string
#define chuoi_rong_kieu wstring // Đổi tên từ chuoi_rong để tránh nhầm lẫn
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
#define tu_dong auto
#define hang_so constexpr // Thêm macro cho constexpr

// === Toán học ===
#define can sqrt
#define mu pow
#define lam_tron round
#define tuyet_doi abs
#define tran floor
#define tran_len ceil
#define pi 3.14159265358979323846

// === Ngẫu nhiên ===
#define ngau_nhien rand // Giữ cho tương thích ngược
#define dat_hat srand
#define thoi_gian_cho_rand time(0)
#define may_ngau_nhien mt19937 // Thêm hỗ trợ <random>
#define ngau_nhien_thoi_gian mt19937(chrono::steady_clock::now().time_since_epoch().count())
#define phan_phoi_so_nguyen uniform_int_distribution
#define phan_phoi_so_thuc uniform_real_distribution

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
#define kich_co size
#define them push_back
#define xoa pop_back
#define chen insert
#define xoa_tai erase
#define rong empty
#define tai_lai continue
#define dung_lap break
#define sap_xep sort
#define dao_nguoc reverse
#define tim_kiem find
#define min_so min
#define max_so max

// === Con trỏ và tham chiếu ===
#define tao_con_tro(kieu, ten, bien) kieu* ten = &bien
#define con_tro_toi(ten) *ten
#define tham_chieu_toi(kieu, ten, bien) kieu& ten = bien

// === Tệp tin ===
#define doc_file ifstream
#define ghi_file ofstream
#define dong_file close
#define da_mo is_open // Thêm để kiểm tra tệp
#define loi fail // Thêm để kiểm tra lỗi tệp

// === Hệ thống tệp (C++17) ===
#define he_thong_tep filesystem
#define duong_dan path
#define ton_tai exists

// === Chuỗi ===
#define do_dai length
#define ghep +
#define cat substr
#define tim_chuoi find
#define thay_the replace
#define chuyen_chuoi_sang_so stoi
#define chuyen_so_sang_chuoi to_string
#define xau_sstream stringstream

// === Unicode (chỉ dùng cho Windows) ===
#define xuat_unicode wcout<<
#define nhap_unicode wcin>>
#define chuoi_unicode wstring
#define doc_dong_unicode getline

#endif
