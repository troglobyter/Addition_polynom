#ifndef TERM_H
#define TERM_H

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
  
  int getcoefficient(void) const;
  int getexponent(void) const;
  void setcoefficient(int);
  void setexponent(int);
  
  bool Term::operator<(const Term& rhs);
  bool Term::operator>(const Term& rhs);
  bool Term::operator==(const Term& rhs);

  const Term& Term::operator=(const Term& rhs); 
  const Term operator+(const Term& rhs) const; //used for adding two terms
  
  friend ostream& operator<<(ostream& output, const Term& aTerm);
};
#endif
