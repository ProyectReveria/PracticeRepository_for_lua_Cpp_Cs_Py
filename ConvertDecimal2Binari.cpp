#include <iostream> 

int main(){
                //2 4 8 16 32 64 128
    int array[8] = {0,0,0,0,0,0,0,0};
    int binario = 0; 
    int arraySize = sizeof(array) / sizeof(array[0]); 
    std::cin >> binario; 
    int tmp = binario; 
    for (int i = 0; i < arraySize; i++){
        int n; 
        switch (i){
            case 0:
            n = 128;
            break;
            case 1:
            n = 64;
            break;
            case 2:
            n = 32;
            break;
            case 3:
            n = 16;
            break;
            case 4: 
            n = 8;
            break;
            case 5:
            n = 4;
            break;
            case 6:
            n = 2;
            break;
            case 7:
            n = 1;
            break;
        }

        if (tmp >= n){
            array[i] = 1;
            tmp = tmp - n; 
        }else{
            array[i] = 0;
        }

        std::cout << array[i]; 


    }
return 0; 
}
