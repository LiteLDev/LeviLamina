// Copyright 2011-2022, Molecular Matters GmbH <office@molecular-matters.com>
// See LICENSE.txt for licensing details (2-clause BSD License: https://opensource.org/licenses/BSD-2-Clause)

#pragma once

#include "Foundation/PDB_Macros.h"
#include "Foundation/PDB_ArrayView.h"
#include "PDB_Types.h"
#include "PDB_CoalescedMSFStream.h"


namespace PDB
{
	class RawFile;
	struct IMAGE_SECTION_HEADER;


	class PDB_NO_DISCARD ImageSectionStream
	{
	public:
		ImageSectionStream(void) PDB_NO_EXCEPT;
		explicit ImageSectionStream(const RawFile& file, uint16_t streamIndex) PDB_NO_EXCEPT;

		PDB_DEFAULT_MOVE(ImageSectionStream);

		// Converts a one-based section offset into an RVA.
		PDB_NO_DISCARD uint32_t ConvertSectionOffsetToRVA(uint16_t oneBasedSectionIndex, uint32_t offsetInSection) const PDB_NO_EXCEPT;

		// Returns a view of all the sections in the stream.
		PDB_NO_DISCARD inline ArrayView<IMAGE_SECTION_HEADER> GetImageSections(void) const PDB_NO_EXCEPT
		{
			return ArrayView<IMAGE_SECTION_HEADER>(m_headers, m_count);
		}

	private:
		CoalescedMSFStream m_stream;
		const IMAGE_SECTION_HEADER* m_headers;
		size_t m_count;

		PDB_DISABLE_COPY(ImageSectionStream);
	};
}
