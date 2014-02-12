#include "Queue.h"

Queue::Queue(){
  front = 0;
  back = -1;
  count = 0;
}

bool Queue::push(int item){
  if(!is_full()){
    arr[++back % SIZE] = item;
    cout++;
    return true;
  }
  return false;
}

bool Queue::pop(){
  if(!is_empty()){
    front = (front + 1) % SIZE;
    count--;
    return true;
  }
  return false;
}

bool Queue::is_empty(){
  return count == 0;
}

bool Queue::is_full(){
  return count == SIZE;
}

int Queue::get_front(){
  if(!is_empty()){
    return arr[front];
  }
}

int Queue::get_back(){
  if(!is_empty()){
    return arr[back];
  }
}

int Queue::get_size(){
  return count;
}
