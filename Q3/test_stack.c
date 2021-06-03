/**
 * @file test_stack.c
 * @author Bharath.G ()
 * @brief 
 * @version 0.1
 * @date 2021-05-31
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "unity.h"
#include "stack.h"
Stack_ptr* ptr = NULL;
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

void test_stack_creation()
{
    ptr = create_stack(3);
    TEST_ASSERT_NOT_EQUAL(NULL, ptr);
}

void test_stack_push()
{
    
    // TEST_ASSERT_EQUAL(SUCCESS, push(ptr,0));
    TEST_ASSERT_EQUAL(SUCCESS, push(ptr, 11));
    TEST_ASSERT_EQUAL(SUCCESS, push(ptr, 2));
    TEST_ASSERT_EQUAL(SUCCESS, push(ptr, 3));
    TEST_ASSERT_EQUAL(STACK_FULL, push(ptr, 4));
}
/**
 * @brief What this function does
 * 
 * @return int 
 */

void test_stack_pop()
{
  int x,y,z,w;
  TEST_ASSERT_EQUAL(SUCCESS, pop(ptr,&x));
  TEST_ASSERT_EQUAL(SUCCESS, pop(ptr,&y));
  TEST_ASSERT_EQUAL(SUCCESS, pop(ptr,&z));
  TEST_ASSERT_EQUAL(STACK_EMPTY, pop(ptr,&w));
}


void test_stack_peek()
{
  int x;
  TEST_ASSERT_EQUAL(STACK_EMPTY,peek(ptr,&x));
  printf("%d\n",x);
}
int main(void)
{
  
  /* Initiate the Unity Test Framework */
  UNITY_BEGIN();

  /* Run Test functions */
  RUN_TEST(test_stack_creation);
  RUN_TEST(test_stack_push);
  RUN_TEST(test_stack_pop);
  RUN_TEST(test_stack_peek);
  /* Close the Unity Test Framework */
  return UNITY_END();
}
