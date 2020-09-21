#include<iostream>
#include "Doctor.h"
#include <string>
using namespace std;

Doctor::Doctor(string dName) //constructor we have here, its like a function 
{
	name = dName; //public
	middleName = "DrBest"; //it is private actually 
	diplomaNo = 14356; //private too
	age = 40; //this is also private
	NPatients = 10; //protected
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
void Doctor::setAge(int newAge) //public function
{
	age = newAge;
}

int Doctor::getAge(void)  //public function
{
	return age;
}

void Doctor::setNPatients(int number) //public function
{
	NPatients = number;
}

int Doctor::getNPatients(void) //public function
{
	return NPatients;
}
void Doctor::setDiplomaNo(double newDiploma) //public function
{
	diplomaNo = newDiploma;
}

double Doctor::getDiplomaNo(void) //public function
{
	return diplomaNo;
}

void Doctor::setMiddleName(string name) //public function
{
	middleName = name;
}

string Doctor::getMiddleName(void) //public function
{
	return middleName;
}

void Doctor::setAgeOfPatients(int ages[10]) //protected function 
{
	for (int x = 0; x < 10; x++)
		ageOfPatients[x] = ages[x];
	
	return;
}

int Doctor::getAgeOfPatients(int n)  //protected function
{
	return ageOfPatients[n];
}

void Doctor::setPAges(int ages[10]) //public function 
{
	Doctor::setAgeOfPatients(ages);
	return;
}

int Doctor::calculateAverage(void) //public function
{
	return findSumOfAges() / NPatients;

}

