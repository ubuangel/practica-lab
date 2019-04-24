//2.1
class Point
{
	private:
	int x,y;

public:
	Point(int u,int v):x(u),y(v){}
	int getX(){return x;}
	int getY(){return y;}

	void doubleVal(){
	x*=2; y*=2;
	}
};
	int main()
	{
	 	Point myPoint(5,3);
	myPoint.doubleVal();
	cout<<myPoint.getX()<<" ,"<<myPoint.getY()<<"\n";
	return 0;
	}
//2.2
#include<iostream>
using namespace std;


class Point{
private:
	int x,y;
public:
	Point(int u, int v):x(u),y(v){}
	int getX(){return x;}
	int getY(){return y;}
	void setX(int newX){x=newX;}


};

int main()
{
	Point p(5,3);
	p.setX(9001);
	cout<<p.getX()<<" "<<p.getY();
	return 0;
}
//2.3
 class Point{
        
    public:
        int x,y;
    Point(int u,int v):x(u),y(v){}
    int getX(){return x;}
    int getY(){return y;}
    };
int main()
{
    Point p(5,3);
    cout<<p.x<<" "<<p.y<<"\n";
return 0;
    
}
//2.5
int main(){
int size;
cin>>size;
int *nums=new int[size];
for(int i=0;i<size;++i)
{
    cin>>nums[i];
    delete [] nums;
}
}
//2.6
class Point{
    private: int x,y;
    public:
    Point(int u,int v):x(u),y(v){}
    int getX(){return x;}
    
    int getY(){return y;}
    
};
int main()
{
    Point *p=new Point(5,3);


cout<<p->getX()<<" "<<p->getY();
delete p;
return 0;}
//3.3
#include<iostream>
using namespace std;

class Point{
private:
	int x,y;
public:
	Point(int _x=0, int _y=0)
	{
		x=_x;
		y=_y;
	}

	int getX(){return x;}
	int getY(){return y;}
	void setX(int);
	void setY(int);
} ;

void Point::setX(int newX)
{
	x=newX;
}

void Point::setY(int newY)
{
	y=newY;
}

int main()
{
	Point p1;
	cout<<"el valor de x es: "<<p1.getX()<<endl;
	cout<<"El valor de y es: "<<p1.getY();
	Point p2(3,5);
	p2.setX(12345);
    cout<<"el valor de x es: "<<p2.getX()<<endl;
	cout<<"El valor de y es: "<<p2.getY();

	return 0;
}
