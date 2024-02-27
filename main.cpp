#include <iostream>
#include <stdlib.h>

using namespace std;

//класс описывающий прямоугольник
class Rectangle
{
    int A;//поле длина
    int B;//поле ширина
public:
    //Конструктор с параметрами, со значением параметров по умолчанию
    Rectangle(int a = 0, int b = 0) : A{ a }, B{ b } {}
    //метод вывода на экран
    void Show()const
    {
        cout << "Длина прямоугольника: " << A << "\t " << "Ширина прямоугольника : " << B << endl;
        cout << endl;
    }
    //метод для нахождения площади прямоугольника
    int Area(Rectangle)
    {
        int S = A * B;
        return S;
    }
    //методы для доступа к private полям для глобальной перегрузки операторов
    int GetA()const { return A; }
    int GetB()const { return B; }
    void SetA(int a) { A = a; }
    void SetB(int b) { B = b; }
    //перегрузка оператора проверки на равенство == как метод класса
    bool operator==(const Rectangle&)const
    {
        return false;
    }
    //перегрузка оператора проверки на неравенство != как метод класса
    bool operator!=(const Rectangle&)const
    {
        return false;
    }
    //дружественная перегрузка оператора меньше или равно <=
    friend bool operator<=(const Rectangle&, const Rectangle&)
    {
        return false;
    }
    //дружественная перегрузка оператора больше или равно >=
    friend bool operator>=(const Rectangle&, const Rectangle&)
    {
        return false;
    }
};


int main()
{
    system("chcp 1251");
    system("cls");

    Rectangle X(5, 20);
    X.Show();
    cout << "Площадь прямоугольника равна: " << X.Area(X);
    cout << endl;
    cout << endl;
    Rectangle Y(3, 15);
    Y.Show();
    cout << "Площадь прямоугольника равна: " << Y.Area(Y);
    cout << endl;
    cout << endl;
    Rectangle Z(2, 50);
    Z.Show();
    cout << "Площадь прямоугольника равна: " << Z.Area(Z);
    cout << endl;
    cout << endl;

    // if (X.Area(X) == Z.Area(Z))cout << "Площади прямоугольников равны!" << endl;
   // else
        // cout << "Площади прямоугольников не равны!" << endl;

     //if (X.Area(X) != Z.Area(Z))cout << "Площади прямоугольников не равны!" << endl;
     //else
        // cout << "Площади прямоугольников  равны!" << endl;

      //if (X.Area(X) == Y.Area(Y))cout << "Площади прямоугольников равны!" << endl;
      //else
       //  cout << "Площади прямоугольников не равны!" << endl;

     //if (X.Area(X) != Y.Area(Y))cout << "Площади прямоугольников не равны!" << endl;
     //else
       //  cout << "Площади прямоугольников  равны!" << endl;


     //if (X.Area(X) <= Z.Area(Z))cout << "Верно!" << endl;
     //else
        // cout << "Не верно!" << endl;

     //if (X.Area(X) >= Z.Area(Z))cout << "Верно!" << endl;
     //else
         //cout << "Не верно!" << endl;

     // if (X.Area(X) <= Y.Area(Y))cout << "Верно!" << endl;
      //else
        // cout << "Не верно!" << endl;

     // if (X.Area(X) >= Y.Area(Y))cout << "Верно!" << endl;
     //else
        // cout << "Не верно!" << endl;


     //if (X.Area(X) > Z.Area(Z))cout << "Верно!" << endl;
     //else
        // cout << "Не верно!" << endl;

     //if (X.Area(X) < Z.Area(Z))cout << "Верно!" << endl;
     //else
        // cout << "Не верно!" << endl;

      //if (X.Area(X) > Y.Area(Y))cout << "Верно!" << endl;
     // else
        // cout << "Не верно!" << endl;

      //if (X.Area(X) < Y.Area(Y))cout << "Верно!" << endl;
     //else
        // cout << "Не верно!" << endl;

}
//глобальная перегрузка оператора больше >
Rectangle operator> (const Rectangle& A, const Rectangle& B)
{
    //создаем пустой временный объект для хранения и возврата результата
    Rectangle Result;
    Result.SetA(A.GetA());//получаем значение поля A объекта по ссылке R через метод геттер GetA,
    Result.SetB(B.GetB());//получаем значение поля B объекта по ссылке R через метод геттер GetB,
    return Result; //возвращаем значение итогового(нового) объекта

}
//глобальная перегрузка оператора меньше <
Rectangle operator< (const Rectangle& A, const Rectangle& B)
{
    //создаем пустой временный объект для хранения и возврата результата
    Rectangle Result;
    Result.SetA(A.GetA());//получаем значение поля A объекта по ссылке R через метод геттер GetA,
    Result.SetB(B.GetB());//получаем значение поля B объекта по ссылке R через метод геттер GetB,
    return Result; //возвращаем значение итогового(нового) объекта
}