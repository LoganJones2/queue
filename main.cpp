#include <iostream>
#include "Queue.h"
using namespace std;

int main(){
  //create Queue object
  Queue q;
  
  //test various functions of Queue object
  //test push function by adding 5 numbers
  for(int i=0; i<5; i++){
    q.push((i+10)*5);
  }
  
  //output front and back to check respective function
  cout << "Front is: " << q.get_front() << endl;
  cout << "Back is: " << q.get_back() << endl;
  
  //push another object and pop front object
  q.push(-25);
  q.pop();
  
  //output size.  Should be 5.  Then get new front and back.
  cout << "Size is: " << q.get_size() << endl;
  cout << "Front is: " << q.get_front() << endl;
  cout << "Back is: " << q.get_back() << endl;
  cout << "Second is: " << q.get_second() << endl;
  
  //end program
  return 0;
}
