Разработать программу по объектно - ориентированной технологии с
использованием дружественных функций.Создать класс Точка с полями
координаты x и y.И класс Парабола с полями  коэффициент а перед x 2,
коэффициент b перед x и свободный член c(y = ax 2 + bx + c).Для каждого класса
написать конструктор с параметрами, метод для вывода на экран.Для Параболы
еще написать метод нахождения координат ее вершины(функция ничего не
	возвращает, вывод в самом методе.Создать дружественную обоим классам
	функцию, которая проверяет, лежит ли точка на параболе.
	Создать по одному объекту каждого класса и вызвать все методы каждого
	класса и дружественную функцию с соответствующими комментариями.

#include iostream

using namespace std;

class Parabola;

class Dot {
private
	double x;
	double y;
public
	Dot(double x1, double y2)
	{
		x = x1;
		y = y2;
	}

	void print()
	{
		cout  Точка   (  x  ,   y  )  endl;
	}

	friend bool dot_parabola(const Parabola &parabola, const Dot &dot);

};

class Parabola {
private
	double a;
	double b;
	double c;
public
	Parabola(double a1, double b1, double c1)
	{
		a = a1;
		b = b1;
		c = c1;
	}

	void print()
	{
		cout  Парабола   a  x^2   +   b  x   +   c  endl;
	}

	void peaks(Parabola)
	{
		double x0 = (-1  b)  (2  a);
		double y0 = (((a  (x0  x0)) + (b  x0)) + c);

		cout  Вершины параболы   x0   x0   y0   y0  endl;
	}

	friend bool dot_parabola(const Parabola &parabola, const Dot &dot);
};

bool dot_parabola(const Parabola &parabola, const Dot &dot)
{
	double y = (parabola.a  (dot.x  dot.x)) + (parabola.b  dot.x) + parabola.c;

	if (y == dot.y)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	setlocale(LC_ALL, ru);

	Dot dot(5, 9);
	dot.print();

	Parabola parabola(2, 3, 4);
	parabola.print();
	parabola.peaks(parabola);

	if (dot_parabola(parabola, dot)  0)
	{
		cout  Точка лежит в параболе;
	}
	else
	{
		cout  Точка не лежит в параболе;

	}
}
