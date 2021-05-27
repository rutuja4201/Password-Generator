#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

char pchar[] = {"0123456789" "!@#$%^&*" "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"}; 
int strLen = sizeof(pchar) - 1;

char Generate() {
    return pchar[rand()%strLen];
}

int main() {
    int n, digitCount = 0, specialCharCount = 0;
    srand(time(NULL));
    cout << "Enter the length of the password rewuired: ";
    cin >> n;
    cout << n << endl;
    cout << "Your password is: ";
    G:
    char c;
    string s;
    for(int i=0 ; i<n ; i++) {
        c = Generate();
        s+=c;
        if(isdigit(c))
            digitCount++;
      
        if(c=='!' || c=='@' || c=='$' || c=='%' ||  c=='^' || c=='&'|| c=='*'|| c=='#')
            specialCharCount++;
    }
    if(n>2 && (digitCount==0 || specialCharCount==0))
        goto G; 
      
   cout<< s <<endl; 
  
   return 0; 
}
