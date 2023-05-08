#include<iostream>
#include <string>

class Figure 
{
private:
    int sides;
    std::string name;
public:
    Figure(int sides) : sides(sides) {}
    Figure() {}

    virtual std::string GetName() { return name; }
    virtual bool check() { return true; }
    int GetSides() const { return sides; }

    virtual void print_myself()
    {
        std::cout << "Фигура: " << GetName() << std::endl;
        if (check()) 
        {
            std::cout << "Правильная" << std::endl;
        }
        else 
        {
            std::cout << "Неправильная" << std::endl;
        }
        std::cout << "Количество сторон: " << sides << "\n" << std::endl;
    }
};

class Triangle : public Figure
{
private:
    int a, b, c;
    int A, B, C;
    std::string name;
public:
    Triangle(int a = 0, int b = 0, int c = 0, int A = 0, int B = 0, int C = 0) : Figure(3), a(a), b(b), c(c), A(A), B(B), C(C) {}

    int get_a() { return a; }
    int get_b() { return b; }
    int get_c() { return c; }
    int get_A() { return A; }
    int get_B() { return B; }
    int get_C() { return C; }
    std::string get_name()
    {
        name = "Треугольник";
        return name;
    }
    bool check() override
    {
        return (A + B + C == 180);
    }
    void print_myself() override
    {
        std::cout << get_name() << std::endl;
        if (check())
        {
            std::cout << "Правильная" << std::endl;
        }
        else 
        {
            std::cout << "Неправильная" << std::endl;
        }
        std::cout << "Количество сторон: " << GetSides() << std::endl;
        std::cout << "Стороны: a = " << get_a() << ", b = " << get_b() << ", c = " << get_c() << "\n";
        std::cout << "Углы: A = " << get_A() << ", B = " << get_B() << ", C = " << get_C() << "\n\n";
    }
};

class RightTriangle : public Triangle 
{
private:
    int a, b, c;
    int A, B, C;
    std::string name;
public:
    RightTriangle(int a = 0, int b = 0, int c = 0, int A = 0, int B = 0, int C = 0) : Triangle(3), a(a), b(b), c(c), A(A), B(B), C(C) {}

    int get_a() { return a; }
    int get_b() { return b; }
    int get_c() { return c; }
    int get_A() { return A; }
    int get_B() { return B; }
    int get_C() { return C; }
    std::string get_name()
    {
        name = "Прямоугольный треугольник: ";
        return name;
    }
    bool check() 
    {
        return (C == 90);
    }
    void print_myself() override
    {
        std::cout << get_name() << std::endl;
        if (check()) 
        {
            std::cout << "Правильная" << std::endl;
        }
        else 
        {
            std::cout << "Неправильная" << std::endl;
        }
        std::cout << "Количество сторон: " << GetSides() << std::endl;
        std::cout << "Стороны: a = " << get_a() << ", b = " << get_b() << ", c = " << get_c() << "\n";
        std::cout << "Углы: A = " << get_A() << ", B = " << get_B() << ", C = " << get_C() << "\n\n";
    }
};
class IsoscelesTriangle : public Triangle 
{
private:
    int a, b, c;
    int A, B, C;
    std::string name;
public:
    IsoscelesTriangle(int a = 0, int b = 0, int c = 0, int A = 0, int B = 0, int C = 0) : Triangle(3), a(a), b(b), c(c), A(A), B(B), C(C) {}

    int get_a() { return a; }
    int get_b() { return b; }
    int get_c() { return c; }
    int get_A() { return A; }
    int get_B() { return B; }
    int get_C() { return C; }
    std::string get_name()
    {
        name = "Равнобедренный треугольник: ";
        return name;
    }
    bool check() 
    {
        return (A == C && a == c);
    }
    void print_myself() override
    {
        std::cout << get_name() << std::endl;
        if (check()) 
        {
            std::cout << "Правильная" << std::endl;
        }
        else 
        {
            std::cout << "Неправильная" << std::endl;
        }
        std::cout << "Количество сторон: " << GetSides() << std::endl;
        std::cout << "Стороны: a = " << get_a() << ", b = " << get_b() << ", c = " << get_c() << "\n";
        std::cout << "Углы: A = " << get_A() << ", B = " << get_B() << ", C = " << get_C() << "\n\n";
    }
};

class EquilateralTriangle : public Triangle 
{
private:
    int a, b, c;
    int A, B, C;
    std::string name;
public:
    EquilateralTriangle(int a = 0, int b = 0, int c = 0, int A = 0, int B = 0, int C = 0) : Triangle(3), a(a), b(b), c(c), A(A), B(B), C(C) {}

    int get_a() { return a; }
    int get_b() { return b; }
    int get_c() { return c; }
    int get_A() { return A; }
    int get_B() { return B; }
    int get_C() { return C; }
    std::string get_name()
    {
        name = "Равносторонний треугольник: ";
        return name;
    }
    bool check() 
    {
        return ((a == b && b == c) && (A == B && B == C));
    }
    void print_myself() override
    {
        std::cout << get_name() << std::endl;
        if (check()) 
        {
            std::cout << "Правильная" << std::endl;
        }
        else
        {
            std::cout << "Неправильная" << std::endl;
        }
        std::cout << "Количество сторон: " << GetSides() << std::endl;
        std::cout << "Стороны: a = " << get_a() << ", b = " << get_b() << ", c = " << get_c() << "\n";
        std::cout << "Углы: A = " << get_A() << ", B = " << get_B() << ", C = " << get_C() << "\n\n";
    }
};

class Quadrilateral : public Figure 
{
private:
    int a, b, c, d;
    int A, B, C, D;
    std::string name;
public:
    Quadrilateral(int a = 0, int b = 0, int c = 0, int d = 0, int A = 0, int B = 0, int C = 0, int D = 0) :
        Figure(4), a(a), b(b), c(c), d(d), A(A), B(B), C(C), D(D) {}

    int get_a() { return a; }
    int get_b() { return b; }
    int get_c() { return c; }
    int get_d() { return d; }
    int get_A() { return A; }
    int get_B() { return B; }
    int get_C() { return C; }
    int get_D() { return D; }
    std::string get_name()
    {
        name = "Четырёхугольник: ";
        return name;
    }
    bool check() 
    {
        return (A + B + C + D == 360);
    }
    void print_myself() override
    {
        std::cout << get_name() << std::endl;
        if (check()) 
        {
            std::cout << "Правильная" << std::endl;
        }
        else 
        {
            std::cout << "Неправильная" << std::endl;
        }
        std::cout << "Количество сторон: " << GetSides() << std::endl;
        std::cout << "Стороны: a = " << get_a() << ", b = " << get_b() << ", c = " << get_c() << ", d = " << get_d() << "\n";
        std::cout << "Углы: A = " << get_A() << ", B = " << get_B() << ", C = " << get_C() << ", D = " << get_D() << "\n\n";
    }
};

class Rectangle : public Quadrilateral 
{
private:
    int a, b, c, d;
    int A, B, C, D;
    std::string name;
public:
    Rectangle(int a = 0, int b = 0, int c = 0, int d = 0, int A = 0, int B = 0, int C = 0, int D = 0) :
        Quadrilateral(4), a(a), b(b), c(c), d(d), A(A), B(B), C(C), D(D) {}

    int get_a() { return a; }
    int get_b() { return b; }
    int get_c() { return c; }
    int get_d() { return d; }
    int get_A() { return A; }
    int get_B() { return B; }
    int get_C() { return C; }
    int get_D() { return D; }
    std::string get_name()
    {
        name = "Прямоугольник: ";
        return name;
    }
    bool check() 
    {
        return (a == c && b == d && A == 90 && B == 90 && C == 90 && D == 90);
    }
    void print_myself() override
    {
        std::cout << get_name() << std::endl;
        if (check()) 
        {
            std::cout << "Правильная" << std::endl;
        }
        else 
        {
            std::cout << "Неправильная" << std::endl;
        }
        std::cout << "Количество сторон: " << GetSides() << std::endl;
        std::cout << "Стороны: a = " << get_a() << ", b = " << get_b() << ", c = " << get_c() << ", d = " << get_d() << "\n";
        std::cout << "Углы: A = " << get_A() << ", B = " << get_B() << ", C = " << get_C() << ", D = " << get_D() << "\n\n";
    }
};

class Square : public Quadrilateral 
{
private:
    int a, b, c, d;
    int A, B, C, D;
    std::string name;
public:
    Square(int a = 0, int b = 0, int c = 0, int d = 0, int A = 0, int B = 0, int C = 0, int D = 0) :
        Quadrilateral(4), a(a), b(b), c(c), d(d), A(A), B(B), C(C), D(D) {}

    int get_a() { return a; }
    int get_b() { return b; }
    int get_c() { return c; }
    int get_d() { return d; }
    int get_A() { return A; }
    int get_B() { return B; }
    int get_C() { return C; }
    int get_D() { return D; }
    std::string get_name()
    {
        name = "Квадрат: ";
        return name;
    }
    bool check() 
    {
        return (a == b && b == c && c == d && A == 90 && B == 90 && C == 90 && D == 90);
    }
    void print_myself() override
    {
        std::cout << get_name() << std::endl;
        if (check()) 
        {
            std::cout << "Правильная" << std::endl;
        }
        else 
        {
            std::cout << "Неправильная" << std::endl;
        }
        std::cout << "Количество сторон: " << GetSides() << std::endl;
        std::cout << "Стороны: a = " << get_a() << ", b = " << get_b() << ", c = " << get_c() << ", d = " << get_d() << "\n";
        std::cout << "Углы: A = " << get_A() << ", B = " << get_B() << ", C = " << get_C() << ", D = " << get_D() << "\n\n";
    }
};

class Parallelogram : public Quadrilateral 
{
private:
    int a, b, c, d;
    int A, B, C, D;
    std::string name;
public:
    Parallelogram(int a = 0, int b = 0, int c = 0, int d = 0, int A = 0, int B = 0, int C = 0, int D = 0) :
        Quadrilateral(4), a(a), b(b), c(c), d(d), A(A), B(B), C(C), D(D) {}

    int get_a() { return a; }
    int get_b() { return b; }
    int get_c() { return c; }
    int get_d() { return d; }
    int get_A() { return A; }
    int get_B() { return B; }
    int get_C() { return C; }
    int get_D() { return D; }
    std::string get_name()
    {
        name = "Параллелограм: ";
        return name;
    }
    bool check() 
    {
        return (a == c && b == d && A == C && B == D);
    }
    void print_myself() override
    {
        std::cout << get_name() << std::endl;
        if (check()) 
        {
            std::cout << "Правильная" << std::endl;
        }
        else
        {
            std::cout << "Неправильная" << std::endl;
        }
        std::cout << "Количество сторон: " << GetSides() << std::endl;
        std::cout << "Стороны: a = " << get_a() << ", b = " << get_b() << ", c = " << get_c() << ", d = " << get_d() << "\n";
        std::cout << "Углы: A = " << get_A() << ", B = " << get_B() << ", C = " << get_C() << ", D = " << get_D() << "\n\n";
    }
};

class Rhombus : public Quadrilateral 
{
private:
    int a, b, c, d;
    int A, B, C, D;
    std::string name;
public:
    Rhombus(int a = 0, int b = 0, int c = 0, int d = 0, int A = 0, int B = 0, int C = 0, int D = 0) :
        Quadrilateral(4), a(a), b(b), c(c), d(d), A(A), B(B), C(C), D(D) {}

    int get_a() { return a; }
    int get_b() { return b; }
    int get_c() { return c; }
    int get_d() { return d; }
    int get_A() { return A; }
    int get_B() { return B; }
    int get_C() { return C; }
    int get_D() { return D; }
    std::string get_name()
    {
        name = "Ромб: ";
        return name;
    }
    bool check() {
        return (a == c && b == d && A == C && B == D);
    }
    void print_myself() override
    {
        std::cout << get_name() << std::endl;
        if (check()) 
        {
            std::cout << "Правильная" << std::endl;
        }
        else 
        {
            std::cout << "Неправильная" << std::endl;
        }
        std::cout << "Количество сторон: " << GetSides() << std::endl;
        std::cout << "Стороны: a = " << get_a() << ", b = " << get_b() << ", c = " << get_c() << ", d = " << get_d() << "\n";
        std::cout << "Углы: A = " << get_A() << ", B = " << get_B() << ", C = " << get_C() << ", D = " << get_D() << "\n\n";
    }
};
void print_info(Figure* figure)
{
    figure->print_myself();
}
int main() 
{
    setlocale(LC_ALL, "Russian");
    Figure figure(0);
    figure.print_myself();
    Triangle triangle(10, 20, 30, 50, 60, 70);
    print_info(&triangle);
    RightTriangle righttriangle(10, 20, 30, 50, 60, 90);
    print_info(&righttriangle);
    IsoscelesTriangle isoscelestriangle(10, 20, 10, 50, 60, 50);
    print_info(&isoscelestriangle);
    EquilateralTriangle equilateraltriangle(30, 30, 30, 60, 60, 60);
    print_info(&equilateraltriangle);
    Quadrilateral quadrilateral(10, 20, 30, 40, 50, 60, 70, 80);
    print_info(&quadrilateral);
    Rectangle rectangle(10, 20, 10, 20, 90, 90, 90, 90);
    print_info(&rectangle);
    Square square(20, 20, 20, 20, 90, 90, 90, 90);
    print_info(&square);
    Parallelogram parallelogram(20, 30, 20, 30, 30, 40, 30, 40);
    print_info(&parallelogram);
    Rhombus rhombus(30, 30, 30, 30, 30, 40, 30, 40);
    print_info(&rhombus);
    return 0;
}