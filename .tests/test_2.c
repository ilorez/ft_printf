#include <stdio.h>
#include "ft_printf.h" // Include your ft_printf header

int main(void)
{
    int ret_ft, ret_orig;
    int var = 42;

    // Test 1: Mixed format with edge cases
    ret_ft = ft_printf("Test 1: Mixed: Char: %c, String: %s, Int: %d, Hex: %x, Ptr: %p, Percent: %%\n", 
                        'Z', NULL, -2147483648, 4294967295, &var);
    ret_orig = printf("Test 1: Mixed: Char: %c, String: %s, Int: %d, Hex: %x, Ptr: %p, Percent: %%\n", 
                      'Z', NULL, -2147483648, 4294967295, &var);
    printf("Return values: ft_printf = %d, printf = %d\n\n", ret_ft, ret_orig);

    // Test 2: Invalid format string
    ret_ft = ft_printf("Test 2: Invalid format: %q\n");
    ret_orig = printf("Test 2: Invalid format: %q\n");
    printf("Return values: ft_printf = %d, printf = %d\n\n", ret_ft, ret_orig);

    ret_ft = ft_printf("Test 2: Invalid format: %P\n");
    ret_orig = printf("Test 2: Invalid format: %P\n");
    printf("Return values: ft_printf = %d, printf = %d\n\n", ret_ft, ret_orig);

    ret_ft = ft_printf("Test 2: Invalid format: %:\n");
    ret_orig = printf("Test 2: Invalid format: %:\n");
    printf("Return values: ft_printf = %d, printf = %d\n\n", ret_ft, ret_orig);

    ret_ft = ft_printf("Test 2: Invalid format: %M\n");
    ret_orig = printf("Test 2: Invalid format: %M\n");
    printf("Return values: ft_printf = %d, printf = %d\n\n", ret_ft, ret_orig);

    ret_ft = ft_printf("Test 2: Invalid format: %1\n");
    ret_orig = printf("Test 2: Invalid format: %1\n");
    printf("Return values: ft_printf = %d, printf = %d\n\n", ret_ft, ret_orig);

    ret_ft = ft_printf("Test 2: Invalid format: %$\n");
    ret_orig = printf("Test 2: Invalid format: %$\n");
    printf("Return values: ft_printf = %d, printf = %d\n\n", ret_ft, ret_orig);

    ret_ft = ft_printf("Test 2: Invalid format: %q\n");
    ret_orig = printf("Test 2: Invalid format: %q\n");
    printf("Return values: ft_printf = %d, printf = %d\n\n", ret_ft, ret_orig);

    ret_ft = ft_printf("Test 2: Invalid format: %h\n");
    ret_orig = printf("Test 2: Invalid format: %h\n");
    printf("Return values: ft_printf = %d, printf = %d\n\n", ret_ft, ret_orig);

    ret_ft = ft_printf("Test 2: Invalid format: %Q\n");
    ret_orig = printf("Test 2: Invalid format: %Q\n");
    printf("Return values: ft_printf = %d, printf = %d\n\n", ret_ft, ret_orig);

    // Test 3.1
    ret_ft = ft_printf("Test 3.1: Only persentage: %");
    printf("\n");
    ret_orig = printf("Test 3.1: Only persentage: %");
    printf("\n");
    printf("Return values: ft_printf = %d, printf = %d\n\n", ret_ft, ret_orig);
    
    // Test 3: Very long string
    char long_str[1024];
    for (int i = 0; i < 1023; i++) long_str[i] = 'A';
    long_str[1023] = '\0';
    ret_ft = ft_printf("Test 3: Long string: %s\n", long_str);
    ret_orig = printf("Test 3: Long string: %s\n", long_str);
    printf("Return values: ft_printf = %d, printf = %d\n\n", ret_ft, ret_orig);

    // Test 4: Nested format specifiers (intentional misuse)
    ret_ft = ft_printf("Test 4: Nested: %% %%%c%%\n", 'N');
    ret_orig = printf("Test 4: Nested: %% %%%c%%\n", 'N');
    printf("Return values: ft_printf = %d, printf = %d\n\n", ret_ft, ret_orig);

    return 0;
}
