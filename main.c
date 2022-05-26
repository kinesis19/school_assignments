#include <stdio.h>
int score_sum(int kor, int eng, int math);
float score_avg(int kor, int eng, int math);
char score_text(float avg);
struct student{
	int stu_ary1[5];
	float avg;
	char stu_name[10];
	char rating[10];
}s1, s2, s3, s4, s5;
int main(){
	int i;
	for(i=1; i<=5; i++){
		printf("학번 : ");
		if(i==1){
			scanf("%d", &s1.stu_ary1[0]);
			printf("이름 : ");	
			scanf("%s", &s1.stu_name);
			printf("국어, 영어, 수학 점수 : ");
			scanf("%d %d %d", &s1.stu_ary1[1], &s1.stu_ary1[2], &s1.stu_ary1[3]);
		}else if(i==2){
			scanf("%d", &s2.stu_ary1[0]);
			printf("이름 : ");	
			scanf("%s", &s2.stu_name);
			printf("국어, 영어, 수학 점수 : ");
			scanf("%d %d %d", &s2.stu_ary1[1], &s2.stu_ary1[2], &s2.stu_ary1[3]);
		}else if(i==3){
			scanf("%d", &s3.stu_ary1[0]);
			printf("이름 : ");	
			scanf("%s", &s3.stu_name);
			printf("국어, 영어, 수학 점수 : ");
			scanf("%d %d %d", &s3.stu_ary1[1], &s3.stu_ary1[2], &s3.stu_ary1[3]);
		}else if(i==4){
			scanf("%d", &s4.stu_ary1[0]);
			printf("이름 : ");	
			scanf("%s", &s4.stu_name);
			printf("국어, 영어, 수학 점수 : ");
			scanf("%d %d %d", &s4.stu_ary1[1], &s4.stu_ary1[2], &s4.stu_ary1[3]);
		}else if(i==5){
			scanf("%d", &s5.stu_ary1[0]);
			printf("이름 : ");	
			scanf("%s", &s5.stu_name);
			printf("국어, 영어, 수학 점수 : ");
			scanf("%d %d %d", &s5.stu_ary1[1], &s5.stu_ary1[2], &s5.stu_ary1[3]);
		}
	}
	printf("#정렬 전 데이터...\n");
	printf("%d %s %d %d %d %d %.1f %c\n", s1.stu_ary1[0], s1.stu_name, s1.stu_ary1[1], s1.stu_ary1[2], s1.stu_ary1[3], score_sum(s1.stu_ary1[1], s1.stu_ary1[2], s1.stu_ary1[3]), score_avg(s1.stu_ary1[1], s1.stu_ary1[2], s1.stu_ary1[3]), score_text(score_avg(s1.stu_ary1[1], s1.stu_ary1[2], s1.stu_ary1[3])));
	printf("%d %s %d %d %d %d %.1f %c\n", s2.stu_ary1[0], s2.stu_name, s2.stu_ary1[1], s2.stu_ary1[2], s2.stu_ary1[3], score_sum(s2.stu_ary1[1], s2.stu_ary1[2], s2.stu_ary1[3]), score_avg(s2.stu_ary1[1], s2.stu_ary1[2], s2.stu_ary1[3]), score_text(score_avg(s2.stu_ary1[1], s2.stu_ary1[2], s2.stu_ary1[3])));
	printf("%d %s %d %d %d %d %.1f %c\n", s3.stu_ary1[0], s3.stu_name, s3.stu_ary1[1], s3.stu_ary1[2], s3.stu_ary1[3], score_sum(s3.stu_ary1[1], s3.stu_ary1[2], s3.stu_ary1[3]), score_avg(s3.stu_ary1[1], s3.stu_ary1[2], s3.stu_ary1[3]), score_text(score_avg(s3.stu_ary1[1], s3.stu_ary1[2], s3.stu_ary1[3])));
	printf("%d %s %d %d %d %d %.1f %c\n", s4.stu_ary1[0], s4.stu_name, s4.stu_ary1[1], s4.stu_ary1[2], s4.stu_ary1[3], score_sum(s4.stu_ary1[1], s4.stu_ary1[2], s4.stu_ary1[3]), score_avg(s4.stu_ary1[1], s4.stu_ary1[2], s4.stu_ary1[3]), score_text(score_avg(s4.stu_ary1[1], s4.stu_ary1[2], s4.stu_ary1[3])));
	printf("%d %s %d %d %d %d %.1f %c\n", s5.stu_ary1[0], s5.stu_name, s5.stu_ary1[1], s5.stu_ary1[2], s5.stu_ary1[3], score_sum(s5.stu_ary1[1], s5.stu_ary1[2], s5.stu_ary1[3]), score_avg(s5.stu_ary1[1], s5.stu_ary1[2], s5.stu_ary1[3]), score_text(score_avg(s5.stu_ary1[1], s5.stu_ary1[2], s5.stu_ary1[3])));
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
