# include  <iostream>
using namespace  std;
class  Ponit 
{
public:
	Ponit(float a ,float b );//���캯��  ��ʼ�� ����
	float get_x() const;//��ȡx��ֵ
	float get_y() const;//��ȡy��ֵ 
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
	 const Ponit a;//����һ����������  ֻ�ܵ��� const��Ա����
	 Ponit b;//����Ponit  ����  ���Ե����������еĺ��� 
	 b.move(5, 6);
	// a.move(5, 6);//����  const  ���� ֻ�ܵ��� const  ���� 
	 a.printf1();
	 b.printf1();
 }
