
#include<iostream>
#include <string>
#include "Doctor.h"
using namespace std;

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
	for(int k = 0; k < mydoctor.getNPatients(); k++ )
		cout << mydoctor.getAgeOfPatients(k) << " ";
	
	cout<< "\n" << mydoctor.calculateAverage();

	cin >> x;
    return 0;
}

