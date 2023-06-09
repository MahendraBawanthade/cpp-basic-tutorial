#include<iostream>
using namespace std;

class Shape{
	public:
		string shapeType;
		
	Shape(string shapeType){
		this->shapeType= shapeType;
	}
	void printMyType(){
		cout<<this->shapeType<<endl;
	}
};

class square: public Shape{
  public:
  int length;
  square(string shapeType,int length):Shape(shapeType){
  	this->length=length;
  	void printMyType(){
  		cout<<this->shapeType<<endl;
	  }
	  int calculateArea(){
	  	return this-> length*this->length;	  	
	  }
  };
  class rectangle: public Shape{
  	public:
  		int length;
  		int breadth;
  		
  		rectangle(string shapeType,int length,int breadth):
  			Shape(shapeType){
  				this ->length=length;
  				this ->breadth=breadth;
			  }
	void printType(){
		cout<<this->shapeType<<endl;
	}
	
	int calculateArea(){
		return this->length* this ->breadth;
	}		  
			  
  };
  int main()
{
Square square("square",5);
square.printMyType();
cout<<square.calculateArea()<<endl;

rectangle rectangle("rectangle",5,4);
rectangle.printMyType();
cout<<rectangle.calculateArea()<<endl; 	
}
