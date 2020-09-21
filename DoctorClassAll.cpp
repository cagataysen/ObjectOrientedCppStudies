#include <iostream>
#include <string>
using namespace std;

class Doctor
{
private: //personal informations suppose to be here
	double diplomaNo; 
	string middleName;
	int age;

	int findSumOfAges(void);

protected: 
	int NPatients;
	int ageOfPatients[10];
	char genderOfPatients[10];
	void setAgeOfPatients(int ages[10]);

public:
	string name;
	int roomNo;
	int telNo;
	bool inOffice;
	
	//There might be multiple constructors
	
	Doctor(string dName);
	Doctor();

	void setAge(int newAge);
	int getAge(void);

	void setPAges(int ageList[10]);
	int getAgeOfPatients(int n);

	void setNPatients(int number);
	int getNPatients(void);

	void setDiplomaNo(double newDip);
	double getDiplomaNo(void);

	void setMiddleName(string name);
	string getMiddleName(void);

	int calculateAverage(void);

};

Doctor::Doctor(string dName)  
{
	name = dName;
	middleName = "DrBest";
	diplomaNo = 14356;
	age = 40;
	NPatients = 10;
}
Doctor::Doctor()
{
	middleName = "DrBest";
	diplomaNo = 14356;
	age = 40;
	NPatients = 10;
}

int Doctor::findSumOfAges(void)
{
	int i = 0, sum = 0;
	for (i = 0; i < 10; i++)
		sum += ageOfPatients[i];

	return sum;
}
void Doctor::setAge(int newAge)
{
	age = newAge;
}

int Doctor::getAge(void)
{
	return age;
}

void Doctor::setNPatients(int number)
{
	NPatients = number;
}

int Doctor::getNPatients(void)
{
	return NPatients;
}
void Doctor::setDiplomaNo(double newDiploma)
{
	diplomaNo = newDiploma;
}

double Doctor::getDiplomaNo(void)
{
	return diplomaNo;
}

void Doctor::setMiddleName(string name)
{
	middleName = name;
}

string Doctor::getMiddleName(void)
{
	return middleName;
}

void Doctor::setAgeOfPatients(int ages[10])
{
	for (int x = 0; x < 10; x++)
		ageOfPatients[x] = ages[x];

	return;
}

int Doctor::getAgeOfPatients(int n)
{
	return ageOfPatients[n];
}

void Doctor::setPAges(int ages[10])
{
	Doctor::setAgeOfPatients(ages);
	return;
}

int Doctor::calculateAverage(void)
{
	return findSumOfAges() / NPatients;

}
int main()
{
	int x;
	int list[10] = { 21, 22, 35, 46, 40, 52, 15, 25, 30, 32 };
	Doctor mydoctor("MrFahri");
	Doctor yourdoctor = Doctor("MsZeynep");
	Doctor thirddoctor;
	Doctor fourthdoctor = Doctor();

	thirddoctor.name = "MrBrown";
	fourthdoctor.name = "MrSuper";
	fourthdoctor.setAge(36);

	cout << mydoctor.name << endl;
	cout << yourdoctor.name << endl;
	cout << thirddoctor.name << endl;
	cout << fourthdoctor.name << endl;

	mydoctor.setPAges(list);
	for (int k = 0; k < mydoctor.getNPatients(); k++)
		cout << mydoctor.getAgeOfPatients(k) << " ";

	cout << "\n" << mydoctor.calculateAverage();

	cin >> x;
	return 0;
}
