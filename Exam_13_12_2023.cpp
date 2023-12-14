//Петьо Спасов
//Вариянт 2

#include <iostream>

using namespace std;
int main(){

//    //--------------- 1 ---------------------------------
//    int n;
//    cout << "Enter the number:";
//    cin >> n;
//
//    if((n%7==0)&&(n%2==0)){
//        cout << "\n The number "<< n <<" is divided at 7 and 2";
//    }
//    else{
//         cout << "\n The number "<< n <<" not divided at 7 and 2";
//    }
//
//    //-------------------------- 2 -------------------------------------
//    cout <<"\n\============================================================\n";
//    int q =0 ;
//
//    for (int i=1000; i <=9999; i++){
//        if((i/10%10)==(i/100%10)){
//            q+=1;
//        }
//
//    }
//    cout << "\n Quantrity of number is :" << q ;
//
//    //---------------------------- 3 ----------------------------------
//    cout <<"\n\============================================================\n";
//    int m ;
//    int multi = 1;
//
//    cout << "Enter the size of the array :";
//    cin >> m;
//
//    int arr[m];
//
//    for (int j=0 ; j < m; j++){
//         cout << "Enter the elements of array: ";
//         cin >> arr[j];
//         if (arr[j]%2==0){
//            multi *= arr[j];
//         }
//      }
//    cout << "\n The multiplication of the even element is :"<< multi;
//
//  //------------------------ 4 --------------------------------------------------

    cout <<"\n\============================================================\n";

    int col,row;

    cout << " Enter column:";
    cin >> col ;
    cout << "\n Enter row:";
    cin >> row;

    int a[col][row];

    int p = 1;

    for(int i=0;i < col; i++){
        for(int j=0; j < row ; j++){
            cout<< "Enter elements: ";
            cin >> a[i][j];
        }
    }
    cout<<endl<<endl;
    for(int i= 0; i < col ; i++){
        for(int j=0; j < row ; j++){
            printf("[%d][%d]:",i,j);
            cout << a[i][j] << " ";
        }
        cout<<endl;
    }
    for(int i=0;i < col ;i++){
        for(int j = 0; j < row ; j++){
            if( (j%2 != 0) && (a[i][j] > 0)){
                p*=a[i][j];

            }
         }
    }

    cout << "\n Proizvedenieto e :" << p;



    return 0;
    }
