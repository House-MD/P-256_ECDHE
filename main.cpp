#include <gmu.h>
#include <iostream>
#include <string>

//NIST P-256
struct EllipticCurve{
  mpz_t p;
  mpz_t a;
  mpz_t b;
};

struct Point{
  mpz_t x;
  mpz_t y;
  bool infinity;
};

mpz_t generate_random(){
  //later lol
}

Point add_points(const Point &p, const Point &q, const EllipticCurve &curve){

}

Point scalar_multiply(const Point &p, const Point &q, const EllipticCurve &curve){

}


