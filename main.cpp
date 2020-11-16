#include <iostream>
#include "lq.cpp"

using namespace std;

int main(){

    LQ list(11);

    for(int i = 0; i < list.data_vec.size(); i++)
    {
        cout << "d=" << list.data_vec[i].data
        << "v=" << list.data_vec[i].valid << " ";
    }

    return 0;
}