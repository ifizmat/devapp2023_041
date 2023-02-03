#include <iostream>

class Pen {
	private:
		std::string _color;
		
	public:
		void setColor(std::string code);
		std::string getColor() { return _color; }
};

void Pen::setColor(std::string code) {
	_color = code;
}

int main() {
	using namespace std;
	cout << "Test v4.011: OK.\n";
	Pen pen;
	//pen._color = "#FFFFFF";
	pen.setColor("#FFFFFF");
	cout << "Color of pen: " << pen.getColor() << endl;
	//cout << "Color of pen: " << pen._color << endl;
	return 0;
}
