#include "main.h"

void print_number(int n)
{
        int times_ten = 1;
        int num;

        if (n == 0)
        {
                _putchar('0');
        }
        else
        {
                if (n < 0)
                {
                        n *= -1;
                        _putchar('-');
                }

                while (times_ten < n)
                {
                        times_ten *=  10;
                }

		times_ten /= 10;

                while (times_ten >= 1)
                {
                        num = n / times_ten;
                        _putchar(num + '0');
                        n = n - (num * times_ten);
                        times_ten /= 10;
                }

        }
}
