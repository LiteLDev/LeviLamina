// Copyright 2011-2022, Molecular Matters GmbH <office@molecular-matters.com>
// See LICENSE.txt for licensing details (2-clause BSD License: https://opensource.org/licenses/BSD-2-Clause)

#pragma once

#include "Foundation/PDB_Macros.h"
#include "PDB_Types.h"


// https://llvm.org/docs/PDB/index.html#the-msf-container
// https://llvm.org/docs/PDB/MsfFile.html
namespace PDB
{
	class PDB_NO_DISCARD DirectMSFStream;


	// provides access to a coalesced version of an MSF stream.
	// inherently thread-safe, the stream doesn't carry any internal offset or similar.
	// coalesces all blocks into a contiguous stream of data upon construction.
	// very fast individual reads, useful when almost all data of a stream is needed anyway.
	class PDB_NO_DISCARD CoalescedMSFStream
	{
	public:
		CoalescedMSFStream(void) PDB_NO_EXCEPT;
		CoalescedMSFStream(CoalescedMSFStream&& other) PDB_NO_EXCEPT;
		CoalescedMSFStream& operator=(CoalescedMSFStream&& other) PDB_NO_EXCEPT;

		explicit CoalescedMSFStream(const void* data, uint32_t blockSize, const uint32_t* blockIndices, uint32_t streamSize) PDB_NO_EXCEPT;

		// Creates a coalesced stream from a direct stream at any offset.
		explicit CoalescedMSFStream(const DirectMSFStream& directStream, uint32_t size, uint32_t offset) PDB_NO_EXCEPT;

		~CoalescedMSFStream(void) PDB_NO_EXCEPT;

		// Returns the size of the stream.
		PDB_NO_DISCARD inline size_t GetSize(void) const PDB_NO_EXCEPT
		{
			return m_size;
		}

		// Provides read-only access to the data.
		template <typename T>
		PDB_NO_DISCARD inline const T* GetDataAtOffset(size_t offset) const PDB_NO_EXCEPT
		{
			return reinterpret_cast<const T*>(m_data + offset);
		}

	private:
		// contiguous, coalesced data, can be null
		Byte* m_ownedData;

		// either points to the owned data that has been copied from disjunct blocks, or points to the
		// memory-mapped data directly in case all stream blocks are contiguous.
		const Byte* m_data;
		size_t m_size;

		PDB_DISABLE_COPY(CoalescedMSFStream);
	};
}
