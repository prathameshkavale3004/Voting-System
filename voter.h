#include<iostream>

#include<fstream>
using namespace std;
class vote
{


	char name[30];
	int id;



public:
	void writeinfo();
	void readinfo();
	void search();
    int check=-1;

};

void vote::writeinfo()
{
	ofstream f;
	f.open("voter.txt",ios::app);
	cout<<"name and id to insert in file\n";
	cin>>this->name;
	cin>>this->id;

	f.write((char*)this,sizeof(*this));
	f.close();
}
void vote::readinfo()
{
	ifstream f;

	f.open("voter.txt",ios::out);
	while(f.read((char*)this,sizeof(*this)))
	{
		cout<<this->name<<"\t\t\t\t"<<this->id<<"\n";
	}
	f.close();
}
void vote::search()
{
	fstream f;
	vote v;
	int flag=-1,i;
	cout<<"Enter your id\n";
	cin>>i;
	f.open("voter.txt",ios::in);

	f.seekg(0,ios::beg);
	while(f.read((char*)&v,sizeof(v)))
	{
			if(v.id==i)
			{
				cout<<"voter found !!! Now you can proceed further\n";
				cout<<v.name<<"\t"<<v.id<<"\t";
				cout<<"\n";
				flag =1;
				check=2;
				break;
			}
	}
	if(flag==-1)
		cout<<"RECORD NOT FOUND\n";
	f.close();
}
/*int main()
{
	vote v;
	int ch;
	do
	{
		cout<<"MENU:\n1.ADD RECORD\n2.DISPLAY\n3.Exit\n";
		cin>>ch;
		switch(ch)
		{
			case 1:

				 v.writeinfo();
				break;
			case 2:
				v.readinfo();
				break;
			case 3:
			    cout<<"thank you"<<endl;
			    break;
		}


     }while(ch!=3);
 }*/


