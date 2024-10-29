#include <stdio.h>

int StringLength(char sentence[]) {
    int count = 0 ;
    for(int i=0 ;sentence[i]!='\0';i++){
        count++ ;   }
        return count;
}

int NumOfWords(char sentence[], int strLength){
    int count = 1;
    for (int i =0; sentence[i]!='\0';i++)
    if(sentence[i]==' '){
        count++;
    }
    return count;
}
//int NumOfVowels(char sentence[], int strLength);
//int VowelFreq(char sentence[], char vowel);

int main() {
    char sentence[100];
    char vowel;
    
    printf("Enter a sentence (max 100 characters): ");
    scanf("%[^\n]s" , sentence);
    
    printf("the String Length : %d",StringLength(sentence));
    printf("the NUM.word : %d",NumOfWords[sentence,StringLength(sentence));
    
return 0;
}
