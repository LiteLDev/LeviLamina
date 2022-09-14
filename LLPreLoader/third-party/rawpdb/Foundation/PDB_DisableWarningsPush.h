// Copyright 2011-2022, Molecular Matters GmbH <office@molecular-matters.com>
// See LICENSE.txt for licensing details (2-clause BSD License: https://opensource.org/licenses/BSD-2-Clause)

#include "PDB_Platform.h"


#if PDB_COMPILER_MSVC
#	pragma warning(push, 0)
#elif PDB_COMPILER_CLANG
#	pragma clang diagnostic push
#	pragma clang diagnostic ignored "-Weverything"
#endif
