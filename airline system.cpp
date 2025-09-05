#include<iostream>
#include<vector>
using namespace std;
class flight{
	private:
		string flightno,departure,destiation;
		int capacity , reserved;
	public:
		flight(string flightno,string departure,string destiation,int capacity)
		{
			this->flightno=flightno;
			this->departure=departure;
			this->destiation=destiation;
			this->capacity=capacity;
			reserved = 0;
		}
	bool reservation()
	{
		if(reserved < capacity)
		{
			reserved++;
			return true;
		}
		return false;
	}
	friend class reservationsystem;
};
class reservationsystem{
	public:
		vector<flight>ve;
		add(string flightno,string departure,string destiation,int capacity){
			flight newflight(flightno,departure,destiation,capacity);
			ve.push_back(newflight);
		}
		reserveseat(){
			cout<<".^.^.^.^.__welcome to [RED PERSON AIRLINES]__.^.^.^.^."<<endl<<endl;
		cout<<".^.^.^.^.__AVAILABLE FLIGHT__.^.^.^.^."<<endl<<endl;
		//	string fn;
		//	cout<<"ENTER FLIGHT NUMBER :";cin>>fn;
		
			for(int i=0;i < ve.size();i++){
				cout<<"FLIGHT : "<<ve[i].flightno<<endl;
				cout<<"DEPARTURE : "<<ve[i].departure<<endl;
				cout<<"DESTINATION : "<<ve[i].destiation<<endl;
				cout<<"TOTAL SEATS : "<<ve[i].capacity<<endl<<endl;
			}
			string fn;
			cout<<"ENTER FLIGHT NUMBER :";cin>>fn;
			for(int i=0; i<ve.size(); i++)
			{
				if(fn==ve[i].flightno){
					if(ve[i].reservation()){
					cout<<"YOU HAVE RESERRVED SEAT ON FLIGHT : "<<ve[i].flightno<<endl;	
					}//nested if
					else {
						cout<<"SORRY! SEAT NOT AVAILABLE*^* :  "<<endl<<endl;
					}
				}//if
			}//for
		}//function
};
int main()
{
	reservationsystem rs;
	rs.add("F101","UAE","USA",2);
	rs.add("F202","UK","CANADA",150);
	rs.add("F303","UK","UAE",100);
	cout<<"<<<<< RED PERSON AIRLINES >>>>>"<<endl<<endl;
	while(true)
	{
		int choice;
		cout<<"ENTER 1 FOR RESERVE SEAT "<<endl;
		cout<<"ENTER 0 FOR EXIT "<<endl;
		cout<<"ENTER CHOICE : ";cin>>choice;
	//	rs.reserveseat();
		{
		if(choice == 1)
		{
			system("cls");
			rs.reserveseat();
		}
	//	rs.reserveseat();
         else if(choice == 0)
		{
	     exit(0);
        }
        }
 	}

}
