#include "complex.h"
#include "stdio.h"

/**
 * @brief Addition of two Complex Numbers
 * 
 * @param complex_number_1 
 * @param complex_number_2 
 * @return complex_t 
 */
complex_t sum(complex_t complex_number_1, complex_t complex_number_2)
{
    complex_t result;
    result.real = (complex_number_1.real + complex_number_2.real);
    result.imaginary = (complex_number_1.imaginary + complex_number_2.imaginary);
    return result;
}

/**
 * @brief  Substraction of two Complex Numbers
 * 
 * @param complex_number_1 
 * @param complex_number_2 
 * @return complex_t 
 */
complex_t difference(complex_t complex_number_1, complex_t complex_number_2)
{
    complex_t result;
    result.real = (complex_number_1.real - complex_number_2.real);
    result.imaginary = (complex_number_1.imaginary - complex_number_2.imaginary);
    return result;
}

/**
 * @brief Multiplication of two Complex Numbers
 * 
 * @param complex_number_1 
 * @param complex_number_2 
 * @return complex_t 
 */
complex_t product(complex_t complex_number_1, complex_t complex_number_2)
{
    complex_t result;
    result.real = ((complex_number_1.real * complex_number_2.real) - (complex_number_1.imaginary * complex_number_2.imaginary));
    result.imaginary = ((complex_number_1.real * complex_number_2.imaginary) + (complex_number_1.imaginary * complex_number_2.real));
    return result;
}

/**
 * @brief Division of two Complex Numbers
 * 
 * @param complex_number_1 
 * @param complex_number_2 
 * @return complex_t 
 */
complex_t division(complex_t complex_number_1, complex_t complex_number_2)
{
    complex_t result;
    result.real = (complex_number_1.real * complex_number_2.real + complex_number_1.imaginary * complex_number_2.imaginary) / (complex_number_2.real * complex_number_2.real + complex_number_2.imaginary * complex_number_2.imaginary);
    result.imaginary = (complex_number_1.imaginary * complex_number_2.real - complex_number_1.real * complex_number_2.imaginary) / (complex_number_2.real * complex_number_2.real + complex_number_2.imaginary * complex_number_2.imaginary);
    return result;
}