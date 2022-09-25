// Copyright 2011-2022, Molecular Matters GmbH <office@molecular-matters.com>
// See LICENSE.txt for licensing details (2-clause BSD License: https://opensource.org/licenses/BSD-2-Clause)

#include "PDB_PCH.h"
#include "PDB.h"
#include "PDB_Types.h"
#include "PDB_Util.h"
#include "PDB_RawFile.h"
#include "Foundation/PDB_PointerUtil.h"
#include "Foundation/PDB_DisableWarningsPush.h"
#include <cstring>
#include "Foundation/PDB_DisableWarningsPop.h"


// ------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------
PDB_NO_DISCARD PDB::ErrorCode PDB::ValidateFile(const void* data) PDB_NO_EXCEPT
{
	// validate the super block
	const SuperBlock* superBlock = Pointer::Offset<const SuperBlock*>(data, 0u);
	{
		// validate header magic
		if (std::memcmp(superBlock->fileMagic, SuperBlock::MAGIC, sizeof(SuperBlock::MAGIC) != 0))
		{
			return ErrorCode::InvalidSuperBlock;
		}

		// validate free block map.
		// the free block map should always reside at either index 1 or 2.
		if (superBlock->freeBlockMapIndex != 1u && superBlock->freeBlockMapIndex != 2u)
		{
			return ErrorCode::InvalidFreeBlockMap;
		}
	}

	return ErrorCode::Success;
}


// ------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------
PDB_NO_DISCARD PDB::RawFile PDB::CreateRawFile(const void* data) PDB_NO_EXCEPT
{
	return RawFile(data);
}
