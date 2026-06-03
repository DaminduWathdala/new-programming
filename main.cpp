#include<iostream>
#include<string>
#include<vector>
using namespace std;
struct Employee
{
    string name;
    int emp_num;
    string designation;
    string dept;
};

int main()
{
    int n;
    cout<<"Enter the number of Employee:";
    cin>>n;
    cin.ignore();
    vector<Employee>emp(n);
    for(int i=0;i<n;i++)
    {
        cout<<"Employee"<<i+1<<":"<<endl;
        cout<<"Name: ";
        getline(cin,emp[i].name);
        
        cout<<"Number :";
        cin>>emp[i].emp_num;
        cin.ignore();
        
        cout<<"Designation :";
        getline(cin,emp[i].designation);
        
        cout<<"Department";
        getline(cin,emp[i].dept);
    }
    for(int i=0;i<n;i++)
    {
        cout<<"Record of employee"<<i+1<<":"<<endl;
        cout<<"\nName: "<<emp[i].name;
        cout<<"\nEmployee number: "<<emp[i].emp_num;
        cout<<"\nDesignation: "<<emp[i].designation;
        cout<<"\nDepartment: "<<emp[i].dept;
    }
    cout<<"Enter name whose data is required"<<endl;
    string name;
    cin>>name;
    cin.ignore();
    for(int i=0;i<n;i++)
    {
        if(emp[i].name==name)
        {
            cout<<"Name: "<<emp[i].name<<endl;
            cout<<"Employee number: "<<emp[i].emp_num<<endl;
            cout<<"designation: "<<emp[i].designation<<endl;
            cout<<"Department: "<<emp[i].dept<<endl;
            break;
        }
    }
    return 0;
}