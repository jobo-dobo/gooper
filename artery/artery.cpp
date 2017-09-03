/**********************************************
 * Artery Program
 * Author: Jonathon Zeitler
 * Created: 08/19/2017
 **********************************************/
  
#include <iostream>
#include <fstream>	// Standard library for i/o file streams
#include <string>	// Standard library for handy string functions

using namespace std;

// Picture struct
struct Picture
{
	string title;
	int height;
	int width;
	char *pic;
	string caption;
};

Picture create_picture(string title, int height, int width, string caption);
void print_picture(Picture picture);

int main()
{
	Picture picture = create_picture("My Poop",10,40,"Mine poop doth life.");
	print_picture(picture);
	
	return 0;
}

/***************************************************
 * create_picture
 * param	: title - title of picture
 *			  height - height of picture
 *			  width - width of picture
 *			  caption - caption to picture
 * returns	: created Picture
 ***************************************************/
Picture create_picture(string title, int height, int width, string caption)
{
	int size = height * width;
	
	Picture picture;
	picture.title = title;
	picture.height = height;
	picture.width = width;
	picture.pic = new char[size];
	
	for (int i=0; i<size; i++)
	{
		if (i % 3 == 0)
			picture.pic[i] = 'p';
		else
			picture.pic[i] = 'o';
	}
	
	picture.caption = caption;
	
	return picture;
}

/***************************************************
 * print_picture
 * param	: picture - picture to print to cout
 * returns	: none
 ***************************************************/
void print_picture(Picture picture)
{
	int size = picture.height * picture.width;
	cout << "Title: " << picture.title << endl << endl;
	for (int i=0; i<size; i++)
	{
		cout << picture.pic[i];
		if (i % picture.width == picture.width - 1)
			cout << endl;
	}
	cout << endl << "Caption: " << picture.caption << endl;
}

