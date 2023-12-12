// Намерете всички четерицифрени числа на които сумата от цифрите е 15
#include <iostream>
using namespace std;

int main(){
    int sum = 0;
    int numbers[1000]={};
    int index=0;

    for (int i=1000; i <= 9999 ; i++){
            sum = sum + i%10 + i/10%10 + i/100%10 + i/1000%10;
            if (sum == 15 ){
                numbers[index]=i;
                index+=1;
            }
            sum=0;

    }
    for (int i:numbers){
        if(i == 0)
            break;
        cout << i<<"  ";
    }

    return 0;
}
