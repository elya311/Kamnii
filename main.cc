#include <iostream>
#include <sstream>
#include <random>
#include <ctime>

int main ()
{
	int min=10, max=20,val,v,k;
	std:: minstd_rand gen(time(nullptr));
	val = min + gen() % (max-min+1);
	std::cout << "� ���� "<< val <<" ������. �������� ����!"<<std::endl;
	while(val>0){
		std::cout <<"������� ������ ��������?(1-3)"<< std::endl;
		std::string s;
		std::getline(std::cin,s);
		std::stringstream ss(s);
		ss>>v;

		if(ss.fail()){
			v=-1;
		}
					if(std::cin.eof()){//�������� �� �������� ����� �� ������ �����
						std::cout<<"��"<<std::endl;
						return 1;
					}
					switch(v){
							case 1:{
								val=val-1;
								if(val==0){
									std::cout<<"�� ��������!"<<std::endl;
									return 0;
								}
								std:: minstd_rand gen(time(nullptr));
								k = 1 + gen() % (3-1+1);
								if (val==4) k==3;
								if (val==3) k==2;
								if (val==2) k==1;
								if(k>val){
									k=val;
								}
								val=val-k;
								std::cout<<"-1. ���� �, ���� "<< k<<" ������ � � ���� ����� "<<val<<std::endl;
								if(val==0){
									std::cout<<"� ��������!"<<std::endl;
									return 0;
								}

							}break;
							case 2:{
								val=val-2;
								if(val==0){
									std::cout<<"�� ��������!"<<std::endl;
									return 0;
								}
								std:: minstd_rand gen(time(nullptr));
								k = 1 + gen() % (3-1+1);
								if (val==4) k==3;
								if (val==3) k==2;
								if (val==2) k==1;
								if(k>val){
									k=val;
								}
								val=val-k;
								std::cout<<"-2. ���� �, ���� "<< k<<" ������ � � ���� ����� "<<val<<std::endl;
								if(val==0){
									std::cout<<"� ��������!"<<std::endl;
									return 0;
								}
								}break;
							case 3:{
								val=val-3;
								if(val==0){
									std::cout<<"�� ��������!"<<std::endl;
									return 0;
								}
								std:: minstd_rand gen(time(nullptr));
								k = 1 + gen() % (3-1+1);
								if (val==4) k==3;
								if (val==3) k==2;
								if (val==2) k==1;
								if(k>val){
									k=val;
								}
								val=val-k;
								std::cout<<"-3. ���� �, ���� "<< k<<" ������ � � ���� ����� "<<val<<std::endl;
								if(val==0){
									std::cout<<"� ��������!"<<std::endl;
									return 0;
								}
								}break;
							case 0:std::cout<<"�� ��������� ����"<<std::endl;break;
							default:std::cout<<"������: ����� ����� �� 1 �� 3!"<<std::endl;break;
	}

}return 0;
}


