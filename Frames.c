#include <stdio.h>

int main() {

    int N, M, X;
    

    scanf("%d %d %d", &N, &M, &X);
    
  
    int perimeter = 2 * (N + M);
    

    int cost = perimeter * X;
    

    printf("%d\n", cost);
    
    return 0;
}
