#include <iostream>
#include "lib.h"
using namespace std;
float funzione(float array[],int dimensione){
    float max= array[0];
    for(int i=1;i<dimensione;i++){
        if(max<array[i])
            max=array[i];
    }
    return max;
}
