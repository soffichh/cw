#include <iostream>

using namespace std;
void printText()
{
    string organizaciq;
    cout<<"Enter name of organizaciq:";
    cin>>organizaciq;
        int  people;
    cout<<"Enter number people:";
    cin>> people;
    int members;
    cout<<"Enter number members of Botev days:";
    cin>>members;
    for(int i = 0;i <= 1;i++)
    {
        cout<<organizaciq<<endl;
        cout<<people<<endl;
        cout<<members<<endl;
        cout<<"-------------"<<endl;
    }
}
int main()
{


    printText();
    cout<<endl<<endl;


}
