// DS_lb02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Dhiren Mahajan
//M14536148

#include <fstream>
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

//defining the global maximum array size variable:
#define MAX 30
//first class implementation:
template<class T>
class OrderedList
{
protected:
    int z=MAX-2;
    bool rem;
    bool found;
public:
int t1=0;
T *arr [MAX];
//constructor:
	OrderedList()
	{
		for (int i = 0; i < MAX; i++)
		{
			arr[i] = NULL;
		}

	}
//function to add items:
	void AddItem(T item)
	{

		for (int i = 0; i < MAX; i++)
		{
			if (arr[i] == NULL)
			{
				arr[i] = new T;
				t1++;
				*arr[i] = item;
				t1++;
				break;
			}


		}
		//bubble sort algorithm
	    int n=MAX;
	    t1++;
        for (int i = 0; i < n-1; i++)
        {
          for (int j = 0; j < n-i-1; j++)
          {
            if(arr[j]!=NULL && arr[j+1]!=NULL)
            {
                t1++;
            if (*arr[j] > *arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                t1++;
            }
            }
          }
        }

	}
//function to remove an item from the array:
	void RemoveItem(T item)
	{	rem=true;
	    t1++;
		int j=0;
		t1++;
		//deleting the given element:
		for (int i = 0; i < MAX; i++)
    		{   if(arr[i] != NULL)
    		{t1++;
    			if (*arr[i] == item)
    			{
    				delete arr[i];
    				arr[i] = NULL;
    				t1++;
    				j=i;
    				t1++;
    				break;
    			}
    			else{
    			    continue;
    			}
    		}
    		else{
    		    continue;
    		}
    		}
		//shifts the elements to the left after deletion:
		for (int i = j; i < MAX-1; i++)
		{
		    arr[i] = new T;
		    t1++;
			arr[i] = arr[i + 1];
			t1++;
		}


	}
//function to display the contents of the array:
	void display()
	{   t1++;
	    if(rem==true)
        {
           for(int i=MAX-1;i>=MAX-25;i--)
	    {
    		arr[i] = NULL;
    		t1++;
	    }
	    rem=false;
	    t1++;
        }
		for (int i = 0; i < MAX; i++)
		{

		    if (arr[i] != NULL)
		    {
    			cout << "Value of var[" << i << "] = ";
    			cout << *arr[i] << endl;
		    }
		    else
		    {
		        break;
		        //continue;
		    }

		}

	}
//function to delete all the elements of the array and make it empty:
	void MakeEmpty()
	{
		for (int i = 0; i < MAX; i++)
		{
		    if(arr[i]!=NULL)
		    {
		    delete arr[i];
			arr[i] = NULL;
			t1++;
		    }
		    else
		    {
		        continue;
		    }
		}
	}
//function to check if the array is empty:
	bool IsEmpty()
	{
		for (int i = 0; i < MAX; i++)
		{
			if (arr[i] != NULL)
			{
				return false;
			}
			else
			{
			    continue;
			}
		}
		return true;
	}
//function to check if the array is full:
	bool IsFull()
	{
	    int j=0;
	    t1++;
	    for(int i=0;i<MAX;i++)
        {
            if(arr[i]!=NULL)
            {
                j++;
            }
        }
	    t1++;
		if (j == MAX)
		{
			return true;
		}
		else
		{
		    return false;
		}
	}

	bool operator<(const T& rhs)
	{
		return true;
	}
	bool operator>(const T& rhs)
	{
		return true;
	}
	bool operator==(const T& rhs)
	{
		return true;
	}


};

//second class implementation:
template<class T>
class OL2: public OrderedList<T>
{  private:
bool rem2;
T *arr [MAX];

	public:
	int t2=0;
//constructor:
	OL2()
	{
		for (int i = 0; i < MAX; i++)
		{
			arr[i] = NULL;
		}

	}
//function to add elements in the array:
    void AddItem(T item)
	{

		if (arr[0] == NULL)
			{
			    arr[0] = new T;
			    t2++;
				*arr[0] = item;
				t2++;

			}
		else
		{
		    for (int i=MAX-1; i >= 0; i--)
	    	{
		    	if (arr[i] != NULL)
		    	{
			        arr[i+1] = new T;
			        t2++;
			    	*arr[i+1] = item;
			    	t2++;
				    break;
    			}

		    }

		}
        //bubble sort algorithm
	    int n=MAX;
	    t2++;
        for (int i = 0; i < n-1; i++)
        {
          for (int j = 0; j < n-i-1; j++)
          {
            if(arr[j]!=NULL && arr[j+1]!=NULL)
            {t2++;
            if (*arr[j] > *arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                t2++;
            }
            }
          }
        }

	}
//function to remove an item from the array:
	void RemoveItem(T item)
	{	rem2=true;
	t2++;
	    int j=0;
	    t2++;
//deleting the given element:
		for (int i = 0; i < MAX; i++)
    		{   if(arr[i] != NULL)
    		{t2++;
    			if (*arr[i] == item)
    			{
    				delete arr[i];
    				arr[i] = NULL;
    				t2++;
    				j=i;
    				t2++;
    				break;
    			}
    			else{
    			    continue;
    			}
    		}
    		else{
    		    continue;
    		}
    		}
//shifts the elements to the left after deletion:
		for (int i = j; i < MAX-1; i++)
		{
		    arr[i] = new T;
		    t2++;
			arr[i] = arr[i + 1];
			t2++;
		}


	}
//function to display the contents of the array:
	void display()
	{
	    t2++;
        if(rem2==true)
        {
           for(int i=MAX-1;i>=MAX-25;i--)
	    {
    		arr[i] = NULL;
    		t2++;
	    }
	    rem2=false;
	    t2++;
        }
		for (int i = 0; i < MAX; i++)
		{
		    if (arr[i] != NULL)
		    {
    			cout << "Value of var[" << i << "] = ";
    			cout << *arr[i] << endl;
		    }
		    else{
		        break;
		        //continue;
		    }

		}
	}
//function to delete all the elements of the array and make it empty:
	void MakeEmpty()
	{
		for (int i = 0; i < MAX; i++)
		{
		    if(arr[i]!=NULL)
		    {
		    delete arr[i];
			arr[i] = NULL;
			t2++;
		    }
		    else
		    {
		        continue;
		    }
		}
	}
//function to check if the array is empty:
	bool IsEmpty()
	{
		for (int i = 0; i < MAX; i++)
		{
			if (arr[i] != NULL)
			{
				return false;
			}
			else
			{
			    continue;
			}
		}
		return true;
	}
//function to check if the array is full:
	bool IsFull()
	{
	    int i=0;
	    t2++;
	    while(arr[i]!=NULL)
	    {
	        i++;
	    }
	    t2++;
		if (i >= MAX)
		{
			return true;
		}
		else
		{
		    return false;
		}
	}
};

//third class implementation:
template<class T>
class OL3: public OrderedList<T>
{
private:
    int c=0,p=0,q=0;
    T *arr [MAX];

public:
int t3=0;
//function to check if the array is full:
    bool IsFull()
    {
        int i=0;
        t3++;
    	while(arr[i]!=NULL)
    	{
    	  i++;
    	}
    	t3++;
        if (i >= MAX)
    	{
    		return true;
    	}
    	else
    	{
    	    return false;
    	}
    }


//constructor:
        OL3()
    	{
    		for (int i = 0; i < MAX; i++)
    		{
    			arr[i] = NULL;
    			t3++;
    		}

    	}
//function to add elements in the array:
        void AddItem(T item)
    	{
    		int x=(0+MAX)/2;
    	    t3++;

    		for (int i = 0; i < MAX; i++)
    		{   t3++;
    		    if (IsFull())
    	        {
    	            cout<<"the array is full"<<endl;
    	            break;
    	        }

    		    if(arr[x]==NULL)
    		    {

    		        arr[x] = new T;
    		        t3++;
    				*arr[x] = item;
    				t3++;
    				break;
    		    }

    		    c++;
    		    t3++;
    		    if(c%2!=0)
    		    {
    		        p++;
    		        t3++;
    		        if((x+p)>=MAX)
    		        {
    		            break;
    		        }
    		        arr[x+p] = new T;
    		        t3++;
    		        *arr[x+p] = item;
    		        t3++;
    				break;
    		    }

    		    else if(c%2==0)
    		    {
    		        q++;
    		        arr[x-q] = new T;
    		        t3++;
    		        *arr[x-q] = item;
    		        t3++;

    				break;
    		    }

    		}

    	}

//function to remove an item from the array:
    	void RemoveItem(T item)
    	{
    		for (int i = 0; i < MAX; i++)
    		{   if(arr[i] != NULL)
    		{
    		    t3++;
    			if (*arr[i] == item)
    			{
    				delete arr[i];
    				arr[i] = NULL;
    				t3++;
    				break;
    			}
    			else{
    			    continue;
    			}
    		}
    		else{
    		    continue;
    		}
    		}


    	}

//function to display the contents of the array:
	void display()
	{
	    //bubble sort algorithm
	    int n=MAX;
	    t3++;
        for (int i = 0; i < n-1; i++)
        {
          for (int j = 0; j < n-i-1; j++)
          {
            if(arr[j]!=NULL && arr[j+1]!=NULL)
            {t3++;
            if (*arr[j] > *arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                t3++;
            }
            }
          }
        }
		for (int i = 0; i < MAX; i++)
		{
		    if (arr[i] != NULL){
    			cout << "Value of var[" << i << "] = ";
    			cout << *arr[i] << endl;
		    }
		    else{
		        //break;
		        continue;
		    }

		}
	}
//function to delete all the elements of the array and make it empty:
	void MakeEmpty()
	{
		for (int i = 0; i < MAX; i++)
		{
		    if(arr[i]!=NULL)
		    {
		    delete arr[i];
			arr[i] = NULL;
			t3++;
		    }
		    else
		    {
		        continue;
		    }
		}
	}
//function to check if the array is empty:
	bool IsEmpty()
	{
		for (int i = 0; i < MAX; i++)
		{
			if (arr[i] != NULL)
			{
				return false;
			}
			else
			{
			    continue;
			}
		}
		return true;
	}

};

//the main function:
int main()
{

    //asking the user for a choice to select the class he/she wants to implement:
    int choice;
    cout<<"---------------------------------------------------------------------"<<endl;
    cout<<"Enter the class you want to implement(1/2/3): ";
    cin>>choice;
    cout<<"---------------------------------------------------------------------"<<endl;
    cout<<"Sorted Array:"<<endl;

    //implementation of class-1:
    if(choice==1){
	int sum{0};
	for(int i=0;i<100;i++){
		 OrderedList<int> list;

    {
	    int x[MAX];

	    //adding random numbers to the array:
	    for(int i=0;i<MAX;i++)
	    {
	        x[i]=rand()%1000+1;
	        list.AddItem(x[i]);
	    }
	    list.display();
	    cout<<"------------------------------------------------------------"<<endl;
	cout << "Is Full ? = " << list.IsFull() << endl;
	    cout<<"------------------------------------------------------------"<<endl;
	    cout<<"Items remaining after the removal of 25 random items:"<<endl;
	    //removing 25 random numbers from the array:
	    for(int i=0;i<25;i++)
	    {
	        int r=rand()%MAX;
	        list.RemoveItem(x[r]);
	    }
	    list.display();
	    //checking if the array is full or empty after adding and removing random elements:

	cout<<"------------------------------------------------------------"<<endl;
	cout << "Is Empty ? = " << list.IsEmpty() << endl;
	cout << "Making Empty..." << endl;
	list.MakeEmpty();
	cout << "Is Empty ? = " << list.IsEmpty() << endl;
	cout<<"------------------------------------------------------------"<<endl;
	    cout<<"Efficiency = "<<list.t1<<endl;
	cout<<"------------------------------------------------------------"<<endl;
	cout << "end" << endl;
    }
	sum=sum+list.t1;
	}
	cout<<"Average Efficiency of class 1 is ="<<sum/100<<endl;
	}
	//implementation of class-2:
	if(choice==2)
	{
		int sum1{0};
	for(int i=0;i<100;i++){
OL2<int> l2;
	    int x[MAX];
	    //adding random numbers to the array:
	    for(int i=0;i<MAX;i++)
	    {
	        x[i]=rand()%1000+1;
	        l2.AddItem(x[i]);
	    }
	    l2.display();
	    cout<<"------------------------------------------------------------"<<endl;
	cout << "Is Full ? = " << l2.IsFull() << endl;
	    cout<<"------------------------------------------------------------"<<endl;
	    cout<<"Items remaining after the removal of 25 random items:"<<endl;

	    //removing 25 random numbers from the array:
	    for(int i=0;i<25;i++)
	    {
	        int r=rand()%MAX;
	        l2.RemoveItem(x[r]);
	    }
	    l2.display();


	    //checking if the array is full or empty after adding and removing random elements:

	 cout<<"------------------------------------------------------------"<<endl;
	cout << "Is Empty ? = " << l2.IsEmpty() << endl;
	cout << "Making Empty..." << endl;
	l2.MakeEmpty();
	cout << "Is Empty ? = " << l2.IsEmpty() << endl;
	cout<<"------------------------------------------------------------"<<endl;
	cout<<"Efficiency = "<<l2.t2<<endl;
	cout<<"------------------------------------------------------------"<<endl;
	cout << "end" << endl;
	sum1=sum1+l2.t2;
	}
	cout<<"Average Efficiency of class 2 is ="<<sum1/100<<endl;
	}
	

	//implementation of class-1:
	if(choice==3){
	int sum2{0};
	for(int i=0;i<100;i++){
		OL3<int> l3;
	    int x[MAX];
	    //adding random numbers to the array:
	    for(int i=0;i<MAX+1;i++)
	    {
	        x[i]=rand()%1000+1;
	        l3.AddItem(x[i]);
	    }
	    l3.display();
	    cout<<"------------------------------------------------------------"<<endl;
	cout << "Is Full ? = " << l3.IsFull() << endl;
	    cout<<"------------------------------------------------------------"<<endl;
	    cout<<"Items remaining after the removal of 25 random items:"<<endl;
	    //removing 25 random numbers from the array:
	    for(int i=0;i<25;i++)
    	{
	
    	    //int r=rand()%MAX;
    	    //cout << x[i] << endl;
	        l3.RemoveItem(x[i]);
	    }
	    l3.display();

	    //checking if the array is full or empty after adding and removing random elements:

	cout<<"------------------------------------------------------------"<<endl;
	cout << "Is Empty ? = " << l3.IsEmpty() << endl;
	cout << "Making Empty..." << endl;
	l3.MakeEmpty();
	cout << "Is Empty ? = " << l3.IsEmpty() << endl;
	cout<<"------------------------------------------------------------"<<endl;
	    cout<<"Efficiency = "<<l3.t3<<endl;
	cout<<"------------------------------------------------------------"<<endl;
	cout << "end" << endl;
	sum2=sum2+l3.t3;
	}
	cout<<"Average Efficiency of class 3 is ="<<sum2/100<<endl;
	}
	


	return 0;
}
