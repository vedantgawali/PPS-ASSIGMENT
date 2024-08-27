#include <iostream>
#include <string>
using namespace std;
class car
{
public:
// Properties (data members)
string brand;
string model;
int year;
};
int main() {
// Create an object of the Car
car carObj1;
carObj1.brand ="Toyota" ;
carObj1.model ="fortuner";
carObj1.year = 2019;
// Create another object of the Car
car carObj2;
carObj2.brand ="Mahindra";
carObj2.model ="jeep";
carObj2.year = 2001;
// Print attribute values
cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
return 0;
}
