#include "max_heap.h"

#include <iostream>
#include <climits>

max_heap::max_heap(int cap) {
	m_size = 0;
	m_capacity = cap;
	m_arr = new int[m_capacity];
}

max_heap::~max_heap() {
	delete m_arr;
}

void swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void max_heap::max_heapify(int i) {
	int l = left(i);
	int r = right(i);
	int smollest = i;
	
	if(l < m_size && m_arr[l] > m_arr[i]) {
		smollest = l;
	}
	
	if(r < m_size && m_arr[r] > m_arr[smollest]) {
		smollest = r;
	}
	
	if(smollest != i) {
		swap(&m_arr[smollest], &m_arr[i]);
		max_heapify(smollest);
	}
}

int max_heap::parent(int i) {
	return (i - 1) / 2;
}

int max_heap::left(int i) {
    	return 2 * i + 1;
}

int max_heap::right(int i) {
    	return 2 * i + 2;
}

int max_heap::extract_max() {
	if(m_size <= 0) {
		return INT_MIN;
	}
	
	if(m_size == 1) {
		--m_size;
		return m_arr[0];
	}
	
	int root = m_arr[0];
	m_arr[0] = m_arr[m_size - 1];
	--m_size;
	max_heapify(0);
	return root;
}

void max_heap::decrease_key(int i, int new_val) {
	m_arr[i] = new_val;
	while(i != 0 && m_arr[parent(i)] < m_arr[i]) {
		swap(&m_arr[parent(i)], &m_arr[i]);
		i = parent(i);
	}
}

int max_heap::get_max() {
    	return m_arr[0];
}

void max_heap::delete_key(int i) {
    	decrease_key(i, INT_MAX);
	extract_max();
}

void max_heap::insert_key(int k) {
	if (m_size == m_capacity) {
		std::cout << "\nOverflow: Could not insertKey\n";
		return;
	}
	
	m_size++;
	int i = m_size - 1;
	m_arr[i] = k;
	
	while (i != 0 && m_arr[parent(i)] < m_arr[i]) {
		swap(&m_arr[i], &m_arr[parent(i)]);
		i = parent(i);
	}
}

bool max_heap::emprty() {
    	return m_size == 0;
}
