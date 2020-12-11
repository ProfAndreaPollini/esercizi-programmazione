#include <iostream>


int main()
{
	int values[5] = {1,2,3,5,4};

	int max_value = values[0];

	for (int i =0; i < 5;i++){
		if(values[i] > max_value) {
			max_value = values[i];
		}
	}

	std::cout << "max value = "<< max_value << std::endl;

	return 0;
}