#include <stdio.h>
#include <math.h>

int main(){
    int test_case;
    int T, num;
    double total;
    
    scanf("%d", &T);
    
    for(test_case = 1; test_case <= T; ++test_case){
        total = 0;
        for(int i = 0; i < 10; i++){
            scanf("%d", &num);
            total += num;
        }
        printf("#%d %d\n", test_case, (int)round(total / 10));
    }
    
	return 0;
}