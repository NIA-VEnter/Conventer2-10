#include <iostream>
#include <vector>
#include <list>

using namespace std;


int main_funktion(unsigned long int a);


int main() {
	unsigned long int a;
	cin >> a;

	main_funktion(a);
	
	return 0;
};



 int main_funktion(unsigned long int a) {
	unsigned long int count_a = 0;
	unsigned long int a1 = a;
	unsigned long int final_int = 0;
	//cout << a << " - " << a1 << endl;

	//lenght of int
	while (a1 > 0)
	{
		
		a1 /= 10;
		count_a++;
		
	};
	//cout << count_a;

	
	//int to list
	vector<unsigned long int> arr_a;
	a1 = a;

	while (a1 > 0) {
		//cout << a1 << endl << a << endl;


		arr_a.push_back(a1 % 10);
		a1 /= 10;
	}
	list<unsigned long int> arr_a1(arr_a.begin(), arr_a.end());


	/*for (auto v : arr_a1)
		cout << v << endl;*/


	unsigned long int i = 0;
	
	//main

	unsigned long int it;
	for (unsigned long int it : arr_a1) {
		if (it == 0) {
			i++;
			continue;

			
				
		};

		

		
		
		final_int += pow(2, i);
		i++;
		}
	
	


	cout << final_int;



	return 0;
};