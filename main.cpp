#include <iostream>

using namespace std;

int main()
{
    int num,fcount=0;
    char ch='y';
    while(ch!='n')
    {
        cout<<"Enter number\n";
        cin>>num;
        do
        {
            fcount=0;
            while(num!=0)
            {
                fcount= fcount + ((num%10)*(num%10));
                num=num/10;
            }
            num=fcount;
        }while((fcount/10!=0)&&(fcount%10!=1));
        if(fcount==1)
            cout<<"\nIt is a happy number\n";
        else
            cout<<"It is not a happy number\n";
        cout<<"Do yo want to continue?";
        cin>>ch;
    }
    return 0;
}
