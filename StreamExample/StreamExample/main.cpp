// first main function

#include <stdio.h>
#include <iostream>
#include <fstream>

struct Vector2D
{
	int x;
	int y;

	void print()
	{
		printf("%d %d", x, y);
	}
};

using namespace std;

std::ostream &operator <<(ostream &stream, Vector2D obj)
{
	stream << obj.x << " " << obj.y << endl;
	return stream;
}

void main()
{
	Vector2D my_vector;
	
	my_vector.x = 1;
	my_vector.y = 2;

	/*FILE *of = fopen("cstyle.txt", "w");

	fprintf(of, "%d %d", my_vector.x, my_vector.y);
	fclose(of);*/
	//my_vector.print();
	//printf("This is c style!\n");

	//std::cout << "This is c++ style!" << std::endl;

	cout << my_vector << endl;

	ofstream ofile("cppstyle.txt");
	ofile << my_vector << endl;
}