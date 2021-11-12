/*
 *  Chocobo1/Hash
 *
 *   Copyright 2017-2018 by Mike Tzou (Chocobo1)
 *     https://github.com/Chocobo1/Hash
 *
 *   Licensed under GNU General Public License 3 or later.
 *
 *  @license GPL3 <https://www.gnu.org/licenses/gpl-3.0-standalone.html>
 */

#include "../src/has_v_320.h"

#include "../catch/single_include/catch.hpp"

#include <cstring>


TEST_CASE("has-v-320")
{
	// official test suite from has-v spec
	const char s1[] = "";
	REQUIRE("475974bed7ea137d982d1df5b2583b1ac4d5941d8d557bb303586742d8891788943a9668a9da68c3"
		== HAS_V_320().addData(s1, strlen(s1)).finalize().toString());

	const char s2[] = "abc";
	REQUIRE("a70ab818294865cf9c9697d69715235370381b833f8f1a42e01505888b002e4305fe6405519f595c"
		== HAS_V_320().addData(s2, strlen(s2)).finalize().toString());


	// my own tests
	REQUIRE("475974bed7ea137d982d1df5b2583b1ac4d5941d8d557bb303586742d8891788943a9668a9da68c3"
		== HAS_V_320().finalize().toString());

	const char s11[] = "The quick brown fox jumps over the lazy dog";
	REQUIRE(""
		== HAS_V_320().addData(s11, strlen(s11)).finalize().toString());

	const char s12[] = "The quick brown fox jumps over the lazy dog.";
	REQUIRE(""
		== HAS_V_320().addData(s12, strlen(s12)).finalize().toString());

	const char s13[] = "The quick brown fox jumps over the lazy dogThe quick brown fox jumps over the lazy dogThe quick brown fox jumps over the lazy dog";
	REQUIRE(""
		== HAS_V_320().addData(s13, strlen(s13)).finalize().toString());
}
