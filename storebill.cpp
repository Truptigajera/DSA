#include<iostream>
using namespace std;
class cosmetic{
    public:
    string name;
    int Mobile,qty[10],bill=0,disc,price[10],grossbill=0;

    float sgst,cgst,GST,netbill=0;
    string items[10];

    void menu(){
        cout<<"<--------------------KAILASH BEATY CARE---------------->"<<endl;
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter Mobile no:";
        cin>>Mobile;
        cout<<"\n-------------------------Menu-------------------------";
        cout<<"\n1.lakme kajal"<<"\t\t\t\t\tRs.160/-";
        cout<<"\n2.lakme compack"<<"\t\t\t\t\tRs.240/-";
        cout<<"\n3.nainpolish"<<"\t\t\t\t\tRs.50/-";
        cout<<"\n4.primer"<<"\t\t\t\t\tRs.180/-";
        cout<<"\n5.cleaner"<<"\t\t\t\t\tRs.210/-";
        cout<<"\n       0.confirm order\n\n";

    }

    void customer(){
        cout<< "Enter your Name:"<<name<<endl;
        cout<<"Enter mobile no:"<<Mobile<<endl;
    }
    int item1(){
    cout<<"----->Enter qty:";
    cin>>qty[0];
    items[0]="\tlakme kajal          Rs.160/-";
    price[0]=qty[0]*160;
    return bill=bill+price[0];}

    int item2(){
    cout<<"----->Enter qty:";
    cin>>qty[1];
    items[1]="\tlakme compack        Rs.50/-";
    price[1]=qty[1]*160;
    return bill=bill+price[1];
    }

    int item3(){
    cout<<"----->Enter qty:";
    cin>>qty[2];
    items[2]="\tnainpolish           Rs.160/-";
    price[2]=qty[2]*160;
    return bill=bill+price[2];}

    int item4(){
    cout<<"----->Enter qty:";
    cin>>qty[3];
    items[3]="\tprimer               Rs.180/-";
    price[3]=qty[3]*160;
    return bill=bill+price[3];}

    int item5(){
    cout<<"----->Enter qty:";
    cin>>qty[4];
    items[4]="\tcleaner              Rs.210/-";
    price[4]=qty[4]*160;
    return bill=bill+price[4];}

    int Gross()
    {
        return grossbill=grossbill+bill;
    }

    int DISCOUNT()
    {
        if(grossbill>500){
            return disc=(grossbill*10/100);
        }
    }
    int CGST()
    {
        return cgst=(grossbill*2.5)/100;
    }
    int SGST()
    {
        return sgst=(grossbill*2.5)/100;
    }
    int displaygst()
    {return GST=cgst+sgst;}
    int Net()
    {
        return netbill=grossbill-disc+GST;
    }
    void displayitems(){
        int i;
        for(i=0;i<10;i++){
            if(!items[i].empty()){
                cout<<i+1<<" : "<<items[i]<<"\t"<<qty[i]<<"\t\t"<<price[i]<<"/-"<<endl;
            }
        }
    }
    void display()
    {
        cout<<"\n<--------------------KAILASH BEATY CARE---------------------->";
        cout<<"\ncustomer name                   :"<<name<<endl;
        cout<<"\ncustomer mobile no              :"<<Mobile<<endl;
        cout<<"---------------order list----------------------------------------";
        cout<<"\nNo\tITEMS\tRATE\t\tQTY\tAMT"<<endl;
    }
};
int main(){
    cosmetic x;
    int ch;
    x.menu();

    do{
        cout<<"enter your choice:";
        cin>>ch;
        switch(ch){
            case 1:
            x.item1();
            break;

            case 2:
            x.item2();
            break;

            case 3:
            x.item3();
            break;

            case 4:
            x.item4();
            break;

            case 5:
            x.item5();
            break;

            case 0:
            cout<<"your order comfirmed.\n";
            break;
            default:
            cout<<"sorrry! please try again.\n";
            break;
        }

    }while(ch!=0);
    x.display();
    x.displayitems();
    cout<<"--------------------------------------------------------------------------------------------"<<endl;
    cout<<"\t\t\t\t\t    Gross Bill :"<<x.Gross()<<"/-"<<endl;
    cout<<"\t\t\t\t\t    Discount   :"<<x.DISCOUNT()<<"/-"<<endl;
    cout<<"\t\t\t\t\t    CGST       :"<<x.CGST()<<"/-"<<endl;
    cout<<"\t\t\t\t\t    SGST       :"<<x.SGST()<<"/-"<<endl;
    cout<<"\t\t\t\t\t    GST        :"<<x.displaygst()<<"/-"<<endl;
    cout<<"---------------------------------------------------------------------------------------------"<<endl;
    cout<<"\t\t\t\t\t    NET BILL   :"<<x.Net()<<"/-"<<endl;
    cout<<"==============================================================================================";
    cout<<"\n\t\t Thank You ";
}