#define SIZE

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
    
  private:
    int arr[SIZE];
    int front, back, count;
};
