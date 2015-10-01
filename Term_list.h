#pragma once
#include "Term.h"
#include <iostream>
#include <string>
#include <list>

using namespace std;

class Term_list{
	public:
	Term_list();

	friend istream& operator >>(istream&& INpolyStream, Term_list& list_of_terms);
	friend ostream& operator <<(ostream& OUTpolyStream, const Term_list& list_of_terms);

	Term_list& operator +(const Term_list& rhs_list_of_terms);

	private:
	list<Term> polynomial_list;

	void localize_negatives(string& polynomial_string);
	void sort();
	void collect_like_terms();
};