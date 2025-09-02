#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../include/doctest.h"

bool isPrime(int x);
int closestPrime(int x);

TEST_CASE("Testing isPrime") {
    CHECK(isPrime(2) == true);
    CHECK(isPrime(3) == true);
    CHECK(isPrime(4) == false);
    CHECK(isPrime(17) == true);
    CHECK(isPrime(18) == false);
    CHECK(isPrime(1) == false);
    CHECK(isPrime(0) == false);
    CHECK(isPrime(-7) == false);
}

TEST_CASE("Testing closestPrime") {
    CHECK(closestPrime(2) == 2);
    CHECK(closestPrime(3) == 3);
    CHECK(closestPrime(8) == 11);
    CHECK(closestPrime(10) == 11);
    CHECK(closestPrime(17) == 17);
    CHECK(closestPrime(20) == 23);
    CHECK(closestPrime(25) == 29);
}
TEST_CASE("Testing closestPrime (edge cases)") {
    CHECK(closestPrime(0) == 2);
    CHECK(closestPrime(1) == 2);
    CHECK(closestPrime(-10) == 2);
}