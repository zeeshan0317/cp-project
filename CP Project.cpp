#include <iostream>
#include <string>

using namespace std;
struct course{
    string name;
    float crHrs;
    int obMarks;
    float weightage;
};
int main()
{
    int c;
    float totalw=0,totalcr=0;
    float sgpa;

    cout << "Enter number of courses: " << endl;
    cin>>c;
    course courses[c];

    for(int i=0;i<c;i++){
        cout<<endl<<"Enter course name: ";
        cin.sync();
        getline(cin,courses[i].name);

        cout<<endl<<"Enter course credit Hours: ";

        cin>>courses[i].crHrs;
        cout<<endl<<"Enter obtained marks: ";
        cin>>courses[i].obMarks;

        if(courses[i].obMarks>85){
            courses[i].weightage=4.00*courses[i].crHrs;
            totalcr+=courses[i].crHrs;
            totalw+=courses[i].weightage;
            }
        else if(courses[i].obMarks>81){
            courses[i].weightage=3.67*courses[i].crHrs;
            totalcr+=courses[i].crHrs;
            totalw+=courses[i].weightage;
            }
        else if(courses[i].obMarks>77){
            courses[i].weightage=3.33*courses[i].crHrs;
            totalcr+=courses[i].crHrs;
            totalw+=courses[i].weightage;
            }
        else if(courses[i].obMarks>73){
            courses[i].weightage=3.00*courses[i].crHrs;
            totalcr+=courses[i].crHrs;
            totalw+=courses[i].weightage;
            }
        else if(courses[i].obMarks>69){
            courses[i].weightage=2.67*courses[i].crHrs;
            totalcr+=courses[i].crHrs;
            totalw+=courses[i].weightage;
            }
        else if(courses[i].obMarks>65){
            courses[i].weightage=2.33*courses[i].crHrs;
            totalcr+=courses[i].crHrs;
            totalw+=courses[i].weightage;
            }
        else if(courses[i].obMarks>61){
            courses[i].weightage=2.00*courses[i].crHrs;
            totalcr+=courses[i].crHrs;
            totalw+=courses[i].weightage;
            }
        else if(courses[i].obMarks>57){
            courses[i].weightage=1.67*courses[i].crHrs;
            totalcr+=courses[i].crHrs;
            totalw+=courses[i].weightage;
            }
        else if(courses[i].obMarks>53){
            courses[i].weightage=1.33*courses[i].crHrs;
            totalcr+=courses[i].crHrs;
            totalw+=courses[i].weightage;
            }
        else if(courses[i].obMarks>=50){
            courses[i].weightage=1.33*courses[i].crHrs;
            totalcr+=courses[i].crHrs;
            totalw+=courses[i].weightage;
            }
        else{
            courses[i].weightage=0.00;
            totalcr+=courses[i].crHrs;
            printf("Please repeat this course,you have failed\n");

            }
        }

    sgpa=totalw/totalcr;

    cout<<"Your GPA for this semester is: "<<sgpa;
    return 0;
}
