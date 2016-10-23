#include <iostream>
#include <string>

using namespace std;

/*
 * 一般情况下，我们会在私有区域定义数据，而在公有区域定义函数
 * 注意公有函数定义的形参，不要跟私有函数中定义的私有变量同样的名称！！！！
 *
 * */
class BOX 
{
	//公有属性成员
	public:
		double length;
		//公有成员函数
		double getVolume(void);
		void setheight(double height);
//		void setlenght(double length);
		void setbreadth(double breadth);

	//私有属性成员
	private:
//		double length;
		double p_breadth;
		double p_height;

	protected:
		double p_width;
};

class smallbox:BOX {

	public:
		void setsmallwidth(double width);
		double getsmallwidth(void);
};


void smallbox::setsmallwidth(double width)
{
	p_width = width;
}	

double smallbox::getsmallwidth(void)
{
	return p_width;
}

double BOX::getVolume(void)
{
	return length*p_breadth*p_height;
}

void BOX::setheight(double height)
{
	p_height = height;
}

void BOX::setbreadth(double breadth)
{
	p_breadth = breadth;
}

int main(int argc, char *argv[])
{
	double volume = 0.0;

	BOX box1;
	BOX box2;
	smallbox sbox1; /* smallbox 就是个派生类 */

	box1.length = 1.0;
	box1.setheight(2.0);
	box1.setbreadth(3.0);
//	box1.breadth = 2.0;
//	box1.height = 3.0;

//	volume = box1.length*box1.breadth*box1.height;
	volume = box1.getVolume();
	cout << " volume 1 = " << volume << endl;

	box2.length = 2.0;
	box2.setheight(2.0);
	box2.setbreadth(3.0);

	volume = box2.getVolume();
	cout << " volume 2 = " << volume << endl;

	sbox1.setsmallwidth(5.0);
	volume = sbox1.getsmallwidth();	
	cout << " smallbox protected width = " << volume << endl;


	return 0;
}
