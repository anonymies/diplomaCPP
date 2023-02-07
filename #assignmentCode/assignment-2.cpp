#include <iostream>
using namespace std;

int sem;
string studName, address, studID, grade, status;
double sub1, sub2, sub3, sub4, sub5, pointM, gpa, total;


double gradecond()
{
    if(grade=="A" || grade=="A+" || grade=="a" || grade=="a+")
    {
        pointM = 4.00;
    }
    else if(grade=="A-" || grade=="a-")
    {
        pointM = 3.70;
    }
    else if(grade=="B+" || grade=="b+")
    {
        pointM = 3.30;
    }
    else if(grade=="B" || grade=="b")
    {
        pointM = 3.00;
    }
    else if(grade=="B-" || grade=="b-")
    {
        pointM = 2.70;
    }
    else if(grade=="C+" || grade=="c+")
    {
        pointM = 2.30;
    }
    else if(grade=="C" || grade=="c")
    {
        pointM = 2.00;
    }
    else if(grade=="C-" || grade=="c-")
    {
        pointM = 1.70;
    }
    else if(grade=="D+" || grade=="d+")
    {
        pointM = 1.30;
    }
    else if(grade=="D" || grade=="d")
    {
        pointM = 1.00;
    }
    else if(grade=="E" || grade=="e")
    {
        pointM = 0.70;
    }
    else if(grade=="F" || grade=="f")
    {
        pointM = 0.00;
    }
    else
    {
        pointM = 0.00;
        cout << "Tidak Hadir\n";
    }
}


double gpacond()
{
    if(gpa>=0.0 && gpa<=0.99)
    {
        status = "Failed semester - registration suspended";
    }
    else if(gpa>=1.0 && gpa<=1.99)
    {
        status = "On probation for next semester";
    }
    else if(gpa>=2.0 && gpa<=2.99)
    {
        status = "";
    }
    else if(gpa>=3.0 && gpa<=3.49)
    {
        status = "Dean's list for semester";
    }
    else if(gpa>=3.5 && gpa<=4.0)
    {
        status = "Highest honors for semester";
    }
    else
    {
        status = "Failed semester - registration suspended";
    }
}


int main()
{
    cout << "Welcome to DCS Student GPA Calculation System\n\n";
    char loop = 'Y';
    while(loop == 'Y' || loop == 'y')
    {
        cout << "Student name: ";
        getline (cin, studName);
        cout << "\nStudent ID: ";
        getline (cin, studID);
        cout << "\nAddress: ";
        getline (cin, address);
        cout << "\nSemester: ";
        cin >> sem;
        if(sem==1)
        {
            cout << "\nSubject Taken:\n";
            cout << "\n1.CSC1024--Introduction to programming\nGrade: ";
            cin >> grade;
            gradecond();
            sub1 = pointM * 4;
            cout << "2.CSC1254--System analysis & design\nGrade: ";
            cin >> grade;
            gradecond();
            sub2 = pointM * 4;
            cout << "3.CSC1264--Data analysis & design\nGrade: ";
            cin >> grade;
            gradecond();
            sub3 = pointM * 4;
            cout << "4.ENG1432--English proficiency 1\nGrade: ";
            cin >> grade;
            gradecond();
            sub4 = pointM * 2;
            cout << "5.MAT1093--Discrete Math\nGrade: ";
            cin >> grade;
            gradecond();
            sub5 = pointM * 3;
            total = sub1 + sub2 + sub3 + sub4 + sub5;
            gpa = total/(4 + 4 + 4 + 2 + 3);
            gpacond();
            cout << "\nGPA:"<<gpa<<"\n";
            cout << "\nStatus: "<<status<<"\n";
        }
        else
        {
            cout << "This system is still under construction, for assignment purposes only\n";
        }

        cout << "Continue using the system? Enter 'Y' for Yes or 'N' for No\n";
        cin >> loop;
        cin.ignore();
    }


    if(loop=='N' || loop=='n')
    {
        cout << "Thank you!\n";
    }
    else
    {
        return 0;
    }
}
