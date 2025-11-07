#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int i,j,size;
	int arr[100];
	int choice,select,find,add;
	int temp;
	int sum = 0,isLoop = 0;
	int result,valueInsert,indexInsert;
	int newArr;
	do{
		printf("-------------------------MENU------------------------\n");
		printf("1.Nhap so luong phan tu va gia tri\n");
		printf("2.In ra cac gia tri phan tu trong mang\n");
		printf("3.In ra cac so chinh phuong\n");
		printf("4.In ra va tinh gia tri trung binh trong mang\n");
		printf("5.Them phan tu vao cuoi mang\n");
		printf("6.Xoa phan tu tai vi tri cu the\n");
		printf("7.Sap xep gia tri giam dan\n");
		printf("8.Tim kiem mot phan tu\n");
		printf("9.In ra cac phan tu chi xuat hien mot lan\n");
		printf("10.Sap xep mang theo thu tu nguoc lai\n");
		printf("Lua chon cua ban: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Nhap vao so luong phan tu: ");
				scanf("%d",&size);
				if(size<=0||size>100){
					printf("So luong phan tu phai nang trong khoang tu 0 - 100\n");
				}
				for(i=0;i<size;i++){
					printf("arr[%d] = ",i);
					scanf("%d",&arr[i]);
				}
				printf("\n");
				break;
			case 2:
				printf("Cac gia tri phan tu trong mang la: \n");
				for(i=0;i<size;i++){
					printf("%d\t",arr[i]);
				}
				printf("\n");
				break;
			case 3:
				printf("Cac so chinh phuong: \n");
				for(i=0;i<size;i++){
					result = sqrt(arr[i]);
					if(pow(result,2)==arr[i]){
						printf("%d\t",arr[i]);
					}else{
						break;
					}
				}
				printf("\n");
				break;
			case 4:
				printf("Gia tri trung binh: \n");
				for(i=0;i<size;i++){
					sum+=arr[i];
				}
				printf("%d",sum/i);
				printf("\n");
				break;
			case 5:
				printf("Nhap gia tri cua phan tu can chen: ");
				scanf("%d",&valueInsert);
				int newNumbers[indexInsert+1];
		for(i=0; i< indexInsert; i++){
			if(i<size){
				newArr[i]=arr[i];
			}else{
				newArr[i] = 0;
			}
		}
		newNumbers[indexInsert] = valueInsert;
		printf("Mang moi sau khi chen phan tu vao la:\n");
		for(i=0; i<indexInsert+1; i++){
			printf("%d\t",newNumbers[i]);
		}
				break;
			case 6:
				printf("Nhap vao vi tri phan tu muon xoa: ");
				scanf("%d",&select);
				for(i=0;i<size;i++){
					if(select=arr[i]){
						arr[i]==arr[i+1];
					}
				}
				i--;
				printf("Da xoa thanh cong");
					printf("\n");
				break;
			case 7:
				printf("Sap xep mang giam dan: \n");
				for(i=0;i<size;i++){
					for(j=i;j>i;j--){
						if(arr[j]>arr[i]){
							temp = arr[j];
							arr[j] = arr[i];
							arr[i] = temp;
						}
					}
					printf("%d",arr[i]);
				}
					printf("\n");
				break;
			case 8:
				printf("Nhap vao phan tu muon tim kiem: ");
				scanf("%d",&find);
				for(i=0;i<size;i++){
					if(find==arr[i]){
						printf("Tim thay %d tai vi tri arr[%d] ",find,i);
						break;
					}
				}
					printf("\n");
				break;
			case 9:
				printf("Nhung so chi xuat hien mot lan trong mang la: \n");
				for(i=0;i<size;i++){
					if(arr[i]==arr[i++]){
						isLoop = 1;
					}
					if (isLoop){
					printf("%d",arr[i]);
				}
				}
					printf("\n");
				break;
			case 10: 
				printf("Mang duoc sap theo thu tu nguoc lai la: \n");
				for(i=0;i<size;i++){
					arr[i]=temp;
					arr[i]=arr[i++];
					arr[i++]=temp;
					printf("%d",arr[i]);
				}
					printf("\n");
				break;
			default:
				printf("Thanks for using");
					printf("\n");
				exit(0);
				break;
		}
}while(1);
}
