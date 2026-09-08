#include <iostream>
#include <string>
using namespace std;

struct OrderDetails
{
    int orderId;
    string restaurantName;
    bool isDelivered;
};

class FoodOrder
{
public:
    int orderId;
    string restaurantName;
    bool isDelivered;

    FoodOrder(OrderDetails details)
    {
        orderId = details.orderId;
        restaurantName = details.restaurantName;
        isDelivered = details.isDelivered;
    }

    void markDelivered()
    {
        isDelivered = true;
        cout << "Order has been delivered successfully." << endl;
    }
};

int main()
{
    OrderDetails details = {101, "Pizza Hut", false};

    FoodOrder order(details);

    cout << "Order ID: " << order.orderId << endl;
    cout << "Restaurant Name: " << order.restaurantName << endl;
    cout << "Is Delivered: "
         << (order.isDelivered ? "True" : "False") << endl;

    order.markDelivered();

    return 0;
}