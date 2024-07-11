#include<iostream>
#include<cmath>
int counter=0;
class date
{
        int hour,min,sec;
    public:
        void input()
        {
            std::cout<<"Enter the time in hours minutes and seconds"<<std::endl;
            std::cin>>hour>>min>>sec;

        }
        void output()
        {
            std::cout<<hour<<" :: "<<min<<" :: "<<sec<<std::endl;
        }
        friend int operator -(date&,date&);
        friend float calculate(date);
};

class parking
{
    int id;
    date vehicle_in;
    date vehicle_out;
    static int num_vehicles;
    public:
        void del()
        {
            id=-1;
        }
        void input()
        {
            std::cout<<"Enter the vehicle id"<<std::endl;
            std::cin>>id;
            vehicle_in.input();
        }
        void operator ++()
        {
            num_vehicles++;
        }
         void operator --()
        {
            num_vehicles--;
        }
        friend void depart();
        friend void list();

}veh[100];
int parking::num_vehicles=0;
int operator -(date& t1,date& t2)
        {
            return (t1.sec+t1.min*60+t1.hour*60*60)-(t2.sec+t2.min*60+t2.hour*60*60);
        }

float calculate(int t_time)
{
    float fee=2;
    if(t_time>3*60*60)
    {
    t_time=t_time-3*60*60;
    fee=fee+0.5*floor(t_time/(60*60));
    fee=fee+8*(t_time/(24*60*60));
    }
    return fee;
}
void register_vehicle()
{
    veh[counter].input();
    ++veh[counter];
    counter++;
}
void depart()
{
    int temp_id;
    std::cout<<"Enter the vehicle id"<<std::endl;
    std::cin>>temp_id;
    for(int i=0;i<=counter;i++)
    {
        if(veh[i].id==temp_id)
        {
            veh[i].vehicle_out.input();
            int diff=veh[i].vehicle_out-veh[i].vehicle_in;
            std::cout<<"Your total fee is "<<calculate(diff)<<std::endl;
            veh[i].del();
            --veh[i];
            break;
        }
    }
}
void list()
{
    int n=0;
    while(n<counter&&veh[n].id!=-1)
    {
        std::cout<<"Vehicle id : "<<veh[n].id<<"    ";
        veh[n].vehicle_in.output();
        std::cout<<std::endl<<std::endl;
        n++;
    }
}
int main()
{
    while(1)
    {
    int n;
    std::cout<<"1.Register a vehicle"<<std::endl;
    std::cout<<"2.Register the departure of a vehicle"<<std::endl;
    std::cout<<"3.List all the vehicles in the parking lot"<<std::endl;
    std::cin>>n;
    switch (n)
    {
    case 1:
        register_vehicle();
        break;
    case 2:
        depart();
        break;
    case 3:
        list();
        break;

    default:
        std::cout<<"Invalid number";
        break;
    }
    }
    return 0;
}