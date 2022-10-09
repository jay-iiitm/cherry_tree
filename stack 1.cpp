#include<iostream>
using namespace std;
#define Max 10
class stack
{
int top;
int arr[Max];
public:
	
	stack(){
		top=-1;
	}
	bool Isempty()
	{
		if(top==-1)
		return true;
		else
		return false;
	}
	bool Isfull()
	{
		if(top==(Max-1))
		{
		return true;
	}
		else
		{
		return false;
	}
	}
	void push(int x);
	void pop();
	void peek();
	
};
void stack::push(int x)
{
	if(Isfull())
	{
		cout << "overflow condition" << endl;
	}
	else
	{
		top++;
		arr[top]=x;
	}
}
void stack::pop()
{
	if(Isempty())
	{
		cout << " underflow condition" << endl;
	}
	else
	{
		top--;
	}
}
void stack::peek()
{
	if(Isempty())
	{
		cout << " underflow condition" << endl;
		
	}
	else
	{
		cout << arr[top] << endl;
	}
}
int main()
{
	stack a;
	a.push(5);
	a.push(6);
	a.push(7);
	a.pop();
	a.peek();
	a.push(3);
	a.push(4);
	a.push(8);
	a.push(0);
	a.push(5);
	a.push(4);
	a.push(3);
	a.push(2);
	a.peek();
	a.push(11);
	a.pop();
	a.peek();
	return 0;	
}





