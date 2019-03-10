#include<iostream>
#include<fstream>
#include<cassert>
#include<string>
#include<vector>
using namespace std;

vector<int> str2num(string);

int main(int argc, char *argv[])
{
	vector<vector<int> > car;
	std::cout << "Begin" << std::endl;

	if (argc < 2) {
		std::cout << "please input args: carPath, roadPath, crossPath, answerPath" << std::endl;
		exit(1);
	}
	std::string carPath(argv[1]);
	/*
	std::string roadPath(argv[2]);
	std::string crossPath(argv[3]);
	std::string answerPath(argv[4]);

	std::cout << "carPath is " << carPath << std::endl;
	std::cout << "roadPath is " << roadPath << std::endl;
	std::cout << "crossPath is " << crossPath << std::endl;
	std::cout << "answerPath is " << answerPath << std::endl;
	*/

	// TODO:read input filebuf
	//��ֻ��ģʽ���ļ�
	ifstream infile;
	infile.open(carPath.data());//���ļ����������ļ���������
	assert(infile.is_open());//��ʧ�ܣ������������Ϣ������ֹ��������

	string s;
	while (getline(infile, s)) {
		vector<int> temp;
		temp = str2num(s);
		car.push_back(temp);
	}
	car.erase(car.begin());
	for (auto i : car) {
		for (auto j : i)
			cout << j << " ";
		cout << endl;
	}

	infile.close();//�ر��ļ���

	//FILE *fp2 = fopen(argv[2], "r");
	//FILE *fp3 = fopen(argv[3], "r");
	//FILE *fp4 = fopen(argv[4], "r");

	// TODO:process
	// TODO:write output file

	return 0;
}