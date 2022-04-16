// Copyright 2011-2022, Molecular Matters GmbH <office@molecular-matters.com>
// See LICENSE.txt for licensing details (2-clause BSD License: https://opensource.org/licenses/BSD-2-Clause)

#pragma once

#include "PDB_Platform.h"


#if PDB_COMPILER_MSVC
	// some warnings were introduced with different versions of Visual Studio, so we disable this warning instead of using a bunch of #if/#endif
#	pragma warning (disable : 4619)		// there is no warning number N

	// we compile with exceptions disabled
#	pragma warning (disable : 4530)		// C++ exception handler used, but unwind semantics are not enabled.Specify / EHsc
#	pragma warning (disable : 4577)		// 'noexcept' used with no exception handling mode specified; termination on exception is not guaranteed. Specify /EHsc

	// ignore purely informational warnings
#	pragma warning (disable : 4514)		// unreferenced inline function has been removed
#	pragma warning (disable : 4710)		// function not inlined
#	pragma warning (disable : 4711)		// function selected for automatic inline expansion
#	pragma warning (disable : 4820)		// 'N' bytes padding added after data member 'm_member'
#	pragma warning (disable : 5045)		// Compiler will insert Spectre mitigation for memory load if /Qspectre switch specified
#elif PDB_COMPILER_CLANG
	// turn on absolutely all available Clang warnings
#	pragma clang diagnostic warning "-Wall"
#	pragma clang diagnostic warning "-Wextra"
#	pragma clang diagnostic warning "-Weverything"
#	pragma clang diagnostic warning "-Wpedantic"

	// these warnings contradict -Weverything
#	pragma clang diagnostic ignored "-Wc++98-compat"
#	pragma clang diagnostic ignored "-Wc++98-compat-pedantic"

	// this warning is triggered for templates which are explicitly instantiated.
	// forgetting to instantiate the template would trigger a linker error anyway, so we disable this warning.
#	pragma clang diagnostic ignored "-Wundefined-func-template"

	// we don't strive for C++20 compatibility
#	pragma clang diagnostic ignored "-Wc++20-compat"

	// some structures will have to be padded
#	pragma clang diagnostic ignored "-Wpadded"
#endif
