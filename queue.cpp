#include "Queue.h"

template <class T>

//Constructor for template class
Queue<T>::Queue(){
  front = 0;
  back = -1;
  count = 0;
}

template <class T>
bool Queue<T>::push(T item){
  if(!is_full()){
    arr[++back % SIZE] = item;
    count++;
    return true;
  }
  return false;
}

template <class T>
bool Queue<T>::pop(){
  if(!is_empty()){
    front = (front + 1) % SIZE;
    count--;
    return true;
  }
  return false;
}

template <class T>
bool Queue<T>::is_empty(){
  return count == 0;
}

template <class T>
bool Queue<T>::is_full(){
  return count == SIZE;
}

template <class T>
int Queue<T>::get_front(){
  if(!is_empty()){
    return arr[front];
  }
}

template <class T>
int Queue<T>::get_back(){
  if(!is_empty()){
    return arr[back];
  }
}

template <class T>
int Queue<T>::get_size(){
  return count;
}