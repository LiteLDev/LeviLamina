// Copyright 2011-2022, Molecular Matters GmbH <office@molecular-matters.com>
// See LICENSE.txt for licensing details (2-clause BSD License: https://opensource.org/licenses/BSD-2-Clause)

#include "PDB_PCH.h"
#include "PDB_InfoStream.h"
#include "PDB_RawFile.h"


namespace
{
	// the PDB info stream always resides at index 1
	static constexpr const uint32_t InfoStreamIndex = 1u;
}


// ------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------
PDB::InfoStream::InfoStream(void) PDB_NO_EXCEPT
	: m_stream()
	, m_header(nullptr)
	, m_usesDebugFastlink(false)
{
}


// ------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------
PDB::InfoStream::InfoStream(const RawFile& file) PDB_NO_EXCEPT
	: m_stream(file.CreateMSFStream<CoalescedMSFStream>(InfoStreamIndex))
	, m_header(m_stream.GetDataAtOffset<const Header>(0u))
	, m_usesDebugFastlink(false)
{
	// the info stream starts with the header, followed by the named stream map, followed by the feature codes
	// https://llvm.org/docs/PDB/PdbStream.html#named-stream-map
	size_t streamOffset = sizeof(Header);

	const NamedStreamMap* namedStreamMap = m_stream.GetDataAtOffset<const NamedStreamMap>(streamOffset);
	streamOffset += sizeof(NamedStreamMap) + namedStreamMap->length;

	const SerializedHashTable::Header* hashTableHeader = m_stream.GetDataAtOffset<const SerializedHashTable::Header>(streamOffset);
	streamOffset += sizeof(SerializedHashTable::Header);

	const SerializedHashTable::BitVector* presentBitVector = m_stream.GetDataAtOffset<const SerializedHashTable::BitVector>(streamOffset);
	streamOffset += sizeof(SerializedHashTable::BitVector) + sizeof(uint32_t) * presentBitVector->wordCount;

	const SerializedHashTable::BitVector* deletedBitVector = m_stream.GetDataAtOffset<const SerializedHashTable::BitVector>(streamOffset);
	streamOffset += sizeof(SerializedHashTable::BitVector) + sizeof(uint32_t) * deletedBitVector->wordCount;

	// the hash table entries can be used to identify the indices of certain common streams like:
	//	"/UDTSRCLINEUNDONE"
	//	"/src/headerblock"
	//	"/LinkInfo"
	//	"/TMCache"
	//	"/names"
	// however, none of those streams are of interest to us, so we just skip the whole hash table
	streamOffset += sizeof(NamedStreamMap::HashTableEntry) * hashTableHeader->size;

	// read feature codes by consuming remaining bytes
	// https://llvm.org/docs/PDB/PdbStream.html#pdb-feature-codes
	const FeatureCode* featureCodes = m_stream.GetDataAtOffset<const FeatureCode>(streamOffset);
	const size_t remainingBytes = m_stream.GetSize() - streamOffset;
	const size_t count = remainingBytes / sizeof(FeatureCode);

	for (size_t i=0u; i < count; ++i)
	{
		if (featureCodes[i] == PDB::FeatureCode::MinimalDebugInfo)
		{
			m_usesDebugFastlink = true;
		}
	}
}
