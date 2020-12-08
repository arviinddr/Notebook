/* __class for Stack__

* This class represents simple stack 
* stack if of last in first out
* Features:
  * Mutual Exclusion(Mutex) - to avoid race condition,
  * parallel push and push using threads

g++ exp14b.cpp -lpthread && ./a.out

*/
#include <iostream>
#include <string>
#include <mutex>
#include <functional>
#include <thread>
#include <future>


#define print(msg) std::cout << msg << std::endl
#define str(i) std::to_string(i)


class Stack {
  int *m_arr;
  int maxlen;
  int m_ptr;
  std::mutex m1;

  public:

  Stack(int len):maxlen(len),m_ptr(-1) { 
    m_arr = new int[len];
  }

  ~Stack() {
    if(m_arr!=nullptr)
        delete[] m_arr;
  }

  void push(int val) {
    print("Thread-1");
    m1.lock();
    std::cout<< "Push: " << val << std::endl; 
    m_arr[++m_ptr]=val;
    m1.unlock();
  } 

  int pop() {
    print("Thread-2");
    m1.lock();
    int val=m_arr[m_ptr--];
    m1.unlock();
    return val;
  }

  bool isFull() const { return m_ptr==maxlen-1; }
  bool isEmpty()  const { return m_ptr==-1; }

   void display(){
    print("Stack: ");
    for(int i=maxlen-1;i>=0;i--)
      print(m_arr[i]);
  }
  
  
};

int main(){
  print("Main");

  Stack s1(2);
  Stack *stackPtr = &s1;

  //std::thread t1(&Stack::push,stackPtr,2);
  std::thread t1(std::bind(&Stack::push,stackPtr,2));
  
  std::future<int> result = std::async(&Stack::pop,stackPtr);
  //std::thread t2(&Stack::pop,stackPtr);
  
  t1.join();
  print("pop: "+str(result.get()));

 // s1.display();


  print("Main end");

  return 0;
}


/* Output

Main
Thread-1
Push: 2
Thread-2
pop: 2
Main end

*/
