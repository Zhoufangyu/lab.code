#include <iostream>
#include <windows.h>

using namespace std;


float checkAgeScore(int age, float score)
{
	if (age < 16 || age>25)
		throw age;
	if (score < 0 || score>5)
		throw score;
	return score / 100;

}
int main()
{
	char c;
	int a;
	float f;
	cin >> c >> a >> f;
	try
	{
		cout << "������" << c << "���䣺" << a << "�ɼ���" << f << checkAgeScore(a, f) << endl;
	}
	catch (char)
	{
		cout << "����error" << endl;
	}
	catch (int)
	{
		cout << "����error" << endl;
	}

	catch (float)
	{
		cout << "�ɼ�error" << endl;
	}

	system("pause");
	return 0;
}