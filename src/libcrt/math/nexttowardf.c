/**
 * @file nexttowardf.c
 * Copyright 2012, 2013 MinGW.org project
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */
#include <math.h>

float
nexttowardf (float x, long double y)
{
  union
  {
    float f;
    unsigned int i;
  } u;

  long double xx = x;

  if (isnan (y) || isnan (x))
    return x + y;
  if (xx == y )
     /* nextafter (0.0, -O.0) should return -0.0.  */
     return y;
  u.f = x; 
  if (x == 0.0F)
    {
      u.i = 1;
      return y > 0.0L ? u.f : -u.f;
    }
  if (((x > 0.0F) ^ (y > xx)) == 0)
    u.i++;
  else
    u.i--;
  return u.f;
}
