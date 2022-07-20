#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    // -128 (CHAR_MIN) até 127 (CHAR_MAX)
    char c1 = CHAR_MIN;
    char c2 = CHAR_MAX;

    // 0 até 255 (UCHAR_MAX)
    unsigned char c3 = UCHAR_MAX;

    printf("char [%d bytes], %d até %d\n", sizeof(c2), c1, c2);
    printf("unsigned char [%d bytes], 0 até %u\n", sizeof(c3), c3);

    // -2,147,483,648 (INT_MIN) até 2,147,483,647 (INT_MAX)
    int i1 = INT_MIN;
    int i2 = INT_MAX;

    // 0 até 4,294,967,295 (UINT_MAX)
    unsigned int i3 = UINT_MAX;

    printf("int [%d bytes], %d até %d\n", sizeof(i2), i1, i2);
    printf("unsigned int [%d bytes], 0 até %u\n", sizeof(i3), i3);

    //-32,768 (SHRT_MIN) até 32,767 (SHRT_MAX)
    short s1 = SHRT_MIN;
    short s2 = SHRT_MAX;

    // 0 até 65,535 (USHRT_MAX)
    unsigned short s3 = USHRT_MAX;

    printf("short [%d bytes], %d até %d\n", sizeof(s2), s1, s2);
    printf("unsigned short [%d bytes] 0 até %u\n", sizeof(s3), s3);

    //-9223372036854775808 (LONG_MIN) até 9223372036854775807 (LONG_MAX)
    long l1 = LONG_MIN;
    long l2 = LONG_MAX;

    // 0 até 18446744073709551615 (ULONG_MAX)
    unsigned long l3 = ULONG_MAX;

    printf("long [%d bytes], %li até %li\n", sizeof(l2), l1, l2);
    printf("unsigned long [%d bytes], 0 até %lu\n", sizeof(l3), l3);

    // 1.2E-38 (FLT_MIN) até 3.4E+38 (FLT_MAX)
    float f1 = FLT_MIN;
    float f2 = FLT_MAX;

    printf("float [%d bytes], %E até %E\n", sizeof(f2), f1, f2);
    printf("-float [%d bytes], %E até %E\n", sizeof(f2), -f1, -f2);

    // 2.3E-308 (DBL_MIN) até 1.7E+308 (DBL_MAX)
    double d1 = DBL_MIN;
    double d2 = DBL_MAX;

    // 3.4E-4932 (LDBL_MIN) até 1.1E+4932 (LDBL_MAX)
    long double d3 = LDBL_MIN;
    long double d4 = LDBL_MAX;

    printf("double [%d bytes], %E até %E\n", sizeof(d2), d1, d2);
    printf("-double [%d bytes], %E até %E\n", sizeof(d2), -d1, -d2);
    printf("long double [%d bytes], %E até %E\n", sizeof(d4), d3, d4);

    printf("float DIG: %d\n", FLT_DIG);
    printf("double DIG: %d\n", DBL_DIG);
    printf("long double DIG: %d\n", LDBL_DIG);
}