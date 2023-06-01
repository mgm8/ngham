/*
 * test.c
 * 
 * Copyright The NGHam Contributors.
 * 
 * This file is part of NGHam.
 * 
 * NGHam is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * NGHam is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with NGHam. If not, see <http://www.gnu.org/licenses/>.
 * 
 */

/**
 * \brief NGHam library unit test.
 * 
 * \author Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * \version 0.0.0
 * 
 * \date 2023/03/12
 * 
 * \defgroup test Test
 * \ingroup ngham
 * \{
 */

#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>
#include <setjmp.h>
#include <float.h>
#include <cmocka.h>

#include <ngham/ngham.h>

static void ngham_init_test(void **state)
{
}

static void ngham_encode_test(void **state)
{
}

static void ngham_decode_test(void **state)
{
}

int main()
{
    const struct CMUnitTest ngham_tests[] = {
        cmocka_unit_test(ngham_init_test),
        cmocka_unit_test(ngham_encode_test),
        cmocka_unit_test(ngham_decode_test),
    };

    return cmocka_run_group_tests(ngham_tests, NULL, NULL);
}

/**< \} End of test group */
