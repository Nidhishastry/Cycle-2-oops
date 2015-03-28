//
//  main.cpp
//  cpp-2-computer
//
//  Created by Kumar Divya  Rajat on 27/03/15.
//  Copyright (c) 2015 Kumar Divya  Rajat. All rights reserved.
//

#include <iostream>

using namespace std;

class computer{
    
    float speed,mainmemory,harddisk;

protected:
    void set_speed()
    {
        cout<<"Enter the speed of CPU in gHz\n";
        cin>>speed;
    }
    
    void set_mainmemory()
    {
        cout<<"Enter the capacity of RAM in Gb's\n";
        cin>>mainmemory;
    }
    void set_harddiskmemory()
    {
        cout<<"Enter the storage capacity in Gb's\n";
        cin>>harddisk;
    }
    void get_speed()
    {
        cout<<"Processor Speed:- "<<speed<<" gHz.\n";
    }
    void get_manimemory()
    {
        cout<<"RAM Capacity:- "<<mainmemory<<" Gb.\n";
    }
    void get_harddiskmemory()
    {
        cout<<"Hard Disk:- "<<harddisk<<" Gb's.\n";
    }
    
};

class laptop : public computer{
    float bat_time, weight;
    void set_batterytime()
    {
        cout<<"Enter the battery backup capacity in terms of hours.\n";
        cin>>bat_time;
    }
    
    void set_weight()
    {
        cout<<"Enter the weight in Kg's.\n";
        cin>>weight;
    }
    
    void get_batterytime()
    {
        cout<<"The battery backup is "<<bat_time<<" hours.\n";
    }
    
    void get_weight()
    {
        cout<<"The weight of the laptop is "<<weight<<" kg's.\n";
    }
    public:
    void input()
    {
        set_speed();
        set_mainmemory();
        set_harddiskmemory();
        set_batterytime();
        set_weight();
    }
    
    void display()
    {
        get_speed();
        get_manimemory();
        get_harddiskmemory();
        get_batterytime();
        get_weight();
    }
};


int main(int argc, const char * argv[]) {
    laptop Dell_vostro_3496;
    cout<<"Enter the details for Dell Vostro 3496\n";
    Dell_vostro_3496.input();
    laptop Apple_macbook_pro_retina_2015;
    cout<<"Enter the details for Apple Macbook Pro Retina 2015.\n";
    Apple_macbook_pro_retina_2015.input();
    laptop Lenovo_g50;
    cout<<"Enter the details for Lenovo G50.\n";
    Lenovo_g50.input();
    
    cout<<"The details are\n";
    cout<<" - - - - - - - - - - \n";
    cout<<"Dell Vostto 3496:\n";
    Dell_vostro_3496.display();
    cout<<" - - - - - - - - - - \n";
    cout<<"Apple Macbook Pro Retina 2015:\n";
    Apple_macbook_pro_retina_2015.display();
    cout<<" - - - - - - - - - - \n";
    cout<<"Lenovo G50:\n";
    Lenovo_g50.display();
    cout<<" - - - - - - - - - - \n";
}
