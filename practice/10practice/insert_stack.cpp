#include<iostream>

void StackSort(AStack<int>& IN)
{
	AStact<int> Temp1, Temp2;

	while (!IN.isEmpty())
		Temp1.push(IN.pop());
	IN.push(Temp1.pop());
	while(!Temp1.isEmpty())\
	{
		while(IN.pop())
	}
}
