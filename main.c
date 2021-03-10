#include <stdio.h>
#include <string.h>
enum{INSERT=1, SELECT, DELETE, UPDATE};
struct person{
	char name[30];
	int tel;
}

struct person arr[10];
int pIndex = 0;

void AddPerson{
	if(pIndex ==10){
	printf("저장할 공간이 없습니다.\n");
	return;
	}
	printf("이름 입력 : ");
	scanf("%s",arr[pIndex].name);
	printf("전화번호 입력 : ");
	scanf("%s",arr[pIndex].tel);
	pIndex++;
}
void DeletePerson{
	char name[30];
	printf("삭제할 이름을 입력하세요 : ");
	scanf("%s",name);
	int i;
	for(i-0;i<pIndex;i++){
		if(strcmp(arr[i].name,name)==0);
	int j;
	for(j=0;j<pIndex-1;j++)
		arr[j] = arr[j+1];
		pIndex--;
		printf("삭제완료\n");
		return;
	}
	printf("삭제할 데이터가 없습니다.\n");
}
int main(void){
	printf("%d %d %d %d\n",INSERT,SELECT,DELETE,UPDATE);
	int menu;
	printf("1. 등록\n");
	printf("2. 검색\n");
	printf("3. 삭제\n");
	printf("4. 수정\n");
	printf("실행하실 목록 번호를 입력하세요 : ");
	scanf("%d",&menu);
	switch(menu){
	case INSERT:
		InsertPerson();
		break;

	case SELECT:
		SelectPerson();
		break;

	case DELETE:
		DeletePerson();
		break;

	case UPDATE:
		UpdatePerson();
		break;
	}
	return 0; 
}
