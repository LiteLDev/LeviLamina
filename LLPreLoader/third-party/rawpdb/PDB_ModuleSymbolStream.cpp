// Copyright 2011-2022, Molecular Matters GmbH <office@molecular-matters.com>
// See LICENSE.txt for licensing details (2-clause BSD License: https://opensource.org/licenses/BSD-2-Clause)

#include "PDB_PCH.h"
#include "PDB_ModuleSymbolStream.h"
#include "PDB_RawFile.h"


// ------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------
PDB::ModuleSymbolStream::ModuleSymbolStream(void) PDB_NO_EXCEPT
	: m_stream()
{
}


// ------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------
PDB::ModuleSymbolStream::ModuleSymbolStream(const RawFile& file, uint16_t streamIndex, uint32_t symbolStreamSize) PDB_NO_EXCEPT
	: m_stream(file.CreateMSFStream<CoalescedMSFStream>(streamIndex, symbolStreamSize))
{
	// https://llvm.org/docs/PDB/ModiStream.html
	// struct ModiStream {
	//	uint32_t Signature;
	//	uint8_t Symbols[SymbolSize - 4];
	//	uint8_t C11LineInfo[C11Size];
	//	uint8_t C13LineInfo[C13Size];
	//	uint32_t GlobalRefsSize;
	//	uint8_t GlobalRefs[GlobalRefsSize];
	// };
	// we are only interested in the symbols, but not the line information or global refs.
	// the coalesced stream is therefore only built for the symbols, not all the data in the stream.
	// this potentially saves a lot of memory and performance on large PDBs.
}


// ------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------
PDB_NO_DISCARD const PDB::CodeView::DBI::Record* PDB::ModuleSymbolStream::FindRecord(CodeView::DBI::SymbolRecordKind kind) const PDB_NO_EXCEPT
{
	// ignore the stream's 4-byte signature
	size_t offset = sizeof(uint32_t);

	// parse the CodeView records
	while (offset < m_stream.GetSize())
	{
		// https://llvm.org/docs/PDB/CodeViewTypes.html
		const CodeView::DBI::Record* record = m_stream.GetDataAtOffset<const CodeView::DBI::Record>(offset);
		if (record->header.kind == kind)
		{
			return record;
		}

		const uint32_t recordSize = GetCodeViewRecordSize(record);

		// position the module stream offset at the next record
		offset = BitUtil::RoundUpToMultiple<size_t>(offset + sizeof(CodeView::DBI::RecordHeader) + recordSize, 4u);
	}

	return nullptr;
}
