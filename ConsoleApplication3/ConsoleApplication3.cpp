#include <iostream>
#include <string>
#include <memory>

using namespace std;

/*
template <typename T>

class Image {
	
protected:
	int x;
	int y;
	int size;
	int* arr;

public:

	Image(int x, int y) {
		this->x = x;
		this->y = y;
		size = x * y;
		arr = new int[size];
		for (int i = 0; i < size; i++) {
			*(arr + i) = 0;
		}
		cout << "конструктор вызывается" << endl;
	}
	~Image() {
		cout << endl;
		cout << "вызвался диструктор" << endl;
		delete[] arr;

	}
	Image(const Image& other) : x(other.x), y(other.y)
	{
		this->x = other.x;
		this->y = other.y;
		this->size = other.size;
		cout << "вызвался конструктор копирования" << endl;
		this->arr = new int[size];
		for (int i = 0; i < other.size; i++)
			*(arr + i) = *(other.arr + i);
	}

	Image& operator = (const Image& other) {

		cout << "вызвался оператор присваивания" << endl;
		this->size = other.size;
		if (this->arr != nullptr) {

			delete[] this->arr;

		}
		this->arr = new int[size];
		for (int i = 0; i < other.size; i++)
			*(arr + i) = *(other.arr + i);
		return *this;
	}

	bool operator== (const Image& other) {
		if (this->x != other.x || this->y != other.y)
			return false;
		for (int i = 0; i < other.x * other.y; i++) {
			if (this->arr[i] != other.arr[i]) {
				return false;
				break;
			}
		}
	}

	bool operator!= (const Image& other) {
		if (this->x != other.x || this->y != other.y)
			return true;
		int i = 0;
		while (this->arr[i] == other.arr[i]) {
			i++;
			if (i == other.x * other.y) break;
		}
		if (this->arr[i] == other.arr[i]) {
			return false;
		}
	}

	int GetX() {

		return x;

	}
	void SetX(int x) {

		this->x = x;


	}
	int GetY() {
		return y;

	}
	void SetY(int y) {

		this->y = y;

	}
	void Set(int mx, int my, T color) {

		if (mx > x | mx<0 | my>x | my < 0)
		{
			throw exception("попытка записи за пределами изображения");
		}

		arr[(mx - 1) * y + my - 1] = color;

	}
	int Get(int mx, int my) {

		if (mx > x | mx<0 | my>x | my < 0)
		{
			throw exception("попытка чтения за пределами изображения");
		}
		
		return arr[(mx - 1) * y + my - 1];

	}
	void Show() {
		for (int i = 0; i < size; i++) {
			cout << arr[i];
			if (i % y == y - 1)
				cout << endl;
		}

	}
	void drawhorizontal(int number, T color) {
		for (int i = (number - 1) * y; i < (number - 1) * y + y; i++) {
			arr[i] = color;
		}
	}
	
};

template <typename T>	
class Pixel : public Image<int>
{
public:
	
	Pixel(int r, int g, int b) : Image(x, y)
	{
		this->r = r;
		this->g = g;
		this->b = b;
		color = (r + g + b) / 85;
		if (color > 255 | color<0)
		{
			throw exception("R, G, B can't be more than 255/less than 0");	
		}
		cout << "color = " << color << endl;
	}
	void SetColor(T r, T g, T b)
	{
		this->r = r;
		this->g = g;
		this->b = b;	
	}
	void Print()
	{
		cout << r << g << b << endl;
	}
	operator int() { return color; }
private:
	int r;
	int g;
	int b;
	int color;
};*/

template<typename T>
class SmartPointer
{
public:
	SmartPointer(T* ptr)
	{
		this->ptr = ptr;
	}
	~SmartPointer()
	{
		delete ptr;
	}
	T& operator*()
	{
		return *ptr;
	}
private:
	T* ptr;
};

int main() 
{
	setlocale(0, "ru");
	/*Pixel<int> px(2, 200, 255);
	Image<int> a(10, 10);
	a.drawhorizontal(3, px);
	a.Show();
	

	/*Image c(10, 10);
	c = b = a;
	c.Show();

	Image b(10, 10);
	string result;
	if (a != b) {
		result = "неравно";

		}
	else {
		result = "равно";
	}
	cout << "result = " << result << endl;*/
	/*
	try
	{
		a.Set(9, 9, 1);
	}
	catch (const exception& ex)
	{
		cout << ex.what() << endl;
	}
	*/

	shared_ptr<int> ap1(new int(5));

	shared_ptr<int> ap2(ap1);

	


	return 0;
	system("pause");

}
