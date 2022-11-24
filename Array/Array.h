#ifndef
#define


class Array
{
   public:
	// Default constructor
	Array();
	// Constructors to set the initial capacity of the array
	Array(const Array&  newArray);
	Array(int capacity);
	// Destructor
	~Array();
	// Insert a integer at the given index
	void insert(int value, int index);
	// Remove the integer at the given index
	void removeAt(int index);
	// Retnrn the value at the given index
	int valueAt(int index);
	// Sort the array using insertion sort
	void insertion_sort();
	// Print the elements in the array
	void print();
	// Return the current number of elements in the array
	int size();
	// Return the max capacity of the array
	int capacity();

   private:
	// Pointer to create 
	int* array;
	// The size of the array
	int size;
	// The max capacity of the array
	int capacity; 
	

}

#endif