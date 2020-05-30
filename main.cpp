# include  <iostream>
using namespace  std;
class  Ponit 
{
public:
	Ponit(float a ,float b );//构造函数  初始化 变量
	float get_x() const;//获取x的值
	float get_y() const;//获取y的值 
	void  move(float a, float b);
	void  printf1() const;
private:
	float x;
	float y;
};

 Ponit :: Ponit (float a = 0, float b = 0):x(a),y(b)
{
	
}
 float Ponit::get_x() const
 {
	 return x;
 }
 float Ponit::get_y() const
 {
	 return y;
 }
 void Ponit::move(float a, float b)
 {
	 x = a;
	 y = b;
 }
 void Ponit::printf1() const
 {
	 printf("(%f,%f)\n", x, y);
 }
 void main()
 {
	 const Ponit a;//定义一个常量对象  只能调用 const成员函数
	 Ponit b;//定义Ponit  对象  可以调用类中所有的函数 
	 b.move(5, 6);
	// a.move(5, 6);//错误  const  对象 只能调用 const  函数 
	 a.printf1();
	 b.printf1();
 }
