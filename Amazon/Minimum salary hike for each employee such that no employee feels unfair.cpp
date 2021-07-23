// C++ program for the above approach

#include <bits/stdc++.h>
using namespace std;
#define INF 1e9

// Function that print minimum hike
void findMinHike(vector<int> arr,
				int n)
{

	// Insert INF at begin and
	// end of array
	arr.insert(arr.begin(), INF);
	arr.push_back(INF);

	// To store hike of each employee
	vector<int> hike(n + 2, 0);

	// for Type 1 employee
	for (int i = 1; i <= n; i++) {

		if (arr[i - 1] >= arr[i]
			&& arr[i] <= arr[i + 1]) {
			hike[i] = 1;
		}
	}

	// for Type 2 employee
	for (int i = 1; i <= n; i++) {
		if (arr[i - 1] < arr[i]
			&& arr[i] <= arr[i + 1]) {
			hike[i] = hike[i - 1] + 1;
		}
	}

	// for Type 3 employee
	for (int i = 1; i <= n; i++) {
		if (arr[i - 1] >= arr[i]
			&& arr[i] > arr[i + 1]) {
			hike[i] = hike[i + 1] + 1;
		}
	}

	// for Type 4 employee
	for (int i = 1; i <= n; i++) {
		if (arr[i - 1] < arr[i]
			&& arr[i] > arr[i + 1]) {
			hike[i] = max(hike[i - 1],
						hike[i + 1])
					+ 1;
		}
	}

	// Print the min hike for each employee
	for (int i = 1; i <= n; i++) {
		cout << hike[i] << " ";
	}
}

// Driver Code
int main()
{
	// Given array of rating of employees
	vector<int> arr = { 5, 3, 4, 2, 1, 6 };

	// Function Call
	findMinHike(arr, arr.size());

	return 0;
}
