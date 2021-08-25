#include <iostream>
using namespace std;

class Array
{
    private:
        int *array;
        int size;
        int filled;
    public:
        Array()
        {
            size = 13;
            array = new int [size];
            for(int i=0; i<6; i++)
            {
                array[i] = i+1;
            }
            filled = 6;
        }
        Array(int size)
        {
            this->size = size;
            array = new int [size];
            filled = 0;
        }
        void printElement();
        int addAtEnd(int element);
        int improvedLinearSearch(int key);
        int insertAtIndex(int element, int index);
        int appendAtLast(int element);
        void leftShift();
        void leftRotate();
        void rightRotate();
        void reverseArray();
};

void Array::printElement()
{
    for(int i=0; i<filled; i++)
    {
        cout<<array[i]<<"---";
    }
    cout<<endl;
}

int Array::addAtEnd(int element)
{
    if(filled<size)
    {
        array[filled] = element;
        filled++;
        return true;
    }
    else
    {
        return false;
    }
}

int Array::improvedLinearSearch(int key)
{
    for(int i=0; i<filled; i++)
    {
        if(key==array[i])
        {
            if(i>0)
            {
                swap(array[i],array[i-1]);
                return i--;
            }
            return i;
        }
    }
    return -1;
}
int Array::insertAtIndex(int element, int index)
{
    for(int j=filled; j>=index; j--)
    {
        array[j+1] = array[j];
    }
    array[index] = element;
    filled++ ;
}

int Array::appendAtLast(int element)
{
    array[filled] = element;
    filled++;
}

void Array::leftShift()
{
    for(int i=1; i<filled; i++)
    {
        array[i-1] = array[i];
    }
    filled--;
}
void Array::leftRotate()
{
    int temp = array[0];
    for(int i=1; i<filled; i++)
    {
        array[i-1] = array[i];
    }
    array[filled-1] = temp;
}

void Array::rightRotate()
{
    int temp = array[filled-1];
    for(int j=filled-1; j>=0; j--)
    {
        array[j] = array[j-1];
    }
    array[0] = temp;
}

void Array::reverseArray()
{
    int start,end;
    start = 0;
    end = filled - 1;

    while (start < end)
    {
        swap(array[start] , array[end]);
        start++;
        end--;
    }
    
}

int main()
{
    Array *array1,*array2;
    array1 = new Array();

    array1->printElement();

    int element,index;
    cin>>element;
    cout<<"Position of "<<element<<" is "<<array1->improvedLinearSearch(element)<<endl;
    array1->printElement();

    cin>>element>>index;
    array1->insertAtIndex(element,index);
    array1->printElement();

    cin>>element;
    array1->appendAtLast(element);
    array1->printElement();

    array1->leftShift();
    array1->printElement();

    array1->leftRotate();
    array1->printElement();

    array1->rightRotate();
    array1->printElement();

    array1->reverseArray();
    array1->printElement();
    return 0;
}