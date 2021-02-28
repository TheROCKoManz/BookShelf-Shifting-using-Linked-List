#include <iostream>
using namespace std;

class employee
{
private:
	    char  name[20], address[30], desig[10] ;
	    int  age;
	    float salary;
public:
  	  void adddata(int);
		  void display(int);
};

void employee::adddata(int i)
{
      cout<<"\n\t\t**Enter the details of "<<i+1<<"th Employee **\n";
    	cout<<"\n\t\tEnter employee name: "; fflush(stdin);
	    gets(name);
	    cout<<"\t\tEnter employee age: "; fflush(stdin);
	    cin>>age;
      cout<<"\t\tEnter employee designation: "; fflush(stdin);
	    gets(desig);
	    cout<<"\t\tEnter employee salary: "; fflush(stdin);
	    cin>>salary;
	    cout<<"\t\tEnter employee address: "; fflush(stdin);
	    gets(address);
      cout<<"\n\t\t__________________________________\n\n";
}

void employee::display(int i)
{
      cout<<"\n\n\t\t__________________________________";
	    cout<<"\n\t\t** Details of "<<i+1<<"th Employee **";
	    cout<<"\n\t\tName:               "<<name;
	    cout<<"\n\t\tAge:                "<<age;
      cout<<"\n\t\tDesignation:        "<<desig;
	    cout<<"\n\t\tSalary:             "<<salary;
	    cout<<"\n\t\tAddress:            "<<address;

	cout<<"\n\t\t__________________________________\n\n";
}

int main()
{

        employee emp[100];
        int n;
        cout<<"\n\tEnter number of Employees: ";
        cin>>n;

        for(int i=0;i<n;i++)
            emp[i].adddata(i);
        for(int i=0;i<n;i++)
            emp[i].display(i);
        return 0;
}
