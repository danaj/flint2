/*=============================================================================

    This file is part of FLINT.

    FLINT is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    FLINT is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with FLINT; if not, write to the Free Software
    Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301 USA

=============================================================================*/
/******************************************************************************

   Copyright (C) 2008, 2009, 2010 William Hart
   Copyright (C) 2014 Abhinav Baid
   
******************************************************************************/

#include "d_vec.h"

int
_d_vec_equal(const double *vec1, const double *vec2, slong len)
{
    slong i;
    if (vec1 == vec2)
        return 1;

    for (i = 0; i < len; i++)
        if (vec1[i] != vec2[i])
            return 0;

    return 1;
}
