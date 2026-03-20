#include <stdio.h>

int main(){
    char str[100];
    int count[256] = {0};

    printf("Enter String: ");
    scanf("%s", &str);

    for(int i = 0; str[i] != '\0'; i++){
        count[str[i]]++;
    }

    for(int i = 0; str[i] != '\0'; i++){
        if(count[str[i]] == 1){
            printf("First non-repeating Character: %c", str[i]);
            return 0;
        }
    }

    printf("No non-repeating character found");
    return 0;
}