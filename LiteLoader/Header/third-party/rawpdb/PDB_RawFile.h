// Copyright 2011-2022, Molecular Matters GmbH <office@molecular-matters.com>
// See LICENSE.txt for licensing details (2-clause BSD License: https://opensource.org/licenses/BSD-2-Clause)

#pragma once

#include "Foundation/PDB_Macros.h"
#include "Foundation/PDB_DisableWarningsPush.h"
#include <cstdint>
#include "Foundation/PDB_DisableWarningsPop.h"
#include "PDB_CoalescedMSFStream.h"


// https://llvm.org/docs/PDB/index.html
namespace PDB
{
	struct SuperBlock;


	class PDB_NO_DISCARD RawFile
	{
	public:
		RawFile(RawFile&& other) PDB_NO_EXCEPT;
		RawFile& operator=(RawFile&& other) PDB_NO_EXCEPT;

		explicit RawFile(const void* data) PDB_NO_EXCEPT;

		~RawFile(void) PDB_NO_EXCEPT;

		// Creates any type of MSF stream.
		template <typename T>
		PDB_NO_DISCARD T CreateMSFStream(uint32_t streamIndex) const PDB_NO_EXCEPT;

		// Creates any type of MSF stream with the given size.
		template <typename T>
		PDB_NO_DISCARD T CreateMSFStream(uint32_t streamIndex, uint32_t streamSize) const PDB_NO_EXCEPT;

	private:
		const void* m_data;
		const SuperBlock* m_superBlock;
		CoalescedMSFStream m_directoryStream;

		// stream directory
		uint32_t m_streamCount;
		const uint32_t* m_streamSizes;
		const uint32_t** m_streamBlocks;

		PDB_DISABLE_COPY(RawFile);
	};
}
