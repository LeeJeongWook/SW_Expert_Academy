#include <stdio.h>

#define MAX 15

int main(){
    int test_case;
    int T, N, M, sum, max;
    int field[MAX][MAX];
    int swatter[MAX][MAX];
    
    scanf("%d", &T);

    for(test_case = 1; test_case <= T; ++test_case){
        scanf("%d %d", &N, &M);
        
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                scanf("%d", &field[i][j]);
            }
        }
        
        max = 0;
        for(int i = 0; i < N - (M - 1); i++){
            for(int j = 0; j < N - (M - 1); j++){
                sum = 0;
                for(int k = 0; k < M; k++){
                    for(int l = 0; l < M; l++){
                        sum += field[i + k][j + l];
                    }
                }
                if(max < sum)
                    max = sum;
            }
        }
        printf("#%d %d\n", test_case, max);
    }
    
	return 0;
}