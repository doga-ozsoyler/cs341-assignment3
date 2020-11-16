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
    cout << endl;

    list.insert(27);
    list.insert(18);
    list.insert(29);
    list.insert(28);
    list.insert(39);
    list.insert(13);
    list.insert(16);
    list.insert(42);
    list.insert(17);

    for(int i = 0; i < list.data_vec.size(); i++)
    {
        cout << "d=" << list.data_vec[i].data
        << "v=" << list.data_vec[i].valid << " ";
    }
    cout << endl;

    return 0;
}