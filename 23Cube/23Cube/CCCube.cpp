#include <iostream>
#include <string>
using namespace std;
class Cube {
public:
	void setL(int L)
	{
		m_L = L;
	}
	int getL()
	{
		return m_L;
	}
	void setW(int W)
	{
		m_W = W;
	}
	int getW()
	{
		return m_W;
	}
	void setH(int H)
	{
		m_H = H;
	}
	int getH()
	{
		return m_H;
	}
	int calculateV()
	{
		return m_L * m_W * m_H;
	}
	int calculateS()
	{
		return 2 * m_L * m_W + 2 * m_L * m_H + 2 * m_H * m_W;
	}
	bool isSameByClass(Cube& c)
	{
		if (c.getL() == getL() && c.getW() == getW() && c.getH() ==getH()) {
			return true;

		}
		else return false;
	}
private:
	int m_L;
	int m_W;
	int m_H;
};
bool isSame(Cube& c1, Cube& c2) {
	if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH()) {
		return true;

	}
	else return false;
}
int main()
{
	Cube c1;
	c1.setL(10);
	c1.setW(10);
	c1.setH(10);
	
	/*cout<< c1.calculateS()<<endl;
	cout << c1.calculateV() << endl;*/
	Cube c2;
	c2.setL(10);
	c2.setW(10);
	c2.setH(10);
	bool ret = c1.isSameByClass(c2);
	if (ret)cout << "They are same!!!" << endl;
	else cout << "They are different!!!" << endl;
	system("pause");
	return 0;
}