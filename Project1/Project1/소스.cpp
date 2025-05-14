// private 생성자
//			- 생성자가 private이라는 것은 외부에서의 객체 생성을 허용하지 않겠다는 뜻이다.
//싱글톤 패턴
//		  -

#include <iostream>
using namespace std;

class Student
{
private:
	int			m_id;
	string	m_name;

public:
	Student(const int& id_in, const string& name_in) : m_id(id_in), m_name(name_in)
	{}

	Student(const string& name_in) : Student(0, name_in)				 // 위임 생성자
	{}

};	

/*class Singleton
{
private:
	Singleton() { cout << "Singleton()" << endl; }
	Singleton(const Singleton& ref) {}
	Singleton& operator=(const Singleton& ref) {}
	~Singleton() { cout << "~Singleton" << endl; }
public:
	static Singleton& getInstance()
	{
		static Singleton s;
		return s;
	}
	int N = 0;
	void Print() {}
};

int main(void)
{
	Singleton::getInstance().N = 1;

	cout << Singleton::getInstance().N << endl;
	Singleton::getInstance().Print();


	Singleton& singe = Singleton::getInstance();

	singe.Print();
}*/

/*class ClassA
{
private:
	int num;

	ClassA(int n) : num(n) {}									// private 생성자
public:
	void ShowNum() const { cout << num << endl; }

	ClassA() : num(0) {}
	ClassA& CreateInitObj(int n) const
	{
		ClassA* ptr = new ClassA(n);							// 동적할당
		return *ptr;
	}
};

int main(void)
{
	ClassA base;
	ClassA& obj = base.CreateInitObj(1);
}*/

/*
class ClassA
{
public:
	ClassA() { cout << "ClassA" << endl; }
	ClassA() { cout << "~ClassA" << endl; }
	void Show() { cout << "ClassA Show" << endl; }
};

class ClassB
{
private:
	ClassA& ref;										//레퍼런스 맴버 //맴버변수로 참조자 선언하기
	const int& num;
public:
	ClassB(ClassA& r, const int& n) : ref(r), num(n)		//이니셜라이저를 이용 해야함 must ***
	{
		//ref = r;		//선언이 아님
		//num = n;	//변경 불가
	}
	~ClassB() { cout << "~ClassB" << endl; }
	void Show() { ref.Show(); }
};

int main(void)
{
	ClassA obj1;
	ClassB obj2(obj1, 20);
	obj2.Show();		////obj1 클래스 소멸시 오류 발생할수 있음
	return 0;
}*/

/*class Something
{
private:
	int a1 = 0;
	//int a2(0);								 //error
	int a3{ 0 };					    	// { } 초기화
	int arr[3];
public:
	Something() : a1(0), a3{1}, arr{ 1,2,3 }
	{

	}
};

int main(void)
{
	int n1 = 0;			// =
	int n2(0);			// (  )
	int n3{ 0 };		// { } 초기화
}*/

/*struct MyStruct
{
	int val;
};

class MyClass
{
public:
	int val;
};

MyClass myclass;											//전역 객체의 경우

int main(void)
{
	//MyStruct mystruct = { 1 };						//mystruct 초기화되지 않음
	//cout << mystruct.val << endl;					//error

	//MyClass myclass{  };
	cout << myclass.val << endl;						//0
	return 0;
}*/

/*class CPerson
{
private:
	char*	name;
	int			age;
public:
	CPerson(char* myname, int myage)
	{
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}
	~CPerson()
	{
		delete[] name;		//delete		//RAII 패턴
	}
	void ShowInfo() const { cout << "이름: " << name << " 나이: " << age << endl; }
};

int main()
{
	char name[] = "잎프";
	CPerson man(name, 17);
	man.ShowInfo();
}*/

//맴버에 포인터변수가 있는 경우 - 해제 여주를 주의하라

//RAII 패턴
// 리소스 획득은 초기화다.
// (Resourse Acquistion Is Intiialization)
// 자원의 필요한

/*class Number
{
	int num = 1;							//1. 기본 초기화
	float f = 0.0f;
public:
	Number() : num(1), f(3.14)				//2. 콜롬 초기화, 맴버 초기화 리스트(추천)
	{
		cout << "Number()" << endl;
	}
	Number(int n) : num(n)
	{
		cout << "Number(int)" << endl;
	}
	Number(int n, float f) : num(n), f(f)
	{
		cout << "Number(int, float)" << endl;
	}
	~Number() {
		cout << "~Number() " << num << endl;
	}
	void Print() { cout << num << endl; }
};

int main()
{
	Number n;
	Number one(2);
	Number two(3, 2.4f);
}*/