#include "stack.h"
#include "string.h"
#include "stdlib.h"
// unsigned int top = 0;

Stack_ptr* create_stack(size_t size_of_stack)
{
    Stack_ptr *ptr_stack = (Stack_ptr*)calloc(1,sizeof(Stack_ptr));
    ptr_stack->top = 0;
    ptr_stack->size_of_stack = size_of_stack;
    ptr_stack->array = (stack_data_type*)calloc(size_of_stack, sizeof(stack_data_type));
    return ptr_stack;
}

static bool is_full(Stack_ptr *stack)
{
    return (stack->top == stack->size_of_stack) ? true : false;
}

static bool is_empty(Stack_ptr *stack)
{
    return ((stack->top == 0) ? true : false);
}
error_t push(Stack_ptr* stack, stack_data_type data)
{
    //top
    // stack_data_type is int, float, char
    // stack_data_type structure 
    error_t ret_val = SUCCESS;
    if(!is_full(stack))
    {
        
        // stack[top] = data;
        memcpy((stack_data_type*)&stack->array[stack->top], &data, sizeof(stack_data_type));
        stack->top++;
    }
    else
    {
        ret_val = STACK_FULL;
    }
    
    return ret_val;
    
}

error_t pop(Stack_ptr* stack, stack_data_type* item)
{
    error_t ret_val = SUCCESS;
    if(!is_empty(stack))
    {
        *item = stack->array[stack->top];
        stack->top--;
    }
    else{
        ret_val = STACK_EMPTY;
    }
    return ret_val;
}
//malloc(size) + memset, calloc(size, type)

error_t peek(Stack_ptr* stack, stack_data_type* item)
{
    error_t ret_val = SUCCESS;
    if(!is_empty(stack))
    {
        *item = stack->array[stack->top];
    }
    else{
        printf("there");
        ret_val = STACK_EMPTY;
    }
    return ret_val;
}