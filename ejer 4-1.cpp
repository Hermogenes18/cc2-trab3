#include <iostream>

using namespace std;
class Point
{
    int x, y;
public :

    Point (int xx =0,int yy =0){x = xx;y = yy ;}
    int getX () const { return x;}
    int getY () const { return y;}
    void setX ( const int xx) {x = xx ;}
    void setY ( const int yy) {y = yy ;}
};
class PointArray
{
    int size;
    Point *points;

    void resize(int size);
public :

    PointArray();
    PointArray(const Point pts[],const int size);
    PointArray(const PointArray &pv);
    ~PointArray();

    void clear();
    int getsize()const{return size;}
    void push_back(const Point &p);
    void insert(const int pos,const Point &p);
    void remove(const int pos);
    Point *get(const int pos);
    const Point *get(const int pos) const;
};
int main()
{
    Point A(2,3);
    cout<<A.getX();
}
