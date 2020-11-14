#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int maxInt(vector<int>& vec, const int size)
{
	int maxnum = vec[0];
	for (int i = 1; i<size; i++)
	{
		if (maxnum < vec[i])
		{
			maxnum = vec[i];
		}
	}
	return maxnum;
}

int main()
{
	int size;
	vector<int>::iterator result;

	cout << "Enter the size of the array" << endl;
	cin >> size;

	vector<int> v1(size);

	cout << "Please enter elements " << endl;

	auto filling = [&v1](const int size)
	{
		for (int i = 0; i < size; i++)
		{
			cin >> v1[i];
		}
	};

	filling(size);

	for_each(v1.begin(), v1.end(), [](int elem) {cout << elem << " "; });
	cout << endl;

	//maxInt(v1,size);
	cout << "The biggest number is " << maxInt(v1, size) << endl;
	
	result = max_element(v1.begin(), v1.end());

	cout << "max element at: " << *result << endl;
}