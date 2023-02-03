#include <iostream>

class Pen {
	public:
		std::string color;
};

int main() {
	using namespace std;
	cout << "Test v4.011: OK.\n";
	Pen pen;
	pen.color = "#FFFFFF";
	cout << "Color of pen: " << pen.color << endl;
	return 0;
}
