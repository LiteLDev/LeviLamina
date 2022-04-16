// Copyright 2011-2022, Molecular Matters GmbH <office@molecular-matters.com>
// See LICENSE.txt for licensing details (2-clause BSD License: https://opensource.org/licenses/BSD-2-Clause)

#pragma once

#include "Foundation/PDB_Macros.h"
#include "PDB_ErrorCodes.h"
#include "PDB_DBITypes.h"
#include "PDB_CoalescedMSFStream.h"
#include "PDB_DirectMSFStream.h"
#include "PDB_ImageSectionStream.h"
#include "PDB_PublicSymbolStream.h"
#include "PDB_GlobalSymbolStream.h"
#include "PDB_SourceFileStream.h"
#include "PDB_SectionContributionStream.h"
#include "PDB_ModuleInfoStream.h"


// PDB DBI Stream
// https://llvm.org/docs/PDB/DbiStream.html
namespace PDB
{
	class RawFile;


	class PDB_NO_DISCARD DBIStream
	{
	public:
		DBIStream(void) PDB_NO_EXCEPT;
		explicit DBIStream(const RawFile& file, const DBI::StreamHeader& header) PDB_NO_EXCEPT;

		PDB_DEFAULT_MOVE(DBIStream);

		PDB_NO_DISCARD ErrorCode HasValidImageSectionStream(const RawFile& file) const PDB_NO_EXCEPT;
		PDB_NO_DISCARD ErrorCode HasValidPublicSymbolStream(const RawFile& file) const PDB_NO_EXCEPT;
		PDB_NO_DISCARD ErrorCode HasValidGlobalSymbolStream(const RawFile& file) const PDB_NO_EXCEPT;
		PDB_NO_DISCARD ErrorCode HasValidSectionContributionStream(const RawFile& file) const PDB_NO_EXCEPT;

		PDB_NO_DISCARD CoalescedMSFStream CreateSymbolRecordStream(const RawFile& file) const PDB_NO_EXCEPT;
		PDB_NO_DISCARD ImageSectionStream CreateImageSectionStream(const RawFile& file) const PDB_NO_EXCEPT;
		PDB_NO_DISCARD PublicSymbolStream CreatePublicSymbolStream(const RawFile& file) const PDB_NO_EXCEPT;
		PDB_NO_DISCARD GlobalSymbolStream CreateGlobalSymbolStream(const RawFile& file) const PDB_NO_EXCEPT;
		PDB_NO_DISCARD SourceFileStream CreateSourceFileStream(const RawFile& file) const PDB_NO_EXCEPT;
		PDB_NO_DISCARD SectionContributionStream CreateSectionContributionStream(const RawFile& file) const PDB_NO_EXCEPT;
		PDB_NO_DISCARD ModuleInfoStream CreateModuleInfoStream(const RawFile& file) const PDB_NO_EXCEPT;

	private:
		DBI::StreamHeader m_header;
		DirectMSFStream m_stream;

		PDB_DISABLE_COPY(DBIStream);
	};

	// Returns whether the given raw file provides a valid DBI stream.
	PDB_NO_DISCARD ErrorCode HasValidDBIStream(const RawFile& file) PDB_NO_EXCEPT;

	// Creates the DBI stream from a raw file.
	PDB_NO_DISCARD DBIStream CreateDBIStream(const RawFile& file) PDB_NO_EXCEPT;
}
