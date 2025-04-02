#include <iostream>
using namespace std;
int length (char *a){
int len = 0;
while (*(a+len)!='\0'){
    len++;
}
return len;
}

void reverse (char *a){
int len = length(a);
for (int i=0; i<len/2; i++){
    swap (a[i],a[len-1-i]);
}
}

void delete_char(char *a, char c){
    int len = length(a);
    char *b = a;
    while (*a){
        if (*a != c){
            *b = *a;
            b++;
        }
        a++;
    }
        *b = '\0';
}

void pad_right(char *a, int n){
int len = length(a);
if (len>=n) return;
for (int i=len; i<n; i++){
    *(a+i)=' ';
}
*(a+n)='\0';
}

void pad_left(char *a, int n){
int len = length(a);
if (len>=n) return;
int remain = n-len;
for (int i=len-1; i>=0; i--){
    *(a+remain+i) = *(a+i);
}
for (int i=0; i<remain; i++){
    *(a+i)=' ';
}
*(a+n) = '\0';
}

void truncate(char *a, int n){
    int len = length(a);
    if (len > n){
        *(a+n)='\0';
    }
}

bool is_palindrome(char *a){
    int len = length(a);
    for (int i=0; i<len/2; i++){
        if (*(a+i)!= *(a+(len-i-1))){
            return false;
        }
    }
    return true;
}

void trim_left(char *a){
char *b = a;
while (*b == ' '){
    b++;
}
char *c = a;
while (*b){
    *b = *c;
    b++;
    c++;
}
*c = '\0';
}

void trim_right(char *a){
int len = length(a);
while (len>0 && *(a+len-1)==' '){
    len--;
}
*(a+len)='\0';
}

int main(){
char str1[] = "hello world";
    reverse(str1);
    cout << "Reverse: " << str1 << endl;

    char str2[] = "goodbye world";
    delete_char(str2, 'o');
    cout << "Delete 'b': " << str2 << endl;

    char str3[20] = "hi";
    pad_right(str3, 5);
    cout << "Pad Right: '" << str3 << "'" << endl;

    char str4[20] = "hello";
    pad_left(str4, 7);
    cout << "Pad Left: '" << str4 << "'" << endl;

    char str5[] = "definition";
    truncate(str5, 3);
    cout << "Truncate: " << str5 << endl;

    char str6[] = "level";
    cout << "Is Palindrome: " << (is_palindrome(str6) ? "Yes" : "No") << endl;

    char str7[] = "   hello";
    trim_left(str7);
    cout << "Trim Left: '" << str7 << "'" << endl;

    char str8[] = "hello   ";
    trim_right(str8);
    cout << "Trim Right: '" << str8 << "'" << endl;

}
