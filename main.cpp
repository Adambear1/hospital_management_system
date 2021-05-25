#include<iostream>
#include<conio.h>
#include<fstream>
#include<iomanip>
#include<cstring>
#include<windows.h>

void menu();
void passcode();
void cpasscode();

using namespace std;

class one
{
    public:
        virtual void get() = 0;
        virtual void show() = 0;
};

class info:public one
{
    public:
        int num, age, char_length = 50;
        char name[50], time[50];
        void get()
        {
            system("cls");
            cin.sync();
            cout << "\n Enter the name of the patient please. \n";
            cin.getline(name, char_length);
            cout << "\n Enter the time of the appointment. \n";
            cin.getline(time, char_length);
            cout << "\n Enter the age. \n";
            cin >> age;
            cout << "\n Enter the appointment number. \n";
            cin >> num;
        };
        void show()
        {
            cout << "\n Name = " << name;
            cout << "\n Age = " << age;
            cout << "\n Time = " << time;
            cout << "\n Appointment Number = " << num;
        }
};

class doctor_one:public info
{
    public:
        info a1;
        void get()
        {
            system("cls");
            ofstream out("appointments.txt", ios:: app | ios::binary);
            a1.get();
            out.write((char*)&a1, sizeof(info));
            out.close();
            cout << "Your Entry Has Been Saved!";
            getch();
            menu();
        };
        void show()
        {
            ifstream in("appointments.txt");
            if(in = NULL)
            {
                cout << "\n No Data in the File";
                cout << "\n\n\t Press Any Key to Continue";
                getch();
                menu();
            }
            else
            {
                while(!in.eof())
                {
                    in.read((char*)&a1,sizeof(a1));
                    a1.show();
                }
                in.close();
                getch();
                menu();
            };
        };
};

class doctor_two:public info
{
public:
        info a1;
        void get()
        {
            system("cls");
            ofstream out("appointments_1.txt", ios:: app | ios::binary);
            a1.get();
            out.write((char*)&a1, sizeof(info));
            out.close();
            cout << "Your Entry Has Been Saved!";
            getch();
            menu();
        };
        void show()
        {
            ifstream in("appointments_1.txt");
            if(in = NULL)
            {
                cout << "\n No Data in the File";
                cout << "\n\n\t Press Any Key to Continue";
                getch();
                menu();
            }
            else
            {
                while(!in.eof())
                {
                    in.read((char*)&a1,sizeof(a1));
                    a1.show();
                }
                in.close();
                getch();
                menu();
            };
        };
};
class doctor_three:public info
{
public:
        info a1;
        void get()
        {
            system("cls");
            ofstream out("appointments_2.txt", ios:: app | ios::binary);
            a1.get();
            out.write((char*)&a1, sizeof(info));
            out.close();
            cout << "Your Entry Has Been Saved!";
            getch();
            menu();
        };
        void show()
        {
            ifstream in("appointments_2.txt");
            if(in = NULL)
            {
                cout << "\n No Data in the File";
                cout << "\n\n\t Press Any Key to Continue";
                getch();
                menu();
            }
            else
            {
                while(!in.eof())
                {
                    in.read((char*)&a1,sizeof(a1));
                    a1.show();
                }
                in.close();
                getch();
                menu();
            };
        };
};

class staff:public one
{
    public:
        info a1;
        void get()
        {
            system("cls");
            ofstream out("appointments_2.txt", ios:: app | ios::binary);
            a1.get();
            out.write((char*)&a1, sizeof(info));
            out.close();
            cout << "Your Entry Has Been Saved!";
            getch();
            menu();
        };
        void show()
        {
            ifstream in("appointments_2.txt");
            if(in = NULL)
            {
                cout << "\n No Data in the File";
                cout << "\n\n\t Press Any Key to Continue";
                getch();
                menu();
            }
            else
            {
                while(!in.eof())
                {
                    in.read((char*)&a1,sizeof(a1));
                    a1.show();
                }
                in.close();
                getch();
                menu();
            };
        };
};
