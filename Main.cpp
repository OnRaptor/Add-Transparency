#include <SFML/Graphics.hpp>
#include<iostream>
using namespace sf;
using namespace std;

int main() {
	Image img;
	string dir;
	cout << "Path to File:";
	cin >> dir;
	img.loadFromFile(dir);
	for (int x = 0;x < img.getSize().x;x++) {
		for (int y = 0;y < img.getSize().y;y++) {
			if (img.getPixel(x, y) == Color::White) {
				img.setPixel(x, y, Color::Transparent);
			}
		}
	}
	dir.insert(dir.find('.png') - 3, "(T)");
	img.saveToFile(dir);
	cout << "All done!\n";
	char v;
	cin >> v;
}
