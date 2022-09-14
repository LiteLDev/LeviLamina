// Copyright 2011-2022, Molecular Matters GmbH <office@molecular-matters.com>
// See LICENSE.txt for licensing details (2-clause BSD License: https://opensource.org/licenses/BSD-2-Clause)

#pragma once

#include "Foundation/PDB_Macros.h"
#include "Foundation/PDB_ArrayView.h"
#include "PDB_CoalescedMSFStream.h"


namespace PDB
{
	class PDB_NO_DISCARD DirectMSFStream;


	class PDB_NO_DISCARD SourceFileStream
	{
	public:
		SourceFileStream(void) PDB_NO_EXCEPT;
		explicit SourceFileStream(const DirectMSFStream& directStream, uint32_t size, uint32_t offset) PDB_NO_EXCEPT;

		PDB_DEFAULT_MOVE(SourceFileStream);

		// Returns the number of modules.
		PDB_NO_DISCARD inline uint32_t GetModuleCount(void) const PDB_NO_EXCEPT
		{
			return m_moduleCount;
		}

		// Returns a view of all the filename offsets for the module with the given index.
		PDB_NO_DISCARD inline ArrayView<uint32_t> GetModuleFilenameOffsets(size_t moduleIndex) const PDB_NO_EXCEPT
		{
			const uint16_t moduleStartIndex = m_moduleIndices[moduleIndex];
			const uint16_t moduleFileCount = m_moduleFileCounts[moduleIndex];
			
			return ArrayView<uint32_t>(m_fileNameOffsets + moduleStartIndex, moduleFileCount);
		}

		// Returns a filename for the given filename offset.
		PDB_NO_DISCARD inline const char* GetFilename(uint32_t filenameOffset) const PDB_NO_EXCEPT
		{
			return m_stringTable + filenameOffset;
		}

	private:
		CoalescedMSFStream m_stream;

		// the number of modules
		uint32_t m_moduleCount;

		// the indices into the file name offsets, for each module
		const uint16_t* m_moduleIndices;

		// the number of files, for each module
		const uint16_t* m_moduleFileCounts;

		// the filename offsets into the string table, for all modules
		const uint32_t* m_fileNameOffsets;

		// the string table storing all filenames
		const char* m_stringTable;

		PDB_DISABLE_COPY(SourceFileStream);
	};
}
