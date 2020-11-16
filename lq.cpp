#include <iostream>
#include "lq.h"

using namespace std;

LQ::LQ(int table_size){

    for(int i = 0; i < table_size; i++)
    {
        auto entry = lq_entry();
        entry.data = -1;
        data_vec.push_back(entry);
    }
}


void LQ::insert(int new_data){

    int mod = new_data % data_vec.size();
    int division = new_data / data_vec.size();
    
    int i = mod;
    while(data_vec[i].valid != false)
    {
        i = (i + division) % data_vec.size();
    }
    data_vec[i].data = new_data;
    data_vec[i].valid = true;
    

}



int LQ::find_num_probes(int key) const{

}



double LQ::find_average_num_probes() const{

}

bool LQ::does_include(int key) const{

}