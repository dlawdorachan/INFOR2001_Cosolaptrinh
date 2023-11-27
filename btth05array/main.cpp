#include <iostream>
#include <fstream>

int main() {
    int age;

    // Nhập tuổi từ người dùng
    std::cout << "Nhap tuoi cua sinh vien: ";
    std::cin >> age;

    // Mở tệp để lưu trữ tuổi
    std::ofstream file("tuoi_sinhvien.txt");

    // Kiểm tra xem tệp có mở thành công hay không
    if (file.is_open()) {
        // Ghi tuổi vào tệp
        file << age;

        // Đóng tệp
        file.close();

        std::cout << "Tuoi đa duoc luu tru thanh cong trong tep." << std::endl;
    } else {
        std::cout << "Khong the mo tep đe luu tru tuoi." << std::endl;
    }

    return 0;
}