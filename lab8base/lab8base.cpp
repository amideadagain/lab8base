#include "pch.h"
#include <iostream>
#include <list>

int main()
{
	std::list<float> flist{ 1,2,3,-1,3,-4,4,-4,-2,5,5 };
	std::list<float> reslist;
	bool flag = false;
	for (auto& iter : flist)
	{
		if (!flag)
		{
			reslist.push_back(iter);
		}
		flag = iter < 0;
	}
	for (auto& iter : reslist)
	{
		std::cout << iter << '\n';
	}
}