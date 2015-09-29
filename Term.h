#include <iostream>

using namespace std;

class Term{
private:
int coefficient;
int exponent;
public:
Term();
Term(int t_coeff, int t_exp);
Term(Term& a_Term);
int getexponent() const;
bool operator >(Term& rhs);
