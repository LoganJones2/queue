#include <iostream>
#include "Queue.h"
using namespace std;

int main(){
  //create Queue object
  Queue<int> q;
  Queue<char> ch;
  
  //test various functions of Queue object
  //test push function by adding 5 numbers
  for(int i=0; i<5; i++){
    q.push((i+10)*5);
	ch.push((i + 10) * 5);
  }
  
  //output front and back to check respective function
  cout << "Front of int Queue is: " << q.get_front() << endl;
  cout << "Back of int Queue is: " << q.get_back() << endl;
  
  cout << "Front of char Queue is: " << ch.get_front() << endl;
  cout << "Back of char Queue is: " << ch.get_back() << endl;


  //push another object and pop front object
  q.push(-25);
  q.pop();
  ch.push(52);
  ch.pop();
  
  //output size.  Should be 5.  Then get new front and back.
  cout << "Size of int Queue is: " << q.get_size() << endl;
  cout << "Front of int Queue is: " << q.get_front() << endl;
  cout << "Back of int Queue is: " << q.get_back() << endl;

  cout << "Size of char Queue is: " << ch.get_size() << endl;
  cout << "Front of char Queue is: " << ch.get_front() << endl;
  cout << "Back of char Queue is: " << ch.get_back() << endl;

  //end program
  return 0;
}
