#include <iostream>
using namespace std;
const char gStageData[] = "\
########\n\
# .. p #\n\
# oo   #\n\
#      #\n\
########";

template < typename TYPE, size_t SIZE >
size_t array_length(const TYPE (&)[SIZE]) {
    return SIZE;
}

int main(){
    int i = 0;
    int iEnd = array_length(gStageData);
    for (i = 0; i < iEnd -1 ; i++) {
        cout << gStageData[i] << flush;
    }
    cout << '\n' << flush;
}
