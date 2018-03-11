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
	Picture picture = create_picture("",0,0,"");
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
	Picture picture;
	picture.title = "Poop";
	picture.height = 20;
	picture.width = 50;
	picture.pic = new char[1000];
	
	for (int i=0; i<1000; i++)
	{
		if (i % 3 == 0)
			picture.pic[i] = 'p';
		else
			picture.pic[i] = 'o';
	}
	
	picture.caption = "Eat this shit, bro.";
	
	return picture;
}

/***************************************************
 * print_picture
 * param	: picture - picture to print to cout
 * returns	: none
 ***************************************************/
void print_picture(Picture picture)
{
	cout << "Title: " << picture.title << endl << endl;
	for (int i=0; i<1000; i++)
	{
		cout << picture.pic[i];
		if (i % 50 == 49)
			cout << endl;
	}
	cout << endl << "Caption: " << picture.caption << endl;
}

