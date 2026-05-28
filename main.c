#include <stdio.h>
#include <stdlib.h>
#include <bsd/stdlib.h>

int main(void){
    printf("Enter letter count: ");
    int lcount;
    scanf("%d", &lcount);
    printf("\n");
    printf("Enter W count: ");
    int wcount;
    scanf("%d", &wcount);
    printf("\n");
    char ascii_letters[] = "abcdefghijklmnopqrstuvwxyz";
    char w[lcount+1];
    w[lcount] = '\0';
    for (int n=0;n<=wcount;++n){
        for (int l=0;l<=lcount;++l){
            unsigned int num = arc4random_uniform(26);
            w[l]=ascii_letters[num];
            num = arc4random_uniform(26);
        }
    printf("%s \n", w);
    }
}
