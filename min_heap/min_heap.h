#ifndef MIN_HEAP
#define MIN_HEAP

class min_heap {
private:
	int* m_arr; 
	int m_capacity; 
	int m_size; 

public:
	min_heap(int capacity);

  	~min_heap();

	void min_heapify(int);

	int parent(int i);

	int left(int i);

	int right(int i);

	int extract_min();

	void decrease_key(int i, int new_val);

	int get_min();

	void delete_key(int i);

	void insert_key(int k);

  	bool empty();

};

#endif
