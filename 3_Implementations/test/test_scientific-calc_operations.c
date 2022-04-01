#include "unity.h"
#include <calculator_operations.h>

/* Modify these two lines according to the project */
#include <calculator_operations.h>
#define PROJECT_NAME    "Scientific Calculator"

/* Prototypes for all the test functions */
void test_add(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);
void test_modulus(void);
void test_power(void);
int test_factorial(void);
void test_calculator_operations(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_add);
  RUN_TEST(test_subtract);
  RUN_TEST(test_multiply);
  RUN_TEST(test_divide);
  RUN_TEST(test_modulus);
  RUN_TEST(test_power);
  RUN_TEST(test_factorial);
  RUN_TEST(test_calculator_operations);


  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_add(void) {
  TEST_ASSERT_EQUAL(30, add(10, 20));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(15000, add(7500, 7500));
}

void test_subtract(void) {
  TEST_ASSERT_EQUAL(-3, subtract(0, 3));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(100, subtract(1000, 900));
}

void test_multiply(void) {
  TEST_ASSERT_EQUAL(0, multiply(1, 0));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(10, multiply(2, 5));
}

void test_divide(void) {
  TEST_ASSERT_EQUAL(0, divide(1, 0));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1, divide(2, 2));
}

void test_modulus(void){
   TEST_ASSERT_EQUAL(0, modulus(1, 0));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1, modulus(2, 2));
}
  
void test_power(void){
   TEST_ASSERT_EQUAL(1, power(1, 0));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(4, power(2, 2));
}
  
int test_factorial(void){
   TEST_ASSERT_EQUAL(1, factorial(1, 1));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(2, factorial(2, 2));
}
