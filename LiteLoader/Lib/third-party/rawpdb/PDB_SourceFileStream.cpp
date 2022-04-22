// Copyright 2011-2022, Molecular Matters GmbH <office@molecular-matters.com>
// See LICENSE.txt for licensing details (2-clause BSD License: https://opensource.org/licenses/BSD-2-Clause)

#include "PDB_PCH.h"
#include "PDB_SourceFileStream.h"


// ------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------
PDB::SourceFileStream::SourceFileStream(void) PDB_NO_EXCEPT
	: m_stream()
	, m_moduleCount(0u)
	, m_moduleIndices(nullptr)
	, m_moduleFileCounts(nullptr)
	, m_fileNameOffsets(nullptr)
	, m_stringTable(nullptr)
{
}


// ------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------
PDB::SourceFileStream::SourceFileStream(const DirectMSFStream& directStream, uint32_t size, uint32_t offset) PDB_NO_EXCEPT
	: m_stream(directStream, size, offset)
	, m_moduleCount(0u)
	, m_moduleIndices(nullptr)
	, m_moduleFileCounts(nullptr)
	, m_fileNameOffsets(nullptr)
	, m_stringTable(nullptr)
{
	// we are going to consume the whole source info sub-stream, so create a coalesced stream for faster read operations and direct access.
	// the sub-stream has the following layout:
	//	struct SourceInfoSubstream
	//	{
	//		uint16_t moduleCount;
	//		uint16_t sourceFileCount;
	//		uint16_t moduleIndices[moduleCount];
	//		uint16_t moduleFileCounts[moduleCount];
	//		uint32_t fileNameOffsets[realSourceFileCount];
	//		char stringTable[][realSourceFileCount];
	//	};
	m_moduleCount = *m_stream.GetDataAtOffset<uint16_t>(0u);
	size_t readOffset = sizeof(uint16_t);

	// skip number of source files. this would only support 64k unique files and is no longer used.
	// the number of source files is computed dynamically instead.
	readOffset += sizeof(uint16_t);

	// grab direct pointers into the stream data
	m_moduleIndices = m_stream.GetDataAtOffset<uint16_t>(readOffset);
	readOffset += sizeof(uint16_t) * m_moduleCount;

	m_moduleFileCounts = m_stream.GetDataAtOffset<uint16_t>(readOffset);
	readOffset += sizeof(uint16_t) * m_moduleCount;

	// count the actual number of source files
	size_t sourceFileCount = 0u;
	for (unsigned int i = 0u; i < m_moduleCount; ++i)
	{
		sourceFileCount += m_moduleFileCounts[i];
	}

	m_fileNameOffsets = m_stream.GetDataAtOffset<uint32_t>(readOffset);
	readOffset += sizeof(uint32_t) * sourceFileCount;

	// grab a pointer into the string table
	m_stringTable = m_stream.GetDataAtOffset<char>(readOffset);
}
