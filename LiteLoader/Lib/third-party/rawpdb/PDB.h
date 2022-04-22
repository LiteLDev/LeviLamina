// Copyright 2011-2022, Molecular Matters GmbH <office@molecular-matters.com>
// See LICENSE.txt for licensing details (2-clause BSD License: https://opensource.org/licenses/BSD-2-Clause)

#pragma once

#include "Foundation/PDB_Macros.h"
#include "PDB_ErrorCodes.h"


// https://llvm.org/docs/PDB/index.html
namespace PDB
{
	class RawFile;


	// Validates whether a PDB file is valid.
	PDB_NO_DISCARD ErrorCode ValidateFile(const void* data) PDB_NO_EXCEPT;

	// Creates a raw PDB file that must have been validated.
	PDB_NO_DISCARD RawFile CreateRawFile(const void* data) PDB_NO_EXCEPT;
}
