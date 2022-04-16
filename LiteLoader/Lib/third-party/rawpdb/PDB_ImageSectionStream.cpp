// Copyright 2011-2022, Molecular Matters GmbH <office@molecular-matters.com>
// See LICENSE.txt for licensing details (2-clause BSD License: https://opensource.org/licenses/BSD-2-Clause)

#include "PDB_PCH.h"
#include "PDB_ImageSectionStream.h"
#include "PDB_RawFile.h"


// ------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------
PDB::ImageSectionStream::ImageSectionStream(void) PDB_NO_EXCEPT
	: m_stream()
	, m_headers(nullptr)
	, m_count(0u)
{
}


// ------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------
PDB::ImageSectionStream::ImageSectionStream(const RawFile& file, uint16_t streamIndex) PDB_NO_EXCEPT
	: m_stream(file.CreateMSFStream<CoalescedMSFStream>(streamIndex))
	, m_headers(m_stream.GetDataAtOffset<IMAGE_SECTION_HEADER>(0u))
	, m_count(m_stream.GetSize() / sizeof(IMAGE_SECTION_HEADER))
{
}


// ------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------
PDB_NO_DISCARD uint32_t PDB::ImageSectionStream::ConvertSectionOffsetToRVA(uint16_t oneBasedSectionIndex, uint32_t offsetInSection) const PDB_NO_EXCEPT
{
	if (oneBasedSectionIndex == 0u)
	{
		// should never happen, but prevent underflow
		return 0u;
	}
	else if (oneBasedSectionIndex > m_count)
	{
		// this symbol is "contained" in a section that is neither part of the PDB, nor the EXE.
		// it is a special compiler-generated or linker-generated symbol such as CFG symbols (e.g. __guard_fids_count, __guard_flags).
		// we can safely ignore those symbols.
		return 0u;
	}

	return m_headers[oneBasedSectionIndex - 1u].VirtualAddress + offsetInSection;
}
