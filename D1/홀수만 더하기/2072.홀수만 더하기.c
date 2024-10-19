#include<stdio.h>

int main(){
    int test_case, total;
    int T;
    int num;
    
    scanf("%d", &T);
    
    for(test_case = 1; test_case <= T; ++test_case){
        total = 0;
        for(int i = 0; i < 10; i++){
            scanf("%d", &num);
            if(num % 2)
                total += num;
        }
        printf("#%d %d\n", test_case, total);
    }
    
	return 0;
}