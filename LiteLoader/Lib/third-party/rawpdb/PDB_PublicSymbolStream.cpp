// Copyright 2011-2022, Molecular Matters GmbH <office@molecular-matters.com>
// See LICENSE.txt for licensing details (2-clause BSD License: https://opensource.org/licenses/BSD-2-Clause)

#include "PDB_PCH.h"
#include "PDB_PublicSymbolStream.h"
#include "PDB_RawFile.h"
#include "PDB_Types.h"
#include "PDB_DBITypes.h"


// ------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------
PDB::PublicSymbolStream::PublicSymbolStream(void) PDB_NO_EXCEPT
	: m_stream()
	, m_hashRecords(nullptr)
	, m_count(0u)
{
}


// ------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------
PDB::PublicSymbolStream::PublicSymbolStream(const RawFile& file, uint16_t streamIndex, uint32_t count) PDB_NO_EXCEPT
	: m_stream(file.CreateMSFStream<CoalescedMSFStream>(streamIndex))
	, m_hashRecords(m_stream.GetDataAtOffset<HashRecord>(sizeof(PublicStreamHeader) + sizeof(HashTableHeader)))
	, m_count(count)
{
}


// ------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------
PDB_NO_DISCARD const PDB::CodeView::DBI::Record* PDB::PublicSymbolStream::GetRecord(const CoalescedMSFStream& symbolRecordStream, const HashRecord& hashRecord) const PDB_NO_EXCEPT
{
	// hash record offsets start at 1, not at 0
	const uint32_t headerOffset = hashRecord.offset - 1u;

	// the offset doesn't point to the public symbol directly, but to the CodeView record:
	// https://llvm.org/docs/PDB/CodeViewSymbols.html
	const CodeView::DBI::Record* record = symbolRecordStream.GetDataAtOffset<const CodeView::DBI::Record>(headerOffset);

	if (record->header.kind != CodeView::DBI::SymbolRecordKind::S_PUB32)
	{
		// malformed data
		return nullptr;
	}

	return record;
}
