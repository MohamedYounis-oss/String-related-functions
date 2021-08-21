
void string_print(char* str){

    for (int i=0; str[i]; i++){
        printf("%c", str[i]);
    }
    printf("\n");
}


int string_len(char* str){

    int i;
    for( i=0; str[i]; i++);
    return i;

}


void char_swap(char* a, char* b){

    char temp;
    temp = *a;
    *a = *b;
    *b = temp;

}


void string_reverse(char* str){

    int len = string_len(str);
    int i, j=len-1, temp;

    for(i=0; i<=len/2; i++){
        char_swap(str+i, str+j);
        j--;
    }
}


void string_lowercase(char* str){

    for (int i=0; str[i]; i++){

        if(str[i]>='A' && str[i]<='Z'){
            str[i] = (str[i] - 'A')+'a';
        }
    }
}


void string_uppercase(char* str){

    for (int i=0; str[i]; i++){

        if(str[i]>='a' && str[i]<='z'){
            str[i] = str[i] - 'a'+'A';
        }
    }
}


int string_compare (char* str1, char* str2){

    int i;
    for (i=0; str1[i]||str2[i]; i++){
        if(str1[i]!=str2[i]){
            return 0;
        }
    }
    return 1;
}


int string_compare_notCase (char* str1, char* str2){

    int i;
    for (i=0; str1[i] || str2[i]  ;i++){

        if(str1[i]!=str2[i] && ((str1[i]-'a'+'A') != str2[i] && (str1[i]-'A'+'a') != str2[i])){
            return 0;
        }

    }
    return 1;
}


int string_mirror(char* str){

    int len = string_len(str);
    int i, j=len-1;

    for (i=0; i<len; i++){

        if(str[i]!=str[j] && ((str[i]-'a'+'A') != str[j] && (str[i]-'A'+'a') != str[j])){
            return 0;
        }
        j--;
    }
    return 1;
}


int string_search(char* str, char letter){

    for (int i=0; str[i]; i++){
        if(str[i]==letter){
            return i;
        }
    }
    return -1;
}


char string_most_repeated(char* str){

    char letter;
    int count, max=1;

    for (int i=0; str[i]; i++){

        count = 0;
        for (int j=i; str[j]; j++){

            if (str[i] == str[j]){
                count++;
            }

        }
        if(count>max){
                max = count;
                letter = str[i];
            }

    }
    return letter;

}


void string_copy(char* str1, char* str2){

    for (int i=0; str1[i]; i++){
        str2[i] = str1[i];
    }
}


void string_longestWord(char* str, char* word){

    int word_count = 0, max = 0, index;

    for (int i=0; str[i]; i++){

        if(str[i]!=' '){
            word_count++;
            if(word_count>max){
                max = word_count;
                index = i;
            }

        } else {
            word_count=0;
        }
    }

    index = index -max+1;
    int j;
    for (j=0; j<max; j++){
        word[j] = str[index];
        index++;
    }
    word[j] = 0;


}


void string_scan(char* str){

    int i=0;
    scanf("%c", &str[i]);
    for ( ;str[i]!='\n';){

        i++;
        scanf("%c", &str[i]);

    }
    str[i] = 0;

}


void integer_to_string(int n, char* str){

        int flag;

        if (n==0){
            str[0] = '0';
            str[1] = 0;
            return;

        } else if (n<0){
            flag = 1;
            n = n*-1;
        }



        int i=0;
        while (n>0){
            str[i] = n%10+'0';
            n = n/10;
            i++;
        }
        if (flag==1){
            str[i] = '-';
        }

        str[i+1] = 0;

        string_reverse(str);


}


int string_to_integer(char* str){

    int n=0, i, flag;

    if (str[0] == '-'){
        flag = 1;
        i=1;
    }

    for (i; str[i]; i++){
        n = n*10+(str[i]-'0');
    }

    if (flag){
        return n*-1;
    } else {
        return n;
    }

}


void string_swap(char* str1, char* str2){

    char temp;

    for (int i=0; str1[i] && str2[i]; i++){
        temp  = str1[i];
        str1[i] = str2[i];
        str2[i] = temp;
    }
}


