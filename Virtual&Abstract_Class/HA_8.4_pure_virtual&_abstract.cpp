#include <iostream>
using namespace std;

class Shape
{
   protected:
    float dimension;

   public:
    void Dimension()
    {
        cin >> dimension;
    }


    virtual float calculateArea() = 0;
};


class Square : public Shape
{
   public:
    float calculateArea()
    {
        return dimension * dimension;
    }
};

class Circle : public Shape
{
   public:
    float calculateArea()
    {
        return 3.14 * dimension * dimension;
    }
};

int main()
{
    Square s;
    Circle c;

    cout << "Enter the side of the square :";
    s.Dimension();
    cout << "\nArea of square:"<<s.calculateArea()<< endl;

    cout << "Enter the radius of the circle :" ;
    c.Dimension();
    cout << "\nArea of circle:"<<c.calculateArea() << endl;

    return 0;
}
