/*
	This file is part of cpp-elementrem.

	cpp-elementrem is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	cpp-elementrem is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with cpp-elementrem.  If not, see <http://www.gnu.org/licenses/>.
*/
/** @file Base36.cpp
 * @
 * 
 */

#include <boost/test/unit_test.hpp>
#include <libdevcore/Base64.h>

using namespace std;
using namespace dev;

BOOST_AUTO_TEST_SUITE(Base36Tests)

BOOST_AUTO_TEST_CASE(basicEncoding)
{
	FixedHash<2> value("0x0048");
	string encoded = toBase36<2>(value);
	BOOST_CHECK_EQUAL(encoded, "20");
}

BOOST_AUTO_TEST_CASE(basicEncoding2)
{
	FixedHash<2> value("0x0072");
	string encoded = toBase36<2>(value);
	BOOST_CHECK_EQUAL(encoded, "36");
}

BOOST_AUTO_TEST_CASE(basicEncoding3)
{
	FixedHash<2> value("0xffff");
	string encoded = toBase36<2>(value);
	BOOST_CHECK_EQUAL(encoded, "1EKF");
}


BOOST_AUTO_TEST_SUITE_END()
