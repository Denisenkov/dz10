#ifndef KKK_H
#define KKK_H
#include <iostream>
using namespace std;

class hum {
protected:
	int i;
	string a;
	string b;
	string c;
public:

	hum() {
		cout << "vvedite familiu\n";
		cin >> a;
		cout << "vvedite imia\n";
		cin >> b;
		cout << "vvedite otchestvo\n";
		cin >> c;
		cout << "vvedite vozvrast\n";
		cin >> i;
	};
	hum(string x, string y, string z, int j) {
		a = x;
		b = y;
		c = z;
		i = j;
	};
	virtual ~hum() {};
	void couth() {};

};
class stud :hum {
protected:
	bool l;
public:
	stud() :hum() {
		cout << "vvedite otvet na vopros na pare li student?\n";
		cin >> l;
	};
	stud(string x, string y, string z, int j, bool p) :hum(x, y, z, j) {
		l = p;
	};
	void couth() {
		cout << "FIO : " << a << " " << b << " " << c << " \n";
		cout << "vozvrast : " << i << " \n";
		if (l)cout << "na pare\n";
		else { cout << "ne na pare\n"; }
	}
};
class boss :hum {
protected:
	int v;
public:
	boss() :hum() {
		cout << "vvedite kol-vo rabochih\n";
		cin >> v;
	};
	boss(string x, string y, string z, int j, int m) :hum(x, y, z, j) {
		v = m;
	};
	void couth() {
		cout << "FIO : " << a << " " << b << " " << c << " \n";
		cout << "vozvrast : " << i << " \n";
		cout << "kol-vo rabochih : " << v << "\n";
	}
};
#endif

