//  Copyright John Maddock 2008.
//  Use, modification and distribution are subject to the
//  Boost Software License, Version 1.0.  (See accompanying file
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
#define BOOST_MATH_TR1_SOURCE
#include <boost/math/tr1.hpp>
#include <boost/math/special_functions/hypot.hpp>
#include "c_policy.hpp"

namespace boost{ namespace math{ namespace tr1{

extern "C" long double BOOST_MATH_TR1_DECL hypotl BOOST_PREVENT_MACRO_SUBSTITUTION(long double x, long double y)
{
   return c_policies::hypot BOOST_PREVENT_MACRO_SUBSTITUTION(x, y);
}

}}}
