////1
//#include <iostream>
//using namespace std;
//
//int convert(double num)
//{
//    return static_cast<int>(num);
//}
//
//int main()
//{
//    double num = 15.8;
//
//    cout << "Результат: " << convert(num);
//
//    return 0;
//}
////2
//#include <iostream>
//using namespace std;
//
//class Shape
//{
//public:
//    virtual double perimeter()
//    {
//        return 0;
//    }
//
//    virtual ~Shape() {}
//};
//
//class Circle : public Shape
//{
//private:
//    double radius;
//
//public:
//    Circle(double r)
//    {
//        radius = r;
//    }
//
//    double perimeter() override
//    {
//        return 2 * 3.14 * radius;
//    }
//};
//
//int main()
//{
//    Circle circle(5);
//    Shape* shape = static_cast<Shape*>(&circle);
//    Circle* c = static_cast<Circle*>(shape);
//    cout << "Периметр кола - " << c->perimeter();
//
//    return 0;
//}
////3
//#include <iostream>
//using namespace std;
//
//char* convert(void* ptr)
//{
//    return static_cast<char*>(ptr);
//}
//
//int main()
//{
//    char text[] = "Hello";
//
//    void* ptr = text;
//
//    char* result = convert(ptr);
//
//    cout << result;
//
//    return 0;
//}
////4
//
//#include <iostream>
//#include <typeinfo>
//using namespace std;
//
//class Vehicle
//{
//public:
//    virtual ~Vehicle() {}
//};
//
//class Car : public Vehicle
//{
//};
//
//class Bicycle : public Vehicle
//{
//};
//
//int main()
//{
//    Car car;
//    Bicycle bicycle;
//    Car car2;
//
//    Vehicle* arr[] = { &car, &bicycle, &car2 };
//
//    for (int i = 0; i < 3; i++)
//    {
//        if (typeid(*arr[i]) == typeid(Car))
//        {
//            cout << "Це автомобіль" << endl;
//        }
//        else if (typeid(*arr[i]) == typeid(Bicycle))
//        {
//            cout << "Це велосипед" << endl;
//        }
//    }
//
//    return 0;
//}
////5
//#include <iostream>
//using namespace std;
//
//class Vehicle
//{
//public:
//    virtual ~Vehicle() {}
//};
//
//class Car : public Vehicle
//{
//};
//
//class Bicycle : public Vehicle
//{
//};
//
//void checkCar(Vehicle& v)
//{
//    try
//    {
//        Car& car = dynamic_cast<Car&>(v);
//        cout << "Це автомобіль!" << endl;
//    }
//    catch (bad_cast& e)
//    {
//        cout << "Помилка: об'єкт не є автомобілем!" << endl;
//    }
//}
//
//int main()
//{
//    Car car;
//    Bicycle bicycle;
//
//    checkCar(car);
//    checkCar(bicycle);
//
//    return 0;
//}