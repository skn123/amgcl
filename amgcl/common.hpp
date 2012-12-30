#ifndef AMGCL_COMMON_HPP
#define AMGCL_COMMON_HPP

/*
The MIT License

Copyright (c) 2012 Denis Demidov <ddemidov@ksu.ru>

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/

/**
 * \file   common.hpp
 * \author Denis Demidov <ddemidov@ksu.ru>
 * \brief  Common definitions for amgcl.
 */

namespace amgcl {
    
/// Control parameters for Conjugate Gradient method.
struct cg_tag {
    int maxiter; ///< Maximum number of iterations.
    double tol;  ///< The desired precision.

    cg_tag(int maxiter = 100, double tol = 1e-8)
        : maxiter(maxiter), tol(tol)
    {}
};

/// Control parameters for Stabilized BiConjugate Gradient method.
struct bicg_tag {
    int maxiter; ///< Maximum number of iterations.
    double tol;  ///< The desired precision.

    bicg_tag(int maxiter = 100, double tol = 1e-8)
        : maxiter(maxiter), tol(tol)
    {}
};

template <class T, class Enable = void> struct value_type;

} // namespace amgcl

#endif