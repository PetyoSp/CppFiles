#include <iostream>
#include <string>

using namespace std;

class STUDENTS{
public:

    STUDENTS(string fname, string sname, long long int egn, int year){
        setStudentsFirsNAme(fname);
        setStudentsSurName(sname);
        setEGN(egn);
        setYear(year);

    }

    void setStudentsFirsNAme(string StudentFirsNAme){
        this->StudentsFirsName = StudentFirsNAme;
    }

    void setStudentsSurName(string StudentSurName){
        this->StudentsSurName= StudentSurName;
    }

    void setEGN(long long int egn){
        this->egn = egn;
    }

    void setYear(int year){
        this->year = year;
    }

    string  getStudentsFirsName(){
        return this->StudentsFirsName ;
    }
    string  getStudentsSurName(){
        return this->StudentsSurName ;
    }
    long long int  getEGN(){
        return this->egn ;
    }
    int  getYear(){
        return this->year ;
    }

    void printInfo(){
        cout<<endl;
        cout<<"Student FirstName:\t"<< getStudentsFirsName() << endl;
        cout<<"Student SurName:\t"<< StudentsSurName << endl;
        cout<<"Student EGN:\t"<< egn << endl;
        cout<<"Student Year:\t"<< year << endl;
    }

private:
    string StudentsFirsName;
    string StudentsSurName;
    long long int egn;
    int year;

};

int main(){

   STUDENTS firstStudent("Ivan","Ivanov",7231012345,3);
   STUDENTS secondStudent("Petyo","Spasov",7231012345,3);
   firstStudent.printInfo();
   secondStudent.printInfo();





    return 0;
}
