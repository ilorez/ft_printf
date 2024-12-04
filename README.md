# Ft_printf

## Description
This project is recode the famous function printf, that will help you to understand Variadic functions, and how to use it.


## Variadic functions
The term variadic function refers to a function that is able to accept a variable number of arguments. In C, variadic functions are functions that can take a variable number of arguments. The declaration of a variadic function uses an ellipsis (...) to indicate that the function can take any number of arguments.

```c
  int printf(const char *format, ...);
  ```

the concepts in that you should understand to do this project:
  - What is a variadic function
  - How to use va_start, va_arg and va_end macros
  - why we need this macros what it's do
  - What it registers in cpu && how it's used in variadic functions
  - how parameters are passed to functions
  - what is va_list struct
  - how every thing is stored in memory


## Mandatory part
 mandatory part it's, I'm sure that like more then 90% of student doesn't a look at printf bonus part XD,
and that's normal it's taking some time to be done.

### cases to handle
there some thing i want to talk about it before anything, in orginal print if it any case show warning, that's mean you are not obligated to handle it, but you can do it if you want, and that's what i did.
like what? 

- handle the case where the string (first argument) is NULL, or when this string done with %

The cases that should handle in this project are:
  - return (nil) in linux where passed NULL pointer to %p
  - ...


:-]


