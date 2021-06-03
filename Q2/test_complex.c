/**
 * @file test_complex.c
 * @author Ashwani Kumar Dubey (ashwani26061999@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-06-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "unity.h"
#include "complex.h"


/**
 * @brief Set the Up object
 * Required by the unity test framework
 */
void setUp() {}

/**
 * @brief Release the objects that are setup for tests
 * Required by the unity test framework
 */
void tearDown() {}

complex_t complex_number_1 = {2,4};
complex_t complex_number_2 = {3,6};

void test_complex_sum()
{
    complex_t result= sum(complex_number_1, complex_number_2);
    // printf("%f  %f", result.real, result.imaginary);
    TEST_ASSERT_EQUAL(5, result.real);
    TEST_ASSERT_EQUAL(10, result.imaginary);
}

void test_complex_difference()
{
    complex_t result = difference(complex_number_1, complex_number_2);
    // printf("%f  %f", result.real, result.imaginary);
    TEST_ASSERT_EQUAL(-1, result.real);
    TEST_ASSERT_EQUAL(-2, result.imaginary);
}

void test_complex_product()
{
    complex_t result = product(complex_number_1, complex_number_2);
    // printf("%f  %f", result.real, result.imaginary);
    TEST_ASSERT_EQUAL(-18, result.real);
    TEST_ASSERT_EQUAL(24, result.imaginary);

}

void test_complex_division()
{
    complex_t result = division(complex_number_1, complex_number_2);
    // printf("%f  %f", result.real, result.imaginary);
    TEST_ASSERT_EQUAL(0.666667, result.real);
    TEST_ASSERT_EQUAL(0, result.imaginary);

}

/**
 * @brief What this function does
 *
 * @return int
 */
int main(void)
{
  /* Initiate the Unity Test Framework */
  UNITY_BEGIN();

  /* Run Test functions */
  RUN_TEST(test_complex_sum);
  RUN_TEST(test_complex_difference);
  RUN_TEST(test_complex_product);
  RUN_TEST(test_complex_division);

  /* Close the Unity Test Framework */
  return UNITY_END();
}