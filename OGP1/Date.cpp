#include <iostream>

class Date 
{
public:
	Date(int dag, int maand, int jaar);  //constructor//
	Date() = default;  //default constructor//
	void printDate() const;
	void setDate();
private:
	int m_dag;
	int m_maand;
	int m_jaar;
};

Date::Date(int dag, int maand, int jaar) : m_dag{ dag }, m_maand{ maand }, m_jaar{ jaar } {}

void Date::printDate() const 
{
	std::cout << "Date: " << m_dag << '/' << m_maand << '/' << m_jaar << '\n';
}

void Date::setDate()
{
	std::cout << "Enter day, month and year: ";
	std::cin >> m_dag;
	std::cin >> m_maand;
	std::cin >> m_jaar;
}

int main() {
	Date date;
	date.setDate();
	date.printDate();

	return 0;
}