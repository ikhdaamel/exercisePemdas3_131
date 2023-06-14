#include <iostream>
using namespace std;

class bidangDatar {
private:
	int x;															//variabel untuk menyimpan input dari lingkaran maupun bujursangkar
public:
	bidangDatar() {													//constructor
		x = 0;
	}
	virtual void input() {
	}																// fungsi yang menerima input dan mengirim input melalui fungsi setX untuk disimpan di x
	virtual float Luas(int a) { 
		return 0; 
	}																//fungsi untuk menghitung luas
	virtual float Keliling(int a) { 
		return 0; 
	}																//fungsi untuk menghitung keliling
	void setX(int a) {												//fungsi untuk memberi/mengirim nilai pada x
		this->x = a;
	}
	int getX() {													//fungsi untuk membaca/mengambil nilai dalam x
		return x;
	}
};
class Lingkaran :public bidangDatar {
private: string x;
public:
	void input() {
		cout << "lingkaran dibuat" << endl;
		}
	void setX(string jejari) {
		x = jejari;
		}
	void display(){
			cout << " masukan jejari : " << x << endl;
	}
};

class Bujursangkar :public bidangDatar {
private: string Sisi[];
public:
	void setSisi(int s, string value) {
		Sisi[s] = value;
	}
	string getSisi(int s) {
		return Sisi[s];
	}
};

int main() {
	Lingkaran* r;
	r->setX("jejari");
	r->display();
	
}