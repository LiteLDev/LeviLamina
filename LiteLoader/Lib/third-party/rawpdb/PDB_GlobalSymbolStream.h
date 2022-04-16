// Copyright 2011-2022, Molecular Matters GmbH <office@molecular-matters.com>
// See LICENSE.txt for licensing details (2-clause BSD License: https://opensource.org/licenses/BSD-2-Clause)

#pragma once

#include "Foundation/PDB_Macros.h"
#include "Foundation/PDB_ArrayView.h"
#include "PDB_CoalescedMSFStream.h"


namespace PDB
{
	class RawFile;
	struct HashRecord;

	namespace CodeView
	{
		namespace DBI
		{
			struct Record;
		}		
	}


	class PDB_NO_DISCARD GlobalSymbolStream
	{
	public:
		GlobalSymbolStream(void) PDB_NO_EXCEPT;
		explicit GlobalSymbolStream(const RawFile& file, uint16_t streamIndex, uint32_t count) PDB_NO_EXCEPT;

		PDB_DEFAULT_MOVE(GlobalSymbolStream);

		// Turns a given hash record into a DBI record using the given symbol stream.
		PDB_NO_DISCARD const CodeView::DBI::Record* GetRecord(const CoalescedMSFStream& symbolRecordStream, const HashRecord& hashRecord) const PDB_NO_EXCEPT;

		// Returns a view of all the records in the stream.
		PDB_NO_DISCARD inline ArrayView<HashRecord> GetRecords(void) const PDB_NO_EXCEPT
		{
			return ArrayView<HashRecord>(m_hashRecords, m_count);
		}

	private:
		CoalescedMSFStream m_stream;
		const HashRecord* m_hashRecords;
		uint32_t m_count;

		PDB_DISABLE_COPY(GlobalSymbolStream);
	};
}
