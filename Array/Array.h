#ifndef
#define


class Array
{
   public:
	Array();
	Array(int capacity);
	~Array();
	void insert(int value, int index);
	void removeAt(int index);
	int valueAt(int index);
	void insertion_sort();
	void print();
	int size();
	int capacity();
    private:
	int* array;
	int size;
	int capacity; 
	

}

#endif