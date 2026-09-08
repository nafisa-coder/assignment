#include <iostream>
#include <string>
using namespace std;

class FoodOrder
{
public:
    int orderId;
    string restaurantName;
    bool isDelivered;

    FoodOrder(int id, string restaurant, bool delivered)
    {
        orderId = id;
        restaurantName = restaurant;
        isDelivered = delivered;
    }

    void markDelivered()
    {
        isDelivered = true;
        cout << "Order has been delivered successfully." << endl;
    }
};

int main()
{
    FoodOrder order(101, "Pizza Hut", false);

    cout << "Order ID: " << order.orderId << endl;
    cout << "Restaurant: " << order.restaurantName << endl;
    cout << "Delivered: "
         << (order.isDelivered ? "True" : "False") << endl;

    order.markDelivered();

    cout << "Delivered: "
         << (order.isDelivered ? "True" : "False") << endl;

    return 0;
}