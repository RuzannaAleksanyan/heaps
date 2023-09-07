#include "min_heap.h"

#include<iostream>
#include<climits>

min_heap::min_heap(int cap) {
	m_size = 0;
	m_capacity = cap;
	m_arr = new int[cap];
}

min_heap::~min_heap() {
    delete m_arr;
}

void swap(int *x, int *y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

void min_heap::min_heapify(int i) {
	int l = left(i);
	int r = right(i);
	int smallest = i;
	if (l < m_size && m_arr[l] < m_arr[i]) {
		smallest = l;
    }
	if (r < m_size && m_arr[r] < m_arr[smallest]) {
		smallest = r;
    }
	if (smallest != i) {
		swap(&m_arr[i], &m_arr[smallest]);
		min_heapify(smallest);
	}
}

int min_heap::parent(int i) {
    return (i - 1) / 2;
}

int min_heap::left(int i) {
    return 2 * i + 1;
}

int min_heap::right(int i) {
    return 2 * i + 2;
}

int min_heap::extract_min() {
	if (m_size <= 0)
		return INT_MAX;
	if (m_size == 1) {
		m_size--;
		return m_arr[0];
	}

	int root = m_arr[0];
	m_arr[0] = m_arr[m_size-1];
	m_size--;
	min_heapify(0);

	return root;
}

void min_heap::decrease_key(int i, int new_val) {
	m_arr[i] = new_val;
	while (i != 0 && m_arr[parent(i)] > m_arr[i]) {
        swap(&m_arr[i], &m_arr[parent(i)]);
        i = parent(i);
	}
}

int min_heap::get_min() {
    return m_arr[0];
}

void min_heap::delete_key(int i) {
	decrease_key(i, INT_MIN);
	extract_min();
}

void min_heap::insert_key(int k) {
	if (m_size == m_capacity) {
		std::cout << "\nOverflow: Could not insertKey\n";
		return;
	}

	m_size++;
	int i = m_size - 1;
	m_arr[i] = k;

	while (i != 0 && m_arr[parent(i)] > m_arr[i]) {
        swap(&m_arr[i], &m_arr[parent(i)]);
        i = parent(i);
	}
}

bool min_heap::empty() {
    return m_size == 0;
}
