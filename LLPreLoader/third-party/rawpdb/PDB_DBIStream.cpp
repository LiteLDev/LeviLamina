// Copyright 2011-2022, Molecular Matters GmbH <office@molecular-matters.com>
// See LICENSE.txt for licensing details (2-clause BSD License: https://opensource.org/licenses/BSD-2-Clause)

#include "PDB_PCH.h"
#include "PDB_DBIStream.h"
#include "PDB_RawFile.h"


namespace
{
	// the DBI stream always resides at index 3
	static constexpr const uint32_t DBIStreamIndex = 3u;


	// ------------------------------------------------------------------------------------------------
	// ------------------------------------------------------------------------------------------------
	PDB_NO_DISCARD static inline uint32_t GetModuleInfoSubstreamOffset(const PDB::DBI::StreamHeader& /* dbiHeader */) PDB_NO_EXCEPT
	{
		return sizeof(PDB::DBI::StreamHeader);
	}


	// ------------------------------------------------------------------------------------------------
	// ------------------------------------------------------------------------------------------------
	PDB_NO_DISCARD static inline uint32_t GetSectionContributionSubstreamOffset(const PDB::DBI::StreamHeader& dbiHeader) PDB_NO_EXCEPT
	{
		return GetModuleInfoSubstreamOffset(dbiHeader) + dbiHeader.moduleInfoSize;
	}


	// ------------------------------------------------------------------------------------------------
	// ------------------------------------------------------------------------------------------------
	PDB_NO_DISCARD static inline uint32_t GetSectionMapSubstreamOffset(const PDB::DBI::StreamHeader& dbiHeader) PDB_NO_EXCEPT
	{
		return GetSectionContributionSubstreamOffset(dbiHeader) + dbiHeader.sectionContributionSize;
	}


	// ------------------------------------------------------------------------------------------------
	// ------------------------------------------------------------------------------------------------
	PDB_NO_DISCARD static inline uint32_t GetSourceInfoSubstreamOffset(const PDB::DBI::StreamHeader& dbiHeader) PDB_NO_EXCEPT
	{
		return GetSectionMapSubstreamOffset(dbiHeader) + dbiHeader.sectionMapSize;
	}


	// ------------------------------------------------------------------------------------------------
	// ------------------------------------------------------------------------------------------------
	PDB_NO_DISCARD static inline uint32_t GetTypeServerMapSubstreamOffset(const PDB::DBI::StreamHeader& dbiHeader) PDB_NO_EXCEPT
	{
		return GetSourceInfoSubstreamOffset(dbiHeader) + dbiHeader.sourceInfoSize;
	}


	// ------------------------------------------------------------------------------------------------
	// ------------------------------------------------------------------------------------------------
	PDB_NO_DISCARD static inline uint32_t GetECSubstreamOffset(const PDB::DBI::StreamHeader& dbiHeader) PDB_NO_EXCEPT
	{
		return GetTypeServerMapSubstreamOffset(dbiHeader) + dbiHeader.typeServerMapSize;
	}


	// ------------------------------------------------------------------------------------------------
	// ------------------------------------------------------------------------------------------------
	PDB_NO_DISCARD static inline uint32_t GetDebugHeaderSubstreamOffset(const PDB::DBI::StreamHeader& dbiHeader) PDB_NO_EXCEPT
	{
		return GetECSubstreamOffset(dbiHeader) + dbiHeader.ecSize;
	}
}


// ------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------
PDB::DBIStream::DBIStream(void) PDB_NO_EXCEPT
	: m_header()
	, m_stream()
{
}


// ------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------
PDB::DBIStream::DBIStream(const RawFile& file, const DBI::StreamHeader& header) PDB_NO_EXCEPT
	: m_header(header)
	, m_stream(file.CreateMSFStream<DirectMSFStream>(DBIStreamIndex))
{
}


// ------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------
PDB_NO_DISCARD PDB::ErrorCode PDB::HasValidDBIStream(const RawFile& file) PDB_NO_EXCEPT
{
	DirectMSFStream stream = file.CreateMSFStream<DirectMSFStream>(DBIStreamIndex);

	const DBI::StreamHeader header = stream.ReadAtOffset<DBI::StreamHeader>(0u);
	if (header.signature != DBI::StreamHeader::Signature)
	{
		return ErrorCode::InvalidSignature;
	}
	else if (header.version != DBI::StreamHeader::Version::V70)
	{
		return ErrorCode::UnknownVersion;
	}

	return ErrorCode::Success;
}


// ------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------
PDB_NO_DISCARD PDB::DBIStream PDB::CreateDBIStream(const RawFile& file) PDB_NO_EXCEPT
{
	DirectMSFStream stream = file.CreateMSFStream<DirectMSFStream>(DBIStreamIndex);
	const DBI::StreamHeader header = stream.ReadAtOffset<DBI::StreamHeader>(0u);

	return DBIStream { file, header };
}


// ------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------
PDB_NO_DISCARD PDB::ErrorCode PDB::DBIStream::HasValidImageSectionStream(const RawFile& /* file */) const PDB_NO_EXCEPT
{
	// find the debug header sub-stream
	const uint32_t debugHeaderOffset = GetDebugHeaderSubstreamOffset(m_header);
	const DBI::DebugHeader& debugHeader = m_stream.ReadAtOffset<DBI::DebugHeader>(debugHeaderOffset);

	if (debugHeader.sectionHeaderStreamIndex == DBI::DebugHeader::InvalidStreamIndex)
	{
		return ErrorCode::InvalidStreamIndex;
	}

	return ErrorCode::Success;
}


// ------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------
PDB_NO_DISCARD PDB::ErrorCode PDB::DBIStream::HasValidPublicSymbolStream(const RawFile& file) const PDB_NO_EXCEPT
{
	DirectMSFStream publicStream = file.CreateMSFStream<DirectMSFStream>(m_header.publicStreamIndex);

	// the public symbol stream always begins with a header, we are not interested in that.
	// following the public symbol stream header is a hash table header.
	const HashTableHeader hashHeader = publicStream.ReadAtOffset<HashTableHeader>(sizeof(PublicStreamHeader));
	if (hashHeader.signature != HashTableHeader::Signature)
	{
		return ErrorCode::InvalidSignature;
	}
	else if (hashHeader.version != HashTableHeader::Version)
	{
		return ErrorCode::UnknownVersion;
	}

	return ErrorCode::Success;
}


// ------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------
PDB_NO_DISCARD PDB::ErrorCode PDB::DBIStream::HasValidGlobalSymbolStream(const RawFile& file) const PDB_NO_EXCEPT
{
	DirectMSFStream globalStream = file.CreateMSFStream<DirectMSFStream>(m_header.globalStreamIndex);

	// the global symbol stream starts with a hash table header
	const HashTableHeader hashHeader = globalStream.ReadAtOffset<HashTableHeader>(0u);
	if (hashHeader.signature != HashTableHeader::Signature)
	{
		return ErrorCode::InvalidSignature;
	}
	else if (hashHeader.version != HashTableHeader::Version)
	{
		return ErrorCode::UnknownVersion;
	}

	return ErrorCode::Success;
}


// ------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------
PDB_NO_DISCARD PDB::ErrorCode PDB::DBIStream::HasValidSectionContributionStream(const RawFile& /* file */) const PDB_NO_EXCEPT
{
	// find the section contribution sub-stream
	// https://llvm.org/docs/PDB/DbiStream.html#section-contribution-substream
	const uint32_t streamOffset = GetSectionContributionSubstreamOffset(m_header);

	const DBI::SectionContribution::Version version = m_stream.ReadAtOffset<DBI::SectionContribution::Version>(streamOffset);
	if (version != DBI::SectionContribution::Version::Ver60)
	{
		return ErrorCode::UnknownVersion;
	}

	return ErrorCode::Success;
}


// ------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------
PDB_NO_DISCARD PDB::CoalescedMSFStream PDB::DBIStream::CreateSymbolRecordStream(const RawFile& file) const PDB_NO_EXCEPT
{
	// the symbol record stream holds the actual CodeView data of the symbols
	return file.CreateMSFStream<CoalescedMSFStream>(m_header.symbolRecordStreamIndex);
}


// ------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------
PDB_NO_DISCARD PDB::ImageSectionStream PDB::DBIStream::CreateImageSectionStream(const RawFile& file) const PDB_NO_EXCEPT
{
	// find the debug header sub-stream
	const uint32_t debugHeaderOffset = GetDebugHeaderSubstreamOffset(m_header);
	const DBI::DebugHeader& debugHeader = m_stream.ReadAtOffset<DBI::DebugHeader>(debugHeaderOffset);

	// from there, grab the section header stream
	return ImageSectionStream(file, debugHeader.sectionHeaderStreamIndex);
}


// ------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------
PDB_NO_DISCARD PDB::PublicSymbolStream PDB::DBIStream::CreatePublicSymbolStream(const RawFile& file) const PDB_NO_EXCEPT
{
	DirectMSFStream publicStream = file.CreateMSFStream<DirectMSFStream>(m_header.publicStreamIndex);

	// the public symbol stream always begins with a header, we are not interested in that.
	// following the public symbol stream header is a hash table header.
	// we use this to work out how many symbol records are referenced by the public symbol stream.
	const HashTableHeader hashHeader = publicStream.ReadAtOffset<HashTableHeader>(sizeof(PublicStreamHeader));
	const uint32_t recordCount = hashHeader.size / sizeof(HashRecord);

	return PublicSymbolStream(file, m_header.publicStreamIndex, recordCount);
}


// ------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------
PDB_NO_DISCARD PDB::GlobalSymbolStream PDB::DBIStream::CreateGlobalSymbolStream(const RawFile& file) const PDB_NO_EXCEPT
{
	DirectMSFStream globalStream = file.CreateMSFStream<DirectMSFStream>(m_header.globalStreamIndex);

	// the global symbol stream starts with a hash table header.
	// we use this to work out how many symbol records are referenced by the global symbol stream.
	const HashTableHeader hashHeader = globalStream.ReadAtOffset<HashTableHeader>(0u);
	const uint32_t recordCount = hashHeader.size / sizeof(HashRecord);

	return GlobalSymbolStream(file, m_header.globalStreamIndex, recordCount);
}


// ------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------
PDB_NO_DISCARD PDB::SourceFileStream PDB::DBIStream::CreateSourceFileStream(const RawFile& /* file */) const PDB_NO_EXCEPT
{
	// find the source info sub-stream
	// https://llvm.org/docs/PDB/DbiStream.html#file-info-substream
	const uint32_t streamOffset = GetSourceInfoSubstreamOffset(m_header);

	return SourceFileStream(m_stream, m_header.sourceInfoSize, streamOffset);
}


// ------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------
PDB_NO_DISCARD PDB::SectionContributionStream PDB::DBIStream::CreateSectionContributionStream(const RawFile& /* file */) const PDB_NO_EXCEPT
{
	// find the section contribution sub-stream
	// https://llvm.org/docs/PDB/DbiStream.html#section-contribution-substream
	const uint32_t streamOffset = GetSectionContributionSubstreamOffset(m_header);

	return SectionContributionStream(m_stream, m_header.sectionContributionSize - sizeof(DBI::SectionContribution::Version), streamOffset + sizeof(DBI::SectionContribution::Version));
}


// ------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------
PDB_NO_DISCARD PDB::ModuleInfoStream PDB::DBIStream::CreateModuleInfoStream(const RawFile& /* file */) const PDB_NO_EXCEPT
{
	// find the module info sub-stream
	// https://llvm.org/docs/PDB/DbiStream.html#module-info-substream
	const uint32_t streamOffset = GetModuleInfoSubstreamOffset(m_header);

	return ModuleInfoStream(m_stream, m_header.moduleInfoSize, streamOffset);
}
