#include<iostream>
#include<stdlib.h>

#include<fstream>
#include<string.h>
#include"voter.h"
using namespace std;

int main()
{
	vote v;
	int id,ch1,ch2;
	char pass[20]={"admin"},key[20];

	char n[10];
	int bjp=0,ncp=0,shivsena=0,congress=0,nota=0;

	abc:

	cout<<"1.GIVE YOUR VOTE\n2.COUNT RESULT\n";
	cin>>ch2;
	switch(ch2)
	{
		case 1:
		{

		cout<<"\nWELCOME TO INDIAN ELECTION COMMISSION OF INDIA\n";

		v.search();
		if(v.check==2)
		{

			cout<<"POLITICAL PARTIES:\n1.BJP\n2.NCP\n3.SHIVSENA\n4.CONGRESS\n5.NOTA\n";
			cin>>ch1;
			switch(ch1)
			{
				case 1:
						bjp++;
						break;
				case 2:
						ncp++;
						break;
				case 3:
						shivsena++;
						break;
				case 4:
						congress++;
						break;
				case 5:
						nota++;
						break;
				 case 6:
						cout<<"Enter the right choice\n";
						break;
			}

		}
    system("cls");
		goto abc;
		}

		case 2:
		       cout<<"ENTER THE PASSWORD: \n";
		       cin>>key;
		       if(strcmp(pass,key)==0)
		       {
		       	cout<<"THE RESULTS ARE\n";
		       	cout<<"BJP : "<<bjp<<endl;
		       	cout<<"NCP : "<<ncp<<endl;
		       	cout<<"SHIVSENA : "<<shivsena<<endl;
		       	cout<<"CONGRESS : "<<congress<<endl;
		       	cout<<"NOTA : "<<nota<<endl;

		       }
		       break;

		       goto abc;


	}


}
