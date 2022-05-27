#include <stdio.h>

int score_sum(int kor, int eng, int math);
float score_avg(int kor, int eng, int math);
char score_text(float avg);

struct student{
	int stu_num;
	char stu_name[10];
	int kor; 
	int eng;
	int math;
	int sum;
	float avg;
	char rating[10];
	
};
//학생 구조체 변수 생성 
struct student s1;
struct student s2;
struct student s3;
struct student s4;
struct student s5;

int main(){
	int i;
	//씬韜 
	for(i=1; i<=5; i++){
		printf("학번 : ");
		if(i==1){
			scanf("%d", &s1.stu_num);	
		}else if(i==2){
			scanf("%d", &s2.stu_num);
		}else if(i==3){
			scanf("%d", &s3.stu_num);
		}else if(i==4){
			scanf("%d", &s4.stu_num);
		}else if(i==5){
			scanf("%d", &s5.stu_num);
		}
		printf("이름 : ");
		if(i==1){
			scanf("%s", &s1.stu_name);
		}else if(i==2){
			scanf("%s", &s2.stu_name);
		}else if(i==3){
			scanf("%s", &s3.stu_name);
		}else if(i==4){
			scanf("%s", &s4.stu_name);
		}else if(i==5){
			scanf("%s", &s5.stu_name);
		}
		
		printf("국어, 영어, 수학 점수 : ");
		if(i==1){
			scanf("%d %d %d", &s1.kor, &s1.eng, &s1.math);	
		}else if(i==2){
			scanf("%d %d %d", &s2.kor, &s2.eng, &s2.math);
		}else if(i==3){
			scanf("%d %d %d", &s3.kor, &s3.eng, &s3.math);
		}else if(i==4){
			scanf("%d %d %d", &s4.kor, &s4.eng, &s4.math);
		}else if(i==5){
			scanf("%d %d %d", &s5.kor, &s5.eng, &s5.math);
		}
		printf("\n");
	}
	for(i=1;i<=5;i++){
		if(i == 1){
			s1.sum = score_sum(s1.kor, s1.eng, s1.math);
			s1.avg = score_avg(s1.kor, s1.eng, s1.math);
			s1.rating[0] = score_text(s1.avg);
		}else if(i == 2){
			s2.sum = score_sum(s2.kor, s2.eng, s2.math);
			s2.avg = score_avg(s2.kor, s2.eng, s2.math);
			s2.rating[0] = score_text(s2.avg);
		}else if(i == 3){
			s3.sum = score_sum(s3.kor, s3.eng, s3.math);
			s3.avg = score_avg(s3.kor, s3.eng, s3.math);
			s3.rating[0] = score_text(s3.avg);
		}else if(i == 4){
			s4.sum = score_sum(s4.kor, s4.eng, s4.math);
			s4.avg = score_avg(s4.kor, s4.eng, s4.math);
			s4.rating[0] = score_text(s4.avg);
		}else if(i == 5){
			s5.sum = score_sum(s5.kor, s5.eng, s5.math);
			s5.avg = score_avg(s5.kor, s5.eng, s5.math);
			s5.rating[0] = score_text(s5.avg);
		}
	}
	//1차 출력 
	printf("#정렬 전 데이터...\n");
	
	printf("%d %s %d %d %d %d %.1f %c\n", s1.stu_num, s1.stu_name, s1.kor, s1.eng, s1.math, s1.sum, s1.avg, s1.rating[0]);
	printf("%d %s %d %d %d %d %.1f %c\n", s2.stu_num, s2.stu_name, s2.kor, s2.eng, s2.math, s2.sum, s2.avg, s2.rating[0]);
	printf("%d %s %d %d %d %d %.1f %c\n", s3.stu_num, s3.stu_name, s3.kor, s3.eng, s3.math, s3.sum, s3.avg, s3.rating[0]);
	printf("%d %s %d %d %d %d %.1f %c\n", s4.stu_num, s4.stu_name, s4.kor, s4.eng, s4.math, s4.sum, s4.avg, s4.rating[0]);
	printf("%d %s %d %d %d %d %.1f %c\n", s5.stu_num, s5.stu_name, s5.kor, s5.eng, s5.math, s5.sum, s5.avg, s5.rating[0]);
	
	return 0;
}

int score_sum(int kor, int eng, int math){
	return kor + eng + math;
}
float score_avg(int kor, int eng, int math){
	return (float)(kor + eng + math) / 3;
}
char score_text(float avg){
	if(avg>=90){
		return 'A';
	}else if(avg>=80){
		return 'B';
	}else if(avg>=70){
		return 'C';
	}else{
		return 'F';
	}
}
