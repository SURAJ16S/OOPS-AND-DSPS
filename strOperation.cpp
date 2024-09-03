#include<iostream>
#include<string>
using namespace std;
int len1=0, len2 =0;

//calculate the length of string
void length(char string[] , char string2[]){
    len1 = 0, len2 = 0;
    for(int i = 0 ;string[i]!='\0';i++){
        len1++;
    }
    for(int i = 0 ;string2[i]!='\0';i++){
        len2++;
    }
    cout<<"Length Of First String : "<<len1<<"\nLength Of Second String : "<<len2<<endl;
}


//concate strings
void concate(char string[] , char string2[]){
  int i,j;
  char concatestring[len1+len2+1];
  for(i = 0 ; i<len1 ;i++){
      concatestring[i]=string[i];
  }
 for(j=0;j<len2;j++,i++) {
        concatestring[i] = string2[j];
    }
   concatestring[i] = '\0';
  cout<<"\nString After Concatenation :"<<concatestring<<endl;
}

//copy string into new
void copy(char deststring[] , char string[]){
    int i;
    for(i = 0; string[i] != '\0'; i++){
        deststring[i] = string[i];
    }
    deststring[i] = '\0';
    cout<<"String After Copying\nString 1 : "<<deststring<<"\nString 2 : "<<string<<endl;
}

//reverse the string
void reverse(char string[], char string2[], char revstr1[], char revstr2[]) {
    int k = 0;
    for(int i = len1 - 1; i >= 0; i--) {
        revstr1[k++] = string[i];
    }
    revstr1[k] = '\0';  // Null-terminate the reversed string
    k = 0;  // Reset k

    for(int i = len2 - 1; i >= 0; i--) {
        revstr2[k++] = string2[i];
    }
    revstr2[k] = '\0';
    cout << "Reversed First String : " << revstr1 << "\nReversed Second String : " << revstr2 << endl;
}

//palindrome or not
void palindrome(char string[],char string2[],char revstr1[],char revstr2[]){
int choice,i,flag1 = 0 , flag2 =0;
for(i=0;i<len1;i++){
    if(revstr1[i]!=string[i]){
        flag1 = 1;
        break;
    }
}
if(flag1==0){
    cout<<"String "<<string<<" is a Palindrome"<<endl; 
}
else{
    cout<<"String "<<string<<" is not a palindrome"<<endl;
}
for(i=0;i<len2;i++){
    if(revstr2[i]!=string2[i]){
        flag2 = 1;
        break;
    }
}
if(flag2==0){
    cout<<"String "<<string2<<" is a Palindrome"<<endl; 
}
else{
    cout<<"String "<<string2<<" is not a palindrome"<<endl;
}

}
//check index position targeted element
void indexposition(char string[], char string2[]) {
    int choice, i, flag = 0;
    cout << "Enter string Number (1 or 2): ";
    cin >> choice;
    if (choice == 1) {
        char target;
        cout << "Enter Character to search: ";
        cin >> target;
        for (i = 0; i < len1; i++) {
            if (string[i] == target) {
                flag = 1;
                break;
            }
        }
        if (flag != 1) {
            cout <<"Element" << target <<" not present"<< endl;
        } else {
            cout<<"Element "<< target<<" is present at index "<< i << endl;
        }
    } else if (choice == 2) {
        char target;
        cout << "Enter Character to search: ";
        cin >> target;
        for (i = 0; i < len2; i++) {
            if (string2[i] == target) {
                flag = 1;
                break;
            }
        }
        if (flag != 1) {
            cout <<"Element "<<target<<" not present"<< endl;
        } else {
            cout <<"Element "<<target<<" is present at index "<< i << endl;
        }
    }
}

//check ascii number for each letter
void ascii(char string[] ,char string2[]){
    int i;
    for(i=0;i<len1;i++){
        cout<<"ASCII Code For "<<string[i]<<" is "<<int(string[i])<<endl;
    }
      for(i=0;i<len2;i++){
        cout<<"ASCII Code For "<<string2[i]<<" is "<<int(string2[i])<<endl;
    }
}


int main(){
    char string[] = "sanjivani";
    char string2[] = "engineering college";
    cout<<"Strings are \nString 1 :"<<string<<"\nString 2 : "<<string2<<endl;
    
    length(string , string2);
    char deststring[100];
    copy(deststring , string2);
    concate(string ,string2);
    char revstr1[len1+1], revstr2[len2+1];
    reverse(string,string2,revstr1,revstr2);
    palindrome(string,string2, revstr1, revstr2);
    indexposition(string,string2);
    ascii(string,string2);
    return 0;
}
