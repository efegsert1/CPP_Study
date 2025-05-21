// �޸� ������ �޸��� ���� �Ҵ�
// new		- malloc() + ������ ȣ�� + ����ȯ
// detele	- free() + �Ҹ��� ȣ��
#include <iostream>
using namespace std;

class MyClass {
	int* ptr = nullptr;	//��� ���� *
	int size = 0;			//����
public:
	MyClass(int size) { ptr = new int[size]; this->size = size; }
	~MyClass() { delete[] ptr; }	//RAII
	void Set(int index, int num) { ptr[index] = num; }
	void Print() {for (int i = 0; i < size; i++) cout << ptr[1] << " "; cout << "\n";}

	void Add(int num)
	{
		//delete[] ptr;		// 10 20 30
		//this->size++;
		//ptr = new int[size];
		//ptr[size - 1] = num;
		size++;
		int* nptr = new int[size];	//new
		for (int i = 0; i < size-1; ++i) nptr[i] = ptr[i];	//copy
		nptr[size-1] = num;										//add
		delete[] ptr;	// remove old
		ptr = nptr;		// address move //�ּ� ����
	}
};

int main()
{
	MyClass myclass(3);		// 3 size
	myclass.Set(0, 10);		// index, number
	myclass.Set(1, 20);		// ptr[1] = 20;
	myclass.Set(2, 30);		// ptr[2] = 30;
	myclass.Print();				// 10 20 30
	myclass.Add(40);			// ptr ������ ��ȭ �ʿ�
	myclass.Add(50);			// ptr ������ ��ȭ �ʿ�
	myclass.Print();				// 10 20 30 40
}

/*
class CTest {
private:
	int num;
public:
	CTest()
	{

	}

	CTest(int)
	{

	}

	void setNum(int n) { num = n; }
	int getNum() { return num; }
};

int main(void)
{
	// char
	char* pchar = new char{ 'A' };
	//*pchar = 'A';
	cout << pchar << endl;		//�ּ�
	cout << *pchar << endl;	//��
	delete pchar;

	int num1 = 10;
	int num2{ 10 };
	int num3(10);


	// double	3.141592
	double* pd = new double{ 3.141592 };
	cout << *pd << endl;
	delete pd;

	// int[3]		1,2,3
	int* pInts = new int[3] {1, 2, 3};
	for (size_t i = 0; i < 3; i++)
	{
		cout << pInts[i] << endl;
	}
	delete[] pInts;

	// int[100]		0,0,0,...
	int* pArr{ new int[100] {} };

	// "Hello World!"
	char* pStr = new char[13] {"Hello World!"}; delete[] pStr;

	// ��ü �����Ҵ�
	CTest* pTest = new CTest; pTest->setNum(10); delete pTest;
	CTest* pTest2 = new CTest(10); delete pTest2;

	// CTest ��ü�� 3�� �迭 �����ϼ���. (��ü �迭 10, 20, 30) (��ü �迭�� �����Ҵ�)
	CTest* pTests = new CTest[3]{ CTest(10), CTest(20), CTest(30) };
	for (size_t i = 0; i < 3; i++)
	{
		pTests[i].Print();
	}
	delete[] pTests;

	// CTest ��ü�� �����͸� 3�� ��� '�迭'�� �����ϼ���.
	// �����Ҵ� 3�� �ּҸ� ��� �迭
	CTest* Arr[3] = { new CTest(10), new CTest(20), new CTest(30) };
	for (size_t i = 0; i < 3; i++)
	{
		Arr[i]->Print();	
	}
	for (size_t i = 0; i < 3; i++) delete Arr[i];

	return 0;

};*/

/*
class Outter
{
private:
	int num = 0;
	static int n2;
public:
	class Nested
	{
		int n = 0;
	public:
		void Func(Outter a) { cout << a.num <<  n2 << endl; }		//private ���� ��� ***
	};
	Nested obj;
public:
	/// <summary>
	///	  
	/// </summary>
	void Print() { Outter o; obj.Func(o); }
};
int Outter::n2 = 0;

int main()
{
	Outter out; out.Print();
	//Outter::Nested obj;

	return 0;
}*/