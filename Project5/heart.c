#include<stdio.h>
#include<time.h>
//메뉴출력
//하트출력
void menu() {
	printf("랜덤함수로 하트를 그리는 프로그램\n");
	printf("1 프로그램 실행\n");
	printf("2 프로그램 종료\n");
}
void heart() {
	//하트 찾기 사용자 정의 함수 : 
	//2차원 배열(10 X 10), srand(), rand(), time() 함수 사용
	//하트 비중
	//하트 비중 : 난수 0~99를 생성하여 20% 비중으로 하트 설정
	//그외는 별로 그린다.
	int board[10][10] = { 0 };
	srand((unsigned)time(NULL));
	for (int x = 0; x < 10; x++) {
		for (int y = 0; y < 10; y++) {
			if (rand() % 100 < 20) //20%의 비중으로 하트를 그린다
				printf("\t♡"); // 한글 ㅁ + 한자
			else printf("\t☆");
		}
		printf("\n");
	}
}
main() {
	int op;
	//무한 반복문, switch문, 키보드로 번호 선택
	while (1) {
		menu();
		printf("번호를 선택하세요 : ");
		scanf("%d", &op);
		switch (op) {
		case 1:
			heart();
			break;
		case  2:
			printf("프로그램 종료\n");
			exit(0); //프로그램 종료
		default:
			printf("입력 오류\n");
			break;
		}
	}
	system("pause");
}