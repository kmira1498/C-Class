#include <iostream>

// Exercice 2
using namespace std;

template <class T>
class StackI
{
    public:
        virtual void push(T t) = 0;
        virtual void print()=0;
        virtual void pop() = 0;
        virtual T top() =0;
        virtual bool isEmpty() = 0;
};

template <class T>
class Stack: public StackI<T>
{
    protected:
        T *arr;
        int sizearr;
        int numberobjects = 0;

    public:
        Stack()
        {
            arr = new T[20];
            sizearr = 20;
        }
        Stack(int N)
        {
            arr = new T[N];
            sizearr = N;
        }
    public :
        void push(T t)
        {
            arr[sizearr-numberobjects-1] = t;
            numberobjects += 1;

        }
        void print()
        {
            if (isEmpty()==false)
            {
                cout << "The current stack is: \n[\n";
                for (int i = sizearr-numberobjects;i<sizearr;i++)
                {
                    cout << arr[i] << "\n";
                }
                cout << "]\n\n";
            }
            else
            {
                cout << "STACK IS EMPTY\n" << endl;
            }

        }
        T top()
        {
            if (isEmpty()==true)
            {
                cout << "STACK IS EMPTY";
            }
            else
            {
                return arr[sizearr-numberobjects];
            }
        }
        void pop()
        {
            if (isEmpty()==true)
            {
                cout << "STACK IS EMPTY";
            }
            else
            {
                arr[sizearr-numberobjects] = 0;
                numberobjects -= 1;
            }

        }
        bool isEmpty()
        {
            if (numberobjects == 0)
            {
                return true;
            }
            return false;
        }

};

int main()
{
    Stack<int> s(6);
    cout << "We are starting with:\n" << endl;
    s.print();
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.print();
    s.pop();
    s.print();
    s.push(6);
    s.pop();
    s.print();
    s.pop();
    s.print();
    s.pop();
    s.print();
    s.pop();
    s.print();
    s.pop();
    s.print();
    s.pop();
    s.print();
  
    return 0;
}