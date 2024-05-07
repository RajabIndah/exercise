#include <iostream>

using namespace std;

int main () {
    bool isTrue = false;

for (int i = 0; !isTrue; ++i) {
int number;
cout <<"please select area of shape to calculate"<< endl <<"1. square" << endl <<"2. rectangle" << endl <<"3. triangle" << endl << "4. quit program" << endl<<" "<< endl <<"enter selection"<< endl;
cin >> number;
double area;
while (number>= 1 && number <= 4){
if (number== 1){
 double length;
 cout<<"enter length"<< endl;
 cin >> length;
 area = length * length;
 cout <<"area of square is "<< area;
    return 0;
    
} else if (number ==2){
        double length;
        double width;
        cout<<"enter length"<< endl; 
        cin >> length;
        cout<<"enter width"<< endl;
        cin >> width;
        area = width * length;
        cout <<"area of rectangle is "<< area;
    return 0;
} else if (number == 3){
            double length;
        double width;
        cout<<"enter length"<< endl; 
        cin >> length;
        cout<<"enter width"<< endl;
        cin >> width;
        area = width * length * 0.5;
        cout <<"area of triangle is "<< area;
        return 0;
}else {
    return 0;
}
}
cout<<"Your input was "<<number<<" which is invald input"<<endl<<"Please enter valid input";
if (number>= 1 && number <= 4){
        isTrue = true;
    }
}
}