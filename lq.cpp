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
    int noLoop = 0; //if list is full
    while(data_vec[i].valid != false && noLoop <= data_vec.size())
    {
        i = (i + division) % data_vec.size();
        noLoop++;
    }

    if(noLoop > data_vec.size())
    {
        cout << "List is full!!! "
        << new_data << " couldn't be added." << endl;
        return;
    }
    data_vec[i].data = new_data;
    data_vec[i].valid = true;
}



int LQ::find_num_probes(int key) const{

    int mod = key % data_vec.size();
    int division = key / data_vec.size();

    int i = mod;
    int probe_num = 1;
    int noLoop = 0; //if list is full
    while(data_vec[i].data != key && noLoop <= data_vec.size())
    {
        i = (i + division) % data_vec.size();
        noLoop++;
        probe_num++;
    }

    if(noLoop > data_vec.size())
    {
        cout << key << " doesn't exist!!!" << endl;
        return -1;
    }
    return probe_num;
}



double LQ::find_average_num_probes() const{

    double probes_sum = 0;
    double data_num = 0;

    for(int i = 0; i < data_vec.size(); i++)
    {
        if(data_vec[i].data != -1)
        {
            probes_sum = probes_sum + find_num_probes(data_vec[i].data);
            data_num++;
        }
    }

    if(probes_sum == 0 && data_num == 0)
    {
        cout << "List is empty!!!" << endl;
    }
    
    return probes_sum / data_num;
}

bool LQ::does_include(int key) const{

    int mod = key % data_vec.size();
    int division = key / data_vec.size();

    int i = mod;
    int noLoop = 0; //if list is full
    while(data_vec[i].data != key && noLoop <= data_vec.size())
    {
        i = (i + division) % data_vec.size();
        noLoop++;
    }

    if(noLoop > data_vec.size())
    {
        return false;
    }
    else
    {
        return true;
    }
    
}