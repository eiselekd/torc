// Torc - Copyright 2011-2013 University of Southern California.  All Rights Reserved.
// $HeadURL$
// $Id$

// This program is free software: you can redistribute it and/or modify it under the terms of the 
// GNU General Public License as published by the Free Software Foundation, either version 3 of the 
// License, or (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; 
// without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See 
// the GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License along with this program.  If 
// not, see <http://www.gnu.org/licenses/>.

/// \file
/// \brief Unit test for the PrimitiveElement class.

#include <boost/test/unit_test.hpp>
#include "torc/architecture/PrimitiveElement.hpp"

namespace torc {
namespace architecture {

BOOST_AUTO_TEST_SUITE(regression)
BOOST_AUTO_TEST_SUITE(architecture)

/// \brief Unit test for the Sites class.
BOOST_AUTO_TEST_CASE(PrimitiveElementUnitTest) {
	// members not tested:
	//		string mName;
	//		PrimitiveElementPinArray mPins;
	//		StringSet mCfgs;
	//		bool mIsBel;
	//		PinNameToPinIndexMap mPinNameToPinIndex;
	// functions not tested:
	//		PrimitiveElementPinArray& getPins(void);
	//		PrimitiveElement(void);
	//		PinIndex findPinIndexByName(const string& inName) const;
	//		const string& getName(void) const;
	//		const PrimitiveElementPinArray& getPins(void) const;
	//		const StringSet& getCfgs(void) const;
	//		bool isBel(void) const;
	/// \todo Write a unit test for torc::architecture::PrimitiveElement.
	BOOST_REQUIRE(false);
}

BOOST_AUTO_TEST_SUITE_END()
BOOST_AUTO_TEST_SUITE_END()

} // namespace architecture
} // namespace torc
