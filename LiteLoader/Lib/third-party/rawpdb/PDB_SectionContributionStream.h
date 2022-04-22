// Copyright 2011-2022, Molecular Matters GmbH <office@molecular-matters.com>
// See LICENSE.txt for licensing details (2-clause BSD License: https://opensource.org/licenses/BSD-2-Clause)

#pragma once

#include "Foundation/PDB_Macros.h"
#include "Foundation/PDB_ArrayView.h"
#include "PDB_DBITypes.h"
#include "PDB_CoalescedMSFStream.h"


namespace PDB
{
	class PDB_NO_DISCARD DirectMSFStream;


	class PDB_NO_DISCARD SectionContributionStream
	{
	public:
		SectionContributionStream(void) PDB_NO_EXCEPT;
		explicit SectionContributionStream(const DirectMSFStream& directStream, uint32_t size, uint32_t offset) PDB_NO_EXCEPT;

		PDB_DEFAULT_MOVE(SectionContributionStream);

		// Returns a view of all section contributions in the stream.
		PDB_NO_DISCARD inline ArrayView<DBI::SectionContribution> GetContributions(void) const PDB_NO_EXCEPT
		{
			return ArrayView<DBI::SectionContribution>(m_contributions, m_count);
		}

	private:
		CoalescedMSFStream m_stream;
		const DBI::SectionContribution* m_contributions;
		size_t m_count;

		PDB_DISABLE_COPY(SectionContributionStream);
	};
}
