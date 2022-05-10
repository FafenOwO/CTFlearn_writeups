#include <iostream>
#include <string>

using namespace std;

int main(){
	string tms1;	//transmission 1: Alice's qbits
	string tms3;	//transmission 2: qbits Bob got right
	string correct;
	cout<<"TRANSMISSION 1:"<<endl;
	cin>>tms1;
	cout<<endl<<"TRANSMISSION 2:"<<endl;
	cin>>tms3;
	cout<<endl;

	for(int i=0; i<tms1.length(); i++){
		if(tms3[i]=='v'){
			correct.push_back(tms1[i]);
		}
	}
	cout<<"RESULT:"<<endl<<correct<<endl<<endl;
	int x;

	cout<<"OPTIONS:"<<endl<<"1:"<<endl; 	//1010
	for(int i=0; i<correct.length(); i++){
		if(correct[i]=='/'){cout<<'1'; goto fin1;}
		if(correct[i]=='-'){cout<<'1'; goto fin1;}
		if(correct[i]=='|'){cout<<'0'; goto fin1;}
		cout<<'0';
		fin1:
		x++;
	}
	cout<<endl<<"2:"<<endl;
	for(int i=0; i<correct.length(); i++){	//0110
                if(correct[i]=='/'){cout<<'0'; goto fin2;}
                if(correct[i]=='-'){cout<<'1'; goto fin2;}
                if(correct[i]=='|'){cout<<'0'; goto fin2;}
		cout<<'1';
		fin2: 
		x++;
        }
	cout<<endl<<"3:"<<endl;
	for(int i=0; i<correct.length(); i++){	//1001
                if(correct[i]=='/'){cout<<'1'; goto fin3;}
                if(correct[i]=='-'){cout<<'0'; goto fin3;}
                if(correct[i]=='|'){cout<<'1'; goto fin3;}
		cout<<'0';
		fin3:
		x++;
        }
	cout<<endl<<"4:"<<endl;
	for(int i=0; i<correct.length(); i++){	//0101
                if(correct[i]=='/'){cout<<'0'; goto fin4;}
                if(correct[i]=='-'){cout<<'0'; goto fin4;}
                if(correct[i]=='|'){cout<<'1'; goto fin4;}
		cout<<'1';
		fin4:
		x++;
        }

	return 0;
}
