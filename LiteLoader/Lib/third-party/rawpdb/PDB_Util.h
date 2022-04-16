// Copyright 2011-2022, Molecular Matters GmbH <office@molecular-matters.com>
// See LICENSE.txt for licensing details (2-clause BSD License: https://opensource.org/licenses/BSD-2-Clause)

#pragma once

#include "Foundation/PDB_Macros.h"
#include "Foundation/PDB_DisableWarningsPush.h"
#include <cstdint>
#include "Foundation/PDB_DisableWarningsPop.h"


namespace PDB
{
	// Converts a block index into a file offset, based on the block size of the PDB file
	PDB_NO_DISCARD inline size_t ConvertBlockIndexToFileOffset(uint32_t blockIndex, uint32_t blockSize) PDB_NO_EXCEPT
	{
		// cast to size_t to avoid potential overflow in 64-bit
		return static_cast<size_t>(blockIndex) * static_cast<size_t>(blockSize);
	}

	// Calculates how many blocks are needed for a certain number of bytes
	PDB_NO_DISCARD inline uint32_t ConvertSizeToBlockCount(uint32_t sizeInBytes, uint32_t blockSize) PDB_NO_EXCEPT
	{
		// integer ceil to account for non-full blocks
		return (sizeInBytes + blockSize - 1u) / blockSize;
	};

	// Returns the actual size of the data associated with a CodeView record, not including the size of the header
	template <typename T>
	PDB_NO_DISCARD inline uint32_t GetCodeViewRecordSize(const T* record) PDB_NO_EXCEPT
	{
		// the stored size includes the size of the 'kind' field, but not the size of the 'size' field itself
		return record->header.size - sizeof(uint16_t);
	}

	template <typename Header, typename T>
	PDB_NO_DISCARD inline size_t GetNameLength(const Header& header, const T& record) PDB_NO_EXCEPT
	{
		// we can estimate the length of the string from the size of the record
		const size_t estimatedLength = header.size - sizeof(uint16_t) - sizeof(T);
		if (estimatedLength == 0u)
		{
			return estimatedLength;
		}

		// we still need to account for padding after the string to find the real length
		size_t nullTerminatorCount = 0u;
		for (/* nothing */; nullTerminatorCount < estimatedLength; ++nullTerminatorCount)
		{
			if (record.name[estimatedLength - nullTerminatorCount - 1u] != '\0')
			{
				break;
			}
		}

		const size_t length = estimatedLength - nullTerminatorCount;
		return length;
	}
}
