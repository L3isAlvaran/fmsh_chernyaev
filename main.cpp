#include <iostream>
using namespace std;

struct Student {
    string profile;
    int room;

    void lubimie_olympiady(string olProfile) {
        if (olProfile == "fizmat") {
            cout << "math and phys" << endl;
        } else if (olProfile == "himbio") {
            cout << "chem and bio" << endl;
        }
    }
    void obuchaetsya_li_etot_student_v_10_2(int studentsRoom) {
         (402 < studentsRoom and studentsRoom < 412) ? (cout << "yes") : (cout << "no");
    }
};

int main(){
    Student student = {"fizmat", 406};
    student.lubimie_olympiady("fizmat");
    student.obuchaetsya_li_etot_student_v_10_2(406);
}

