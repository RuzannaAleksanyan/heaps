#ifndef MAX_HEAP
#define MAX_HEAP

class max_heap {
private:
	int* m_arr; 
	int m_capacity; 
	int m_size; 

public:
	max_heap(int capacity);
    ~max_heap();
	void max_heapify(int);
	int parent(int i);
	int left(int i);
	int right(int i);
	int extract_max();
	void decrease_key(int i, int new_val);
	int get_max() ;
	void delete_key(int i);
	void insert_key(int k);
    bool empty();
};

#endif
