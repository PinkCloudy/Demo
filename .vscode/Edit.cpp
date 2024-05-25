#include <stdio.h>
#include <string.h>

// Định nghĩa cấu trúc cho một loại thuốc
struct Medicine {
    char name[50];
    float price;
    int quantity;
};

// Hàm để cập nhật thông tin về một loại thuốc
void updateMedicine(struct Medicine *medicines, int numMedicines, const char *nameToUpdate) {
    float newPrice;
    int newQuantity;

    // Nhập giá mới từ người dùng
    printf("Nhập giá mới cho %s: ", nameToUpdate);
    scanf("%f", &newPrice);

    // Nhập số lượng mới từ người dùng
    printf("Nhập số lượng mới cho %s: ", nameToUpdate);
    scanf("%d", &newQuantity);

    for (int i = 0; i < numMedicines; ++i) {
        if (strcmp(medicines[i].name, nameToUpdate) == 0) {
            medicines[i].price = newPrice;
            medicines[i].quantity = newQuantity;
            printf("Thông tin thuốc đã được cập nhật:\nTên: %s\nGiá: %.2f\nSố lượng: %d\n", medicines[i].name, medicines[i].price, medicines[i].quantity);
            return; // Kết thúc hàm sau khi cập nhật
        }
    }
    printf("Không tìm thấy thuốc có tên \"%s\" trong hệ thống.\n", nameToUpdate);
}

int main() {
    // Khởi tạo một số thuốc mẫu
    struct Medicine medicines[3] = {
        {"Paracetamol", 5.5, 100},
        {"Amoxicillin", 7.2, 50},
        {"Loratadine", 3.8, 75}
    };

    int numMedicines = 3;

    // Hiển thị thông tin ban đầu của các loại thuốc
    printf("Thông tin thuốc ban đầu:\n");
    for (int i = 0; i < numMedicines; ++i) {
        printf("Tên: %s, Giá: %.2f, Số lượng: %d\n", medicines[i].name, medicines[i].price, medicines[i].quantity);
    }

    // Cập nhật thông tin của một loại thuốc
    char nameToUpdate[50];
    printf("\nNhập tên thuốc cần cập nhật: ");
    scanf("%s", nameToUpdate);
    updateMedicine(medicines, numMedicines, nameToUpdate);

    // Hiển thị thông tin sau khi cập nhật
    printf("\nThông tin thuốc sau khi cập nhật:\n");
    for (int i = 0; i < numMedicines; ++i) {
        printf("Tên: %s, Giá: %.2f, Số lượng: %d\n", medicines[i].name, medicines[i].price, medicines[i].quantity);
    }

    return 0;
}
