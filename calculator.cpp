#include <iostream>
#include <math.h>

using namespace std;

int main(){
//vriables thare used in this program
int num1, num2 ,sum;
/*we need (+ - * / =) tose signs to perform our task so we have to diclare character data types */
char sign;
 
/*so first we need to ask a user to enter a number and sign and then the last number to be oprated */

cin >> num1 >> sign >> num2;

/*since we don't know the sign that user use we have to make a logic*/
 
 
if (sign == '+') {
// if the user enters the + sign  the program have to add those two numbers
sum=num1+num2;
cout<<sum<<endl;
}
if (sign == '-') {
// if the user enters the - sign  the program have to decrease those two numbers
sum=num1-num2;
cout<<sum<<endl;
}
if (sign == '*') {
// if the user enters the * sign  the program have to multiplay those two numbers
sum=num1*num2;
cout<<sum<<endl;
}
if (sign == '/') {
// if the user enters the / sign  the program have to add divide two numbers
sum=num1/num2;
cout<<sum<<endl;
}


return 0;

}