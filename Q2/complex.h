/**
 * @file complex.h
 * @author Ashwani Kumar Dubey
 * @brief  Complex Number Addition, Substraction, Multiplication, Divisions
 * @version 0.1
 * @date 2021-06-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef _COMPLEX_H
#define _COMPLEX_H

#include "stdio.h"

/**
 * @brief Created a Structure name complex_t for storing the complex numbers
 * 
 */

typedef struct complex_t {
    float real;
    float imaginary;
}complex_t;

/**
 * @brief Addition of two complex numbers
 * 
 * @param complex_number_1 
 * @param complex_number_2
 * @return complex_t 
 */
complex_t sum(complex_t complex_number_1, complex_t complex_number_2);

/**
 * @brief Substraction of two complex numbers
 * 
 * @param complex_number_1
 * @param complex_number_2
 * @return complex_t 
 */
complex_t difference(complex_t complex_number_1, complex_t complex_number_2);

/**
 * @brief Multiplication of two Complex numbers
 * 
 * @param complex_number_1
 * @param complex_number_2
 * @return complex_t 
 */
complex_t product(complex_t complex_number_1, complex_t complex_number_2);

/**
 * @brief Division of two Complex numbers
 * 
 * @param complex_number_1 
 * @param complex_number_2
 * @return complex_t 
 */
complex_t division(complex_t complex_number_1, complex_t complex_number_2);

#endif