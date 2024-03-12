#pragma once
#include <iostream>

using namespace std;

template <typename T>
class ColaP
{
private:
	T* cola;
	int primero;
	int ultimo;
	int tamano;

public:
	ColaP(int tamano);
	~ColaP();
	void push(T dato);
	T pop();
	int getPrimero();
	bool estaVacia();
	void imprimir();
};

template<typename T> 
inline ColaP<T>::ColaP(int _tamano)
{
	tamano = _tamano;
	cola = new T[tamano];
	primero = -1;
	ultimo = -1;
}

template<typename T>
inline ColaP<T>::~ColaP()
{
	delete[] cola;
}

template<typename T>
inline void ColaP<T>::push(T dato)
{
	if (estaVacia())
	{
		primero = 0;
	}
	if (ultimo < tamano - 1)
	{
		ultimo++;
		cola[ultimo] = dato;
	}
	else
	{
		cout << "La cola esta llena" << endl;
	}
}

template<typename T>
inline T ColaP<T>::pop()
{
	if (!estaVacia())
	{
		T dato = cola[primero];
		if (primero == ultimo)
		{
			primero = -1;
			ultimo = -1;
		}
		else
		{
			primero++;
		}
		return dato;
	}
	else
	{
		cout << "La cola esta vacia" << endl;
	}	
}

template<typename T>
inline int ColaP<T>::getPrimero()
{
	return primero;
}

template <typename T>
inline bool ColaP<T>::estaVacia()
{
	return primero == -1 && ultimo == -1;
}


template<typename T>
inline void ColaP<T>::imprimir()
{
	if (!estaVacia())
	{
		for (int i = primero; i <= ultimo; i++)
		{
			cout << cola[i] << " ";
		}
		cout << endl;
	}
	else
	{
		cout << "La cola esta vacia" << endl;
	}
}