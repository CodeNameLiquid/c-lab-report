#include<iostream>
class pharma_store
{
    int order_quan,store_quan,flag;
    public:
        void input()
        {
            std::cout<<"Enter the order amount"<<std::endl;
            std::cout<<"Enter the store amount"<<std::endl;
            std::cin>>order_quan>>store_quan;
        }
        void check()
        {
            if(order_quan>store_quan)
            {
                std::cout<<"Not enough medicine"<<std::endl;
            }

            else if(order_quan<store_quan&&(order_quan<=16||(order_quan>=16&&store_quan>40)))
            {
                std::cout<<"Your order is accepted"<<std::endl;
            }
            else if(order_quan<store_quan&&order_quan>16&&store_quan<=40)
            {
                std::cout<<"You cannot order more than 16 items"<<std::endl;
            }
        }
};
int main()
{
    pharma_store p1;
    p1.input();
    p1.check();
    return 0;
}