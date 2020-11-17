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

    cout << "27probe=" << list.find_num_probes(27) << " ";
    cout << "18probe=" << list.find_num_probes(18) << " ";
    cout << "29probe=" << list.find_num_probes(29) << " ";
    cout << "17probe=" << list.find_num_probes(17) << " ";
    cout << "42probe=" << list.find_num_probes(42) << " ";
    cout << "16probe=" << list.find_num_probes(16) << " ";
    cout << endl;

    cout << "average num probes= " << list.find_average_num_probes()
    << endl;

    return 0;
}