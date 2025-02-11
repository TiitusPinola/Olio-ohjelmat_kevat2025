#include <iostream>
#include "student.h"
#include <vector>
#include <algorithm>

int main ()
{
    int selection =0;
    vector<Student>studentList;

    do
    {
        cout<<endl;
        cout<<"Select"<<endl;
        cout<<"Add students = 0"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;

        switch(selection)
        {
        case 0:
        {
            string name;
            int age;
            cout<<"Student name?"<<endl;// Kysy käyttäjältä uuden opiskelijan nimi ja ikä
            cin>>name;
            cout<<"Student age?"<<endl;
            cin>>age;
            Student newStudent(name, age);// Lisää uusi student StudentList vektoriin.
            studentList.emplace_back(newStudent);
            break;
        }
        case 1:
            for(auto& student:studentList)// Tulosta StudentList vektorin kaikkien opiskelijoiden nimet.
            {
            student.printStudentInfo();
            }

            break;

        case 2:
            for(auto& student:studentList)
            {
                student.printStudentInfo();
            }
            cout<<endl;
            // Järjestä StudentList vektorin Student oliot nimen mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            sort(studentList.begin(),studentList.end(),[](Student& a,Student& b){
                return a.getName() < b.getName();
            });

            for(auto& student:studentList)
            {
                student.printStudentInfo();
            }

            break;

        case 3:
            for(auto& student:studentList)
            {
                student.printStudentInfo();
            }
            cout<<endl;

            sort(studentList.begin(),studentList.end(),[](Student& a,Student& b){
                return a.getAge() < b.getAge();
            });

            for(auto& student:studentList)
            {
                student.printStudentInfo();
            }
            break;
            // Järjestä StudentList vektorin Student oliot iän mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat

        case 4:
        {
            string name;
            cout<<"Student to be found name = ?"<<endl;
            cin>>name;

            auto it = find_if(studentList.begin(),studentList.end(),[name](Student& student){
                return student.getName() == name;
            });
            if(it != studentList.end()){
                cout<<"Student found!"<<" Student: "<<it->getName()<<" , Age: "<<it->getAge()<<endl;
            }else{
                cout<<"Student not found!"<<endl;
            }

            break;
            // Kysy käyttäjältä opiskelijan nimi
            // Etsi studentListan opiskelijoista algoritmikirjaston
            // find_if funktion avulla löytyykö käyttäjän antamaa nimeä
            // listalta. Jos löytyy, niin tulosta opiskelijan tiedot.
        }

    default:
        cout<< "Wrong selection, stopping..."<<endl;
        break;
    }
}while(selection < 5);

return 0;
}
