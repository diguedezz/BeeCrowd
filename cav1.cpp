#include <iostream>
 
using namespace std;
 
int main() {
 
    int N, soma;
    int s[4] = {};
    cin >> N;
    while(N < 1 || N > 255)
        cin >> N;
    for(int i=0; i<N; i++){
        cin >> s[0]>>s[1]>>s[2]>>s[3]>>s[4]>>endl;
        for(int j=0; j<5; j++){
            if(s[j] <= 127){
                s[j] = 0;
                soma += s[j];
            }
            else {
                s[j] = 255
                soma += s[j];
            }
        }
        if(soma == 1020)
    }
