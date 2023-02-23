/*
 * Copyright (c) 2019 MediaTek Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files
 * (the "Software"), to deal in the Software without restriction,
 * including without limitation the rights to use, copy, modify, merge,
 * publish, distribute, sublicense, and/or sell copies of the Software,
 * and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */
#include <assert.h>
#include <err.h>
#include <libfdt.h>
#include <set_fdt.h>
#include <string.h>
#include <trace.h>

#define LOCAL_TRACE 0

#define SET_FDT_TEST "set_fdt_test"

static void set_fdt_test(void *fdt)
{
    int offset;
    status_t err = NO_ERROR;
    const void *data = NULL;
    int len;

    offset = fdt_path_offset(fdt, "/chosen");
    err = fdt_setprop_string(fdt, offset, "bootargs", SET_FDT_TEST);
    ASSERT(err >= 0);

    data = fdt_getprop(fdt, offset, "bootargs", &len);
    if (len > 0 && data) {
        if (!strcmp((char *)data, SET_FDT_TEST))
            LTRACEF("PASS\n");
        else
            LTRACEF("FAIL\n");
    }
}

#if 0
SET_FDT_INIT_HOOK(set_fdt_test, set_fdt_test);
#endif
