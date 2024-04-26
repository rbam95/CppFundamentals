#include <iostream>

class Shape {

	public:

		double area;

		double volume;


};

class Cube : public Shape {

	public: 

		double side;

		Cube(double side) 
		
		{
			this -> side = side;

			this-> area = side * side;

			this->volume = side * side * side;




		}

};

class Sphere : public Shape {

public:

	double radius;

	Sphere(double radius)

	{

		this->radius = radius;

		this->area = 4 * 3.14159 * (radius * radius);

		this->volume = (4 / 3) * 3.14159 * (radius * radius * radius);


	};

};

int main() {

	Cube cube(10);

	Sphere sphere(5);


	std::cout << "The area of the cube is " << cube.area << " sq.cm. " << "And the volume of the cube is " << cube.volume << " cu.cm." << std::endl;

	std::cout << "The area of the sphere is " << sphere.area << " sq.cm. " << "And the volume of the sphere is " << sphere.volume << " cu.cm." << std::endl;




}