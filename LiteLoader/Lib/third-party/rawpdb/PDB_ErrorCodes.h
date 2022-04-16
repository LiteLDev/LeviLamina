// Copyright 2011-2022, Molecular Matters GmbH <office@molecular-matters.com>
// See LICENSE.txt for licensing details (2-clause BSD License: https://opensource.org/licenses/BSD-2-Clause)

#pragma once

#include "Foundation/PDB_Macros.h"


namespace PDB
{
	enum class PDB_NO_DISCARD ErrorCode : unsigned int
	{
		Success = 0u,

		// main PDB validation
		InvalidSuperBlock,
		InvalidFreeBlockMap,

		// stream validation
		InvalidSignature,
		InvalidStreamIndex,
		UnknownVersion
	};
}
