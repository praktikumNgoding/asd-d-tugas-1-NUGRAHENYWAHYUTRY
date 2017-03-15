#include <iostream>
#include <cmath>
using namespace std;
typedef struct {
	int x;
	char y;
}
komplek;
komplek a,b,c,d;
void mengisi(){
	a.x = 2;
	b.x = 4;
	b.y = 'i';
	c.x = 3;
	d.x = 5;
	d.y = 'i';
	cout<<"a="<<a.x<<endl
	<< "b = " << b.x << b.y << endl
	<< "c = " << a.x << endl
	<< "d = " << d.x << d.y << endl;}
void addition() {
	cout << "(" << a.x << "+" << c.x << ") + (" << b.x << "+" << d.x << ")" << d.y << " = "
	<< a.x + c.x << " + " << b.x + d.x << d.y << endl;}
void substractor() {
	cout << "(" << a.x << "-" << c.x << ") + (" << b.x << "-" << d.x << ")" << d.y << " = "
	<< a.x - c.x << " + " << b.x - d.x << d.y << endl;}
void perkalian() {
	int h1 = (a.x * c.x) - (b.x * d.x);
	int h2 = (a.x * d.x) + (b.x * c.x);	
	cout << "(" << a.x << c.x << "-" << b.x << d.x << ") + (" << a.x << d.x << "+" << b.x << c.x << ")" << d.y << " = "
	<< h1 << " + " << h2 << d.y << endl;}
void pembagian() {
	int n, m;
	float o, p;
	n = ((a.x * c.x) + (b.x * d.x));
	m = (pow(a.x, 2) + pow(b.x, 2));
	o = ((b.x * c.x) - (a.x * d.x));
	p = (pow(c.x, 2) + pow(d.x, 2));
	cout << "[(" << a.x << c.x << "+" << b.x << d.x << ") / (" << a.x << "^2+" << b.x << "^2)] + [(" << b.x << c.x << "-" << a.x << d.x << ") / (" << c.x << "^2+" << d.x << "^2)]" << d.y << " = ";
	cout << (n / m) << " + " << (o / p) << d.y << endl;}
int main(){
	pengisian();
	int pemilihan;
	do{
		cout << "\nsilahkan pilih operasi : " << endl
		<< "1. addition" << endl
		<< "2. substractor" << endl
		<< "3. perkalian" << endl
		<< "4. pembagian" << endl
		<< "5. keluarkan sekarang" << endl
		<<"   silahkan pilih : "; cin >> pemilihan;
		if (pemilihan == 1){
			addition();}
		else if (pemilihan == 2){
			substractor();}
		else if (pemilihan == 3){
			perkalian();}
		else if (pemilihan == 4){
			pembagian();}
		else if (pemilihan == 5){
			break;}else{
			cout << "Pemilihan hanya dari 1 - 5" << endl;
}} while (true);	
    return 0;}

