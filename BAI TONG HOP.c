//bai tap tong hop 

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void function1();
void function2();
void function3();
void function4();
void function5();

int main(){
	int choice;
	
	while(1){
	printf ("+---Chuong trinh quan ly danh sach so nguyen---+\n");
	printf ("|---------------------MENU---------------------|\n");
	printf ("|1. Khoi tao mang ban dau                      |\n");
	printf ("|2. Hien thi danh sach phan tu                 |\n");
	printf ("|3. Chen them 1 so vao vo tri nhap vao         |\n");
	printf ("|4. Xoa theo vi tri                            |\n");
	printf ("|5. Cap nhat gia tri theo vi tri               |\n");
	printf ("|6. Thoat chuong trinh                         |\n");
	printf ("+----------------------------------------------+\n");
	printf ("----------------------####----------------------\n");
	printf ("==> Moi ban nhap chuc nang: ");
	scanf ("%d", &choice);
	
	switch(choice){
		case 1:{
			function1();
			break;
		}
		case 2:{
			function2();
			break;
		}
		case 3:{
			function3();
			break;
		}
		case 4:{
			function4();
			break;
		}
		case 5:{
			function5();
			break;
		}
		case 6:{
			printf ("Thoat chuong trinh \n");
			return 0;
			break;
		}
		default:{
			printf ("Lua chon khong hop le. Vui long chon lai \n");
			break;
		}
	}
	}
	return 0;
}

void function1(){
	int n;
	int arr[n];
	printf ("----------------------#01#----------------------\n");
 	printf ("Nhap so luong phan tu can khoi tao: ");
 	scanf ("%d", &n);
 	
 	for (int i = 0; i<n; i++){
 		printf ("Nhap phan tu thu arr[%d]: ");
 		scanf ("%d", &arr[i]);
	}
	
	printf ("<<---- Nhap thanh cong %d phan tu cua mang---->>\n");
	printf ("----------------------####----------------------\n");
 }
 
void function2(){
	int n;
	int arr[n];
	
	printf ("----------------------#02#----------------------\n");
 	printf ("--------DANH SACH CAC PHAN TU TRONG MANG--------\n");
 	printf ("[ \n");
 	
 	for (int i = 0; i<n; i++){
 		printf ("%d", arr[i]);
	}
	
	printf (" ]\n");
	printf ("----------------------####----------------------\n");
}

void function3(){
	int n;
	int arr[n];
	int pos;
	int value;
	
	printf ("----------------------#03#----------------------\n");
	printf ("Nhap vi tri can them phan tu: ");
	scanf ("%d", &pos);
	
	if (pos < 0||pos > n){
		printf ("Vi tri khong hop le \n");
		return;
	}
	
	printf ("Nhap gia tri can them tai vi tri %d: ", pos);
	scanf ("%d", &value);
	
	for (int i = 0; i>pos; i--){
		arr[i]=arr[i-1];
	}
	arr[pos]=value;
	n++;
	
	printf ("<<--------------THEM THANH CONG--------------->>\n");
	printf ("----------------------####----------------------\n");
}

void function4(){
	int n;
	int arr[n];
	int pos;
	char confirm;
	
	printf ("----------------------#04#----------------------\n");
	printf ("Nhap vao vi tri can xoa phan tu: ");
	scanf ("%d", &pos);
	
	if (pos < 0||pos > n){
		printf ("Vi tri khong hop le \n");
		return;
	}
	
	printf ("Ban co chac chan muon xoa phan tu nay khong? (Y/N)");
	scanf (" %c", &confirm);
	
	if (confirm == 'Y'||confirm == 'y'){
		for (int i = pos; i<n-1;i++){
			arr[i]=arr[i+1];
		}
		n--;
		printf ("<<----------DA XOA THANH CONG PHAN TU--------->>\n");
		printf ("----------------------####----------------------\n");
	}else{
		printf ("Huy xoa phan tu \n");
	}
}

void function5(){
	int n;
	int arr[n];
	int pos;
	int value;
	
	printf ("----------------------#05#----------------------\n");
	printf ("Nhap vao vi tri phan tu can cap nhat: ");
	scanf ("%d", &pos);
	
	if (pos < 0||pos > n){
		printf ("Vi tri khong hop le \n");
		return;
	}
	
	printf ("Nhap vao gia tri moi (gia tri cu(%d)): ", arr[pos]);
	scanf ("%d", &value);
	arr[pos]=value;
	printf ("<<-------DA CAP NHAT THANH CONG PHAN TU------->>\n");
	printf ("----------------------####----------------------\n");
}
