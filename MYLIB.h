#ifndef MYLIB
#define MYLIB

template<class T, int n>
class STACK
{
private: T a[n];
		 int counter;
public:
	void clearStack();
	bool isEmpty();
	bool isFull();
	void pushStack(T x);
	T popStack();
};
template<class T, int n>
void STACK<T, n>::clearStack()
{
	counter = 0;
}
template<class T, int n>
bool STACK<T, n>::isEmpty()
{
	return (counter == 0) ? true : false;
}
template<class T, int n>
bool STACK<T, n>::isFull()
{
	return (counter == n) ? true : false;
}
template<class T, int n>
void STACK<T, n>::pushStack(T x)
{
	a[counter] = x, counter++;
}
template<class T, int n>
T STACK<T, n>::popStack()
{
	counter--; return a[counter];
}
#endif // !MYLIB


