// Copyright 2011-2022, Molecular Matters GmbH <office@molecular-matters.com>
// See LICENSE.txt for licensing details (2-clause BSD License: https://opensource.org/licenses/BSD-2-Clause)

#include "PDB_PCH.h"
#include "PDB_CoalescedMSFStream.h"
#include "PDB_Util.h"
#include "PDB_DirectMSFStream.h"
#include "Foundation/PDB_PointerUtil.h"
#include "Foundation/PDB_Memory.h"
#include "Foundation/PDB_DisableWarningsPush.h"
#include <cstring>
#include "Foundation/PDB_DisableWarningsPop.h"


namespace
{
	// ------------------------------------------------------------------------------------------------
	// ------------------------------------------------------------------------------------------------
	PDB_NO_DISCARD static bool AreBlockIndicesContiguous(const uint32_t* blockIndices, uint32_t blockSize, uint32_t streamSize) PDB_NO_EXCEPT
	{
		const uint32_t blockCount = PDB::ConvertSizeToBlockCount(streamSize, blockSize);

		// start with the first index, checking if all following indices are contiguous (N, N+1, N+2, ...)
		uint32_t expectedIndex = blockIndices[0];
		for (uint32_t i = 1u; i < blockCount; ++i)
		{
			++expectedIndex;
			if (blockIndices[i] != expectedIndex)
			{
				return false;
			}
		}

		return true;
	}
}


// ------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------
PDB::CoalescedMSFStream::CoalescedMSFStream(void) PDB_NO_EXCEPT
	: m_ownedData(nullptr)
	, m_data(nullptr)
	, m_size(0u)
{
}


// ------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------
PDB::CoalescedMSFStream::CoalescedMSFStream(CoalescedMSFStream&& other) PDB_NO_EXCEPT
	: m_ownedData(PDB_MOVE(other.m_ownedData))
	, m_data(PDB_MOVE(other.m_data))
	, m_size(PDB_MOVE(other.m_size))
{
	other.m_ownedData = nullptr;
	other.m_data = nullptr;
	other.m_size = 0u;
}


// ------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------
PDB::CoalescedMSFStream& PDB::CoalescedMSFStream::operator=(CoalescedMSFStream&& other) PDB_NO_EXCEPT
{
	if (this != &other)
	{
		PDB_DELETE_ARRAY(m_ownedData);

		m_ownedData = PDB_MOVE(other.m_ownedData);
		m_data = PDB_MOVE(other.m_data);
		m_size = PDB_MOVE(other.m_size);

		other.m_ownedData = nullptr;
		other.m_data = nullptr;
		other.m_size = 0u;
	}

	return *this;
}


// ------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------
PDB::CoalescedMSFStream::CoalescedMSFStream(const void* data, uint32_t blockSize, const uint32_t* blockIndices, uint32_t streamSize) PDB_NO_EXCEPT
	: m_ownedData(nullptr)
	, m_data(nullptr)
	, m_size(streamSize)
{
	if (AreBlockIndicesContiguous(blockIndices, blockSize, streamSize))
	{
		// fast path, all block indices are contiguous, so we don't have to copy any data at all.
		// instead, we directly point into the memory-mapped file at the correct offset.
		const uint32_t index = blockIndices[0];
		const size_t fileOffset = PDB::ConvertBlockIndexToFileOffset(index, blockSize);
		m_data = Pointer::Offset<const Byte*>(data, fileOffset);
	}
	else
	{
		// slower path, we need to copy disjunct blocks into our own data array, block by block
		m_ownedData = PDB_NEW_ARRAY(Byte, streamSize);
		m_data = m_ownedData;

		Byte* destination = m_ownedData;

		// copy full blocks first
		const uint32_t fullBlockCount = streamSize / blockSize;
		for (uint32_t i = 0u; i < fullBlockCount; ++i)
		{
			const uint32_t index = blockIndices[i];

			// read one single block at the correct offset in the stream
			const size_t fileOffset = PDB::ConvertBlockIndexToFileOffset(index, blockSize);
			const void* sourceData = Pointer::Offset<const void*>(data, fileOffset);
			std::memcpy(destination, sourceData, blockSize);

			destination += blockSize;
		}

		// account for non-full blocks
		const uint32_t remainingBytes = streamSize - (fullBlockCount * blockSize);
		if (remainingBytes != 0u)
		{
			const uint32_t index = blockIndices[fullBlockCount];

			// read remaining bytes at correct offset in the stream
			const size_t fileOffset = PDB::ConvertBlockIndexToFileOffset(index, blockSize);
			const void* sourceData = Pointer::Offset<const void*>(data, fileOffset);
			std::memcpy(destination, sourceData, remainingBytes);
		}
	}
}


// ------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------
PDB::CoalescedMSFStream::CoalescedMSFStream(const DirectMSFStream& directStream, uint32_t size, uint32_t offset) PDB_NO_EXCEPT
	: m_ownedData(nullptr)
	, m_data(nullptr)
	, m_size(size)
{
	const uint32_t* const blockIndicesForOffset = directStream.GetBlockIndicesForOffset(offset);

	if (AreBlockIndicesContiguous(blockIndicesForOffset, directStream.GetBlockSize(), size))
	{
		// fast path, all block indices inside the direct stream from (data + offset) to (data + offset + size) are contiguous
		const size_t offsetWithinData = directStream.GetDataOffsetForOffset(offset);
		m_data = Pointer::Offset<const Byte*>(directStream.GetData(), offsetWithinData);
	}
	else
	{
		// slower path, we need to copy from disjunct blocks, which is performed by the direct stream
		m_ownedData = PDB_NEW_ARRAY(Byte, size);
		m_data = m_ownedData;

		directStream.ReadAtOffset(m_ownedData, size, offset);
	}
}


// ------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------
PDB::CoalescedMSFStream::~CoalescedMSFStream(void) PDB_NO_EXCEPT
{
	PDB_DELETE_ARRAY(m_ownedData);
}
