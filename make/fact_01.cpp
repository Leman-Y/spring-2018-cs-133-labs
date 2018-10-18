#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

int fact(int n){
  return 2;
}

TEST_CASE("Testing FActorial"){
  REQUIRE(fact(5)==120);
  WARN(fact(5))==120);
  CHECK(fact(5)==150);
  CHECK(fact(2)==2);
}

