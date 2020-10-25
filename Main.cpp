#include <SFML/Graphics.hpp>
#include<iostream>
using namespace sf;
using namespace std;

int main() {
	Image img;
	string path;
	cout << "Path to File:";
	cin >> path;
	img.loadFromFile(path);
	for (int x = 0;x < img.getSize().x;x++) {
		for (int y = 0;y < img.getSize().y;y++) {
				if (img.getPixel(x, y) == Color::White) {	
				img.setPixel(x, y, Color::Transparent);		
				}
			}
		}
	}
	path.insert(path.find('.png') - 3, "(T)");
	img.saveToFile(path);
	cout << "All done!\n";
	char v;
	cin >> v;
}
