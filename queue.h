#ifndef _QUEUE
#define _QUEUE

#define SIZE 10

class Queue{
  public:
    Queue();
    bool push(int);
    bool pop();
    bool is_empty();
    bool is_full();
    int get_front();
    int get_back();
    int get_size();
	int get_second();
    
  private:
    int arr[SIZE];
    int front, back, count;
};

#endif