#include <iostream>
#include <vector>
#include <string>

class Rectangle
{
	double width;
	double length;
	
public :
	double get_width()
	{
		return width;
	}
	double get_length()
	{
		return length;
	}
	double area()
	{
		return width*length;
	}
};

class Husky
{	public:
	void Bark()
	{
		std::cout << "Hong Hong!";
	}
};
class Puddle
{	public:
	void Bark()
	{
		std::cout<< "Boo Boo!!";
	}
};
class Tree
{	public:
	void Bark()
	{
		std::cout<< "The outter skin of the trunk of the tree";

	}
};
class Shape
{	public:
	class Block
	{
		double length;
		double width;
		double height;
	
	//Constructor
	Block() {}
	Block(double l, double w, double h)
	{
		length = l; width = w; height = h;
	}
	//Functions
	double volume()
	{return length*width*height;
	}

	};
	
	class Sphere
	{
		double radius;
	Sphere()
	{
		
	}
	Sphere(double r)
	{
		radius = r;
	}
	//Methods
	double volume()
	{
		return 		(4.0/3.0)*3.14*radius*radius*radius;
	}
	void add_radius(double r)
	{
		radius = r;
	}
	
	};
};



int main()
{
Husky::Bark();
Puddle::Bark();
Tree::Bark();
Shape::Block myBlock(6,7,12);
Shape::Sphere wongKlom(1);

std::cout<< myBlock.width<< std::endl;
std::cout << myBlock.volume() << std::endl;
std::cout << wongKlom.volume()<< std::endl;
wongKlom.add_radius(2);
std::cout << wongKlom.volume() << std::endl;
return 0;
}