#include <iostream>
#include "ColaP.h"

using namespace std;

template <typename T>
T sumar(T a, T b) {
	return a + b;
}

template <class T, class U>
class A {
public:
	T a;
	T b;
	U c;
	U d;
	A(T a, T b) : a(a), b(b) {}
	T sumar() {
		return a + b;
	}


};

int main() {
	ColaP<string> cola(5);
	cola.push("a");
	cola.push("b");
	cola.push("c");
	cola.push("d");
	cola.push("e");

	cola.imprimir();

	string aux = cola.pop();

	cola.imprimir();

	return 0;
}
