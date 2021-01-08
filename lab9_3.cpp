#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cstdlib>
#include <stdio.h>
#include <math.h>
#include <cmath>


using namespace std;

int main(){
	
	int count = 0;
	float sum = 0;
	float std = 0;
	string textline;
	ifstream source("score.txt");
	while (getline(source,textline))
	{
		std += pow((atof(textline.c_str())),2);
		sum += atof(textline.c_str());
		
		count++;
	}
	float mean = sum/count ;
	float sstd = sqrt((std/count)-(pow(mean,2)));
	
    cout << "Number of data = " << count << "\n";
    cout << setprecision(3);
    cout << "Mean = " << mean << "\n";
    cout << "Standard deviation = " << sstd << "\n";
    source.close();
    return 0;
}