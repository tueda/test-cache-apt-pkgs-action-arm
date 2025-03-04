#include <stdio.h>
#include <gmp.h>
#include <mpfr.h>

int main()
{
    mpfr_t pi;
    mpfr_init2(pi, 256);

    mpfr_const_pi(pi, MPFR_RNDN);
    mpfr_printf("%.50Rf\n", pi);

    mpfr_clear(pi);
    mpfr_free_cache();

    return 0;
}
