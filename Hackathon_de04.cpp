#include<stdio.h>
int main (){
	int arr[100];
	int size;
	int rows;
	int cols;
	int i,j;
	int choice;
	while(1){
		printf("\nMenu\n");
		printf("1. Nhap phan tu va gia tri cho mang.\n");
		printf("2. In ra gia tri cac phan tu trong mang theo dang (arr[0] = 1, arr[1] = 5,...)\n");
		printf("3. Dem so luong cac so hoan hao co trong mnag , biet so hoan hao la so co tong cac uoc bang chinh no\n");
		printf("4. Tim gia tri lon thu 2 trong mang , khong duoc sap xep mang\n");
		printf("5. Them mot phan tu vao vi tri ngau nhien trong  mang, phan tu moi them vao mang và vi tri them vao phai do nguoi dung nhap vao\n");
		printf("6. Xoa phan tu tai mot vi tri cu the\n");
		printf("7. Sap xep mang theo thu tu tang dan (Insertion Sort)\n");
		printf("8. Cho nguoi dung nhap vao mot phan tu, tim kiem xem phan tu do co ton tai trong mang hay khong (Binary search)\n");
		printf("9. Sap xep lai mang va hien thi ra toan bo phan tu co trong mang sao cho toan bo so chan dung truoc, so le dung sau\n");
		printf("10. Dao nguoc thu tu cua cac phan tu trong mang\n");
		printf("11. Thoat\n");
		printf("Nhap lua chon cua ban :");
		scanf("%d", &choice);
		switch(choice){
            case 1: //Nhap so phan tu can nhap va gia tri cac phan tu
                printf("Nhap so phan tu: ");
                scanf("%d", &size);
                if (size > 100) {
                    printf("Kich thuoc mang vuot qua gioi han!\n");
                    size = 0;
                    break;
                }
                for (int i = 0; i < size; i++) {
                    printf("Nhap phan tu thu %d: ", i + 1);
                    scanf("%d", &arr[i]);
                }
                break;
            case 2: //In ra gia tri cac phan tu trong mang
                printf("Cac phan tu cua mang la:\n");
                for (int i = 0; i < size; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            case 5: //Them mot phan tu moi vao mang
			{
                if (size >= 100){
                    printf("Mang da day , khong the them phan tu.\n");
                    break;
                }
                int value;
                printf("Nhap gia tri can them: ");
                scanf("%d", &value);
                arr[size] = value;
                size++;
                break;
            }
            case 6: //Xoa mot phan tu trong mang
			{
            	int pos;
            	printf("Nhap vi tri can xoa (tu 0 den %d): ", size - 1);
            	scanf("%d", &pos);
            	if (pos < 0 || pos >= size) {
                    printf("Vi tri khong hop le!\n");
                break;
            	}
            	for (int i = pos; i < size - 1; i++){
                arr[i] = arr[i + 1];
            	}
            	size--;
            	break;
            }
            case 7 : // Sap xep mang theo thu tu tang dan (Insertion Sort)
                for (int i = 0; i < size - 1; i++) {
                    for (int j = i + 1; j < size; j++) {
                        if (arr[i] > arr[j]) {
                            int temp = arr[i];
                            arr[i] = arr[j];
                            arr[j] = temp;
                        }
                    }
                }
                printf("Cac phan tu cua mang sau khi duoc sap xep lai la:\n");
                for (int i = 0; i < size; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            case 8 : //Cho nguoi dung nhap vao mot phan tu, tim kiem xem phan tu do co ton tai trong mang hay khong (Binary search)
            	{ 
                int target, found = 0;
                printf("Nhap vi tri can tim kiem: ");
                scanf("%d", &target);
                for (int i = 0; i < size; i++) {
                    if (arr[i] == target) {
                        printf("Phan tu %d nam tai vi tri index %d\n", target, i);
                        found = 1;
                    }
                }
                if (!found) {
                    printf("Khong tim phan tu %d trong mang.\n", target);
                }
                break;
                }
            case 11: //Thoat chuong trinh
            printf("Thoat chuong trinh");
            return 0;
			default:
                printf("Lua chon cua ban khong hop le!\n");
            }
	}
	return 0;
}
	
		


