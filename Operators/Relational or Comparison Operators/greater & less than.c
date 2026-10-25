#include <stdio.h>

int main() {
    int alpha = 20;
    int beta = 35;
    int gamma = 15;

    // Challenge: Track the true (1) and false (0) values
    int answer = (beta > alpha) * 4 + (gamma < alpha) * 3 - (beta < gamma);

    printf("Final Answer: %d\n", answer);

    return 0;
}
