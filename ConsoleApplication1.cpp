#include <iostream>
#include <string>
using namespace std;
class Dog {
private:
	string Breed;
	string Age;
public:
	string Size;
	string Color;
public:
	Dog() { cout << "Create person"; };
	Dog(string s) { Breed = s; };
	Dog(string s, string u) { Breed = s; Age = u; };
	Dog(string s, string u, string q) { Breed = s; Age = u; Color = q; };
	Dog(string s, string u, string q, string g) { Breed = s; Age = u; Color = q; Size = g; };
	void setName(string s) { Breed = s; };
	void setAge(string u) { Age = u; };
	string getName() { return Breed; };
	string getAge() { return Age; };
	void hello() { cout << endl << "hello"; }
	void info() { cout << endl << "Кличка собаки  " << " " << getName() << endl << "Возраст собаки  " << getAge() << endl << "Размер собаки  " << " " << Size << endl << "Цвет собаки  " << "   " << Color << endl; }
};

class OverLord :public Dog {

};

int main() {
	setlocale(LC_ALL, "Russian");
	int a, b;
	string c, d, f, g;
	OverLord q;
	cout << "Выберите владельца собаки\n1-владелец Мастиффа\n2-владелец Малтиса\n3-владелец Чо Чо\n4-какая-то собака \n\n";
	cin >> a;
	if (a == 1) {
		Dog x("Neapolitan Mastiff", "5 years");
		x.Size = "Large";
		x.Color = "Black";
		x.info();
	}
	else if (a == 2) {
		Dog y("Maltese", "2 years", "White");
		y.Size = "Small";
		y.info();
	}
	else if (a == 3) {

		Dog z("Chow Chow", "3 years", "Brown", "Medium");
		z.info();
	}
	else {
		cout << "Знаете ли вы её??\n\n1-Знакомая\n2-Не, обознался\n";
		cin >> b;
		if (b == 1) {
			cout << "Введите её кличку\n";
			cin >> c;
			cout << "Введите её возраст\n";
			cin >> d;
			cout << "Введите её цвет\n";
			cin >> g;
			cout << "Введите её размер\n";
			cin >> f;
			Dog r(c, d, g, f);
			r.info();
		}
		else {
			cout << "Введите её цвет\n";
			cin >> f;
			cout << "Введите её размер\n";
			cin >> g;
			Dog u(c, d, f, g);
			u.info();
		}
	}
	return 0;
}
