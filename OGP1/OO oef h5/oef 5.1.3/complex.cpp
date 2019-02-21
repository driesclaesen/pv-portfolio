#include <iostream>

class Complex {
public:
	Complex(int reele, int imaginaire);

	void print() const;
	void sum(int reele, int imaginaire);
private:
	int m_reele;
	int m_imaginaire;
};

Complex::Complex(int reele, int imaginaire) : m_reele{ reele }, m_imaginaire{ imaginaire } {}

void Complex::print() const {
	std::cout << m_reele << " + " << m_imaginaire << 'i' << '\n';
}

void Complex::sum(int reele, int imaginaire) {
	m_reele += reele;
	m_imaginaire += imaginaire;
}

int main() {
	Complex complexNumber{ 5, 4 };  //call constructor
	complexNumber.sum(1, 3);
	complexNumber.print();

	return 0;
}