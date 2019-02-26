#include <iostream>
#include <string>
#include <vector>

class Sorter {
public:
	void bubbleSort(std::vector<int> &array);  //bug1: er werd enkel een kopie aangepast, niet de originele array
	void arrayPrinter(const std::vector<int> &array);

private:
	void swap(int&a, int&b);
};


void Sorter::bubbleSort(std::vector<int> &array) {
	int length = array.size();
	bool isSorted = false;

	while (!isSorted) {  //bug2: moet while not sorted zijn want anders loopt de while maar 1 keer over de array
		isSorted = true;

		for (int i = 0; i < length - 1; i++) {  //bug3: length - 1 want anders out of bounds

			if (array[i] > array[i + 1]) {
				swap(array[i], array[i + 1]);
				isSorted = false;
			}
		}
	}
}


void Sorter::swap(int&a, int&b) {
	int temp = a;
	a = b;
	b = temp;
}


void Sorter::arrayPrinter(const std::vector<int> &array) {
	for (int i = 0, l = array.size(); i < l; i++) {
		std::cout << array[i] << ' ';
	}

	std::cout << std::endl;
}


int main() {
	std::vector<int> array{ 4, 3, 5, 7, 6, 8, 2, 1 };
	Sorter s{};

	s.arrayPrinter(array);
	s.bubbleSort(array);
	s.arrayPrinter(array);

	return 0;
}