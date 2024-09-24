#include <stdio.h>

int main(int argc, char *argv[]){
    for(int i = 0; i < argc; i++){
        printf("%d: %s\n", i, argv[i]);

        for(char *p = argv[i]; *p != '\0'; p++){
            if(!(*p >= 'a' && *p <= 'z')){
                printf("String %s consists not only from letters form a to z!");
                return 1;
            }
        }
    }
    return 0;
}