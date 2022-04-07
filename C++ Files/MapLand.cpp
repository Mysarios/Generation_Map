#include<math.h>
#include<iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
void NewMatrix();
int RandomH = 80;
const int CofBi = 42;
int main() {
	srand(time(0));
	NewMatrix();
	return 0;
}
double Polinomic(double x, double y, double ArrayB[16]) {
	double sum = 0;
	for (int Index = 0; Index < 16; Index++) {
		if (Index == 0) { sum+=ArrayB[Index]; continue; }

		if (Index == 1) { sum += ArrayB[Index]* pow((x - 1), 1); continue; }
		if (Index == 2) { sum += ArrayB[Index] * pow((x - 2), 2); continue; }
		if (Index == 3) { sum += ArrayB[Index] * pow((x - 3), 3); continue; }

		if (Index == 4) { sum += ArrayB[Index] * pow((y - 1), 1); continue; }
		if (Index == 5) { sum += ArrayB[Index] * pow((y - 2), 2); continue; }
		if (Index == 6) { sum += ArrayB[Index] * pow((y - 3), 3); continue; }

		if (Index == 7) { sum += ArrayB[Index] * pow((x - 1), 1) * pow((y - 1), 1); continue; }
		if (Index == 8) { sum += ArrayB[Index] * pow((x - 2), 2) * pow((y - 2), 2); continue; }
		if (Index == 9) { sum += ArrayB[Index] * pow((x - 3), 3) * pow((y - 3), 3); continue; }

		if (Index == 10) { sum += ArrayB[Index]* pow((x - 1), 1) * pow((y - 2), 2); continue; }
		if (Index == 11) { sum += ArrayB[Index]* pow((x - 1), 1) * pow((y - 3), 3); continue; }

		if (Index == 12) { sum += ArrayB[Index] * pow((x - 2), 2) * pow((y - 1), 1); continue; }
		if (Index == 13) { sum += ArrayB[Index] * pow((x - 2), 2) * pow((y - 3), 3); continue; }

		if (Index == 14) { sum += ArrayB[Index] * pow((x - 3), 3) * pow((y - 1), 1); continue; }
		if (Index == 15) { sum += ArrayB[Index] * pow((x - 3), 3) * pow((y - 2), 2); continue; }
	}
	//cout << x << "  =x    " << y << "    =y" << endl;
	return sum;
}
void NewMatrix() {
	long long ArrayOfFirstData[16];

	for (int x = 1; x < 17; x++) {
		ArrayOfFirstData[x-1] = rand() % RandomH;
			cout << ArrayOfFirstData[x-1] << " ";
			if(x % 4==0){
				cout << endl;
			}
	}

	cout << "\n";
	double CoefsForBmassiv[16][16] = {
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 } };
	double SecondArray[16][16];
	int in = -1;

	//заполняем массив изначально
	for (int x = 0; x < 4; x++) {
		for (int y = 0; y < 4; y++) {
			in++;
			for (int Index = 0; Index < 16; Index++) {
				if (Index == 0) { SecondArray[in][Index] = 1; continue; }

				if (Index == 1) { SecondArray[in][Index] = pow((x - 1), 1); continue; }
				if (Index == 2) { SecondArray[in][Index] = pow((x - 2), 2); continue; }
				if (Index == 3) { SecondArray[in][Index] = pow((x - 3), 3); continue; }

				if (Index == 4) { SecondArray[in][Index] = pow((y - 1), 1); continue; }
				if (Index == 5) { SecondArray[in][Index] =  pow((y - 2), 2); continue; }
				if (Index == 6) { SecondArray[in][Index] =  pow((y - 3), 3); continue; }


				if (Index == 7) { SecondArray[in][Index] = pow((x - 1), 1) * pow((y - 1), 1); continue; }
				if (Index == 8) { SecondArray[in][Index] = pow((x - 2), 2) * pow((y - 2), 2); continue; }
				if (Index == 9) { SecondArray[in][Index] = pow((x - 3), 3) * pow((y - 3), 3); continue; }

				if (Index == 10) { SecondArray[in][Index] = pow((x - 1), 1) * pow((y - 2), 2); continue; }
				if (Index == 11) { SecondArray[in][Index] = pow((x - 1), 1) * pow((y - 3), 3); continue; }

				if (Index == 12) { SecondArray[in][Index] = pow((x - 2), 2) * pow((y - 1),1); continue; }
				if (Index == 13) { SecondArray[in][Index] = pow((x - 2), 2) * pow((y - 3), 3); continue; }

				if (Index == 14) { SecondArray[in][Index] = pow((x - 3), 3) * pow((y - 1), 1); continue; }
				if (Index == 15) { SecondArray[in][Index] = pow((x - 3), 3) * pow((y - 2), 2); continue; }

			}
		}
	}
	//Массив сформирован.Дальше зануляем низ.

	//Тут
	double Coef=0;

	for (int t =0; t < 16; t++) {
		for (int i = t+1; i < 16; i++) {
			if (SecondArray[t][t]!= 0) {
				Coef = (double)SecondArray[i][t] / (double)SecondArray[t][t];
			}
			else {
				for (int ind = t + 1; ind < 16; ind++) {
					if (SecondArray[ind][t] != 0 ) {
						for (int inde = t; inde < 16; inde++) { SecondArray[t][inde] += SecondArray[ind][inde];}
						ArrayOfFirstData[t] += ArrayOfFirstData[ind];
						break;
					}
				}
			}
			if (SecondArray[t][t] != 0) {
				Coef = (double)SecondArray[i][t] / (double)SecondArray[t][t];
			}
			for (int j = t; j < 16; j++) {SecondArray[i][j] -= SecondArray[t][j] * Coef;}
			ArrayOfFirstData[i] -= ArrayOfFirstData[t] * Coef;
			CoefsForBmassiv[i][t] = Coef;
		}
	
	}

	//Дальше находим коэффициенты

	double FinalPolinom[16];
	int Max = 1;

	FinalPolinom[15]= ArrayOfFirstData[15]/ SecondArray[15][15];

	for (int x = 14; x >= 0; x--) {
		double sum = ArrayOfFirstData[x];

		for (int i = 0; i < Max; i++) {
			sum -=SecondArray[x][15-i]* FinalPolinom[15-i];
		}

		FinalPolinom[x]= sum/ SecondArray[x][x];
		Max++;
	}

	//вывод полинома
	cout << FinalPolinom[0] << " + (  ";
	cout << FinalPolinom[1] << "*(x-1) + (  ";
	cout << FinalPolinom[2] << "*(x-2)^2 + (  ";
	cout << FinalPolinom[3] << "*(x-3) + (  ";
	cout << FinalPolinom[4] << "*(y-1)^2 + (  ";
	cout << FinalPolinom[5] << "*(y-2)^3 + (  ";
	cout << FinalPolinom[6] << "*(y-3)^3 + (  ";
	cout << FinalPolinom[7] << "*(x-1)*(y-1) + (  ";
	cout << FinalPolinom[8] << "*(x-2)^2*(y-2)^2 + (  ";
	cout << FinalPolinom[9] << "*(x-3)^3*(y-3)^3 + (  ";
	cout << FinalPolinom[10] << "*(x-1)*(y-2)^2 + (  ";
	cout << FinalPolinom[11] << "*(x-1)*(y-3)^3 + (  ";
	cout << FinalPolinom[12] << "*(x-2)^2*(y-1)^1 + (  ";
	cout << FinalPolinom[13] << "*(x-2)^2*(y-3)^3 + (  ";
	cout << FinalPolinom[14] << "*(x-3)^3*(y-1)^1 + (  ";
	cout << FinalPolinom[15] << "*(x-2)^3*(y-3)^2 + (  " << endl;;

	//Вычисление матрицы высот
	long long FinalArrayOfHigh[CofBi][CofBi];

	int divider = ((CofBi - 4) / 3)+1;
	for (int x = 0; x < CofBi; x++) {
		for (int y = 0; y < CofBi; y ++) {
			double AmNow;
			AmNow= Polinomic((double)x / divider, (double)y / divider, FinalPolinom);
			if (AmNow - (int)AmNow > 0.5) {
				FinalArrayOfHigh[x][y] = AmNow + 1;
			}
			else {
				FinalArrayOfHigh[x][y] = AmNow;
			}
			//FinalArrayOfHigh[x][y] = Polinomic((double)x / 5, (double)y / 5, FinalPolinom);
			
		}
		//cout << " " << endl;
	}
	cout << " " << endl;
	//cout << CofBi << endl;

	//Проверки
	for (int x = 0; x < CofBi; x++) {
		for (int y = 0; y < CofBi; y++) {

			cout << setw(2) << FinalArrayOfHigh[x][y] << "  ";

		}
		cout << " " << endl;
	}
	cout << " " << endl;
	cout << " " << endl;
	cout << "Itog Massiv" << endl;
	for (int x = 0; x < 16; x++) {
		for (int y = 0; y < 16; y++) {
			cout << setw(5) << SecondArray[x][y] << "  ";
		}
		cout << setw(5) << ArrayOfFirstData[x] << "  ";
		cout << " " << endl;
	}
	cout << "Coefs" << endl;
	for (int x = 0; x < 16; x++) {
		for (int y = 0; y < 16; y++) {
			cout << setw(5) <<CoefsForBmassiv[x][y] << "  ";
		}
		cout << " " << endl;
	}
	
}
