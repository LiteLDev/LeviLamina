// Copyright 2011-2022, Molecular Matters GmbH <office@molecular-matters.com>
// See LICENSE.txt for licensing details (2-clause BSD License: https://opensource.org/licenses/BSD-2-Clause)

#include "PDB_PCH.h"
#include "PDB_SectionContributionStream.h"


// ------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------
PDB::SectionContributionStream::SectionContributionStream(void) PDB_NO_EXCEPT
	: m_stream()
	, m_contributions(nullptr)
	, m_count(0u)
{
}


// ------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------
PDB::SectionContributionStream::SectionContributionStream(const DirectMSFStream& directStream, uint32_t size, uint32_t offset) PDB_NO_EXCEPT
	: m_stream(directStream, size, offset)
	, m_contributions(m_stream.GetDataAtOffset<DBI::SectionContribution>(0u))
	, m_count(size / sizeof(DBI::SectionContribution))
{
}
