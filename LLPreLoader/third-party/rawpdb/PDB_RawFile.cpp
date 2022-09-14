// Copyright 2011-2022, Molecular Matters GmbH <office@molecular-matters.com>
// See LICENSE.txt for licensing details (2-clause BSD License: https://opensource.org/licenses/BSD-2-Clause)

#include "PDB_PCH.h"
#include "PDB_RawFile.h"
#include "PDB_Types.h"
#include "PDB_Util.h"
#include "PDB_DirectMSFStream.h"
#include "Foundation/PDB_PointerUtil.h"
#include "Foundation/PDB_Memory.h"
#include "Foundation/PDB_Assert.h"


// ------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------
PDB::RawFile::RawFile(RawFile&& other) PDB_NO_EXCEPT
	: m_data(PDB_MOVE(other.m_data))
	, m_superBlock(PDB_MOVE(other.m_superBlock))
	, m_directoryStream(PDB_MOVE(other.m_directoryStream))
	, m_streamCount(PDB_MOVE(other.m_streamCount))
	, m_streamSizes(PDB_MOVE(other.m_streamSizes))
	, m_streamBlocks(PDB_MOVE(other.m_streamBlocks))
{
	other.m_data = nullptr;
	other.m_superBlock = nullptr;
	other.m_streamCount = 0u;
	other.m_streamSizes = nullptr;
	other.m_streamBlocks = nullptr;
}


// ------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------
PDB::RawFile& PDB::RawFile::operator=(RawFile&& other) PDB_NO_EXCEPT
{
	if (this != &other)
	{
		PDB_DELETE_ARRAY(m_streamBlocks);

		m_data = PDB_MOVE(other.m_data);
		m_superBlock = PDB_MOVE(other.m_superBlock);
		m_directoryStream = PDB_MOVE(other.m_directoryStream);
		m_streamCount = PDB_MOVE(other.m_streamCount);
		m_streamSizes = PDB_MOVE(other.m_streamSizes);
		m_streamBlocks = PDB_MOVE(other.m_streamBlocks);

		other.m_data = nullptr;
		other.m_superBlock = nullptr;
		other.m_streamCount = 0u;
		other.m_streamSizes = nullptr;
		other.m_streamBlocks = nullptr;
	}

	return *this;
}


// ------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------
PDB::RawFile::RawFile(const void* data) PDB_NO_EXCEPT
	: m_data(data)
	, m_superBlock(Pointer::Offset<const SuperBlock*>(data, 0u))
	, m_directoryStream()
	, m_streamCount(0u)
	, m_streamSizes(nullptr)
	, m_streamBlocks(nullptr)
{
	// the SuperBlock stores an array of indices of blocks that make up the indices of directory blocks, which need to be stitched together to form the directory.
	// the blocks holding the indices of directory blocks are not necessarily contiguous, so they need to be coalesced first.
	const uint32_t directoryBlockCount = PDB::ConvertSizeToBlockCount(m_superBlock->directorySize, m_superBlock->blockSize);

	// the directory is made up of directoryBlockCount blocks, so we need that many indices to be read from the blocks that make up the indices
	CoalescedMSFStream directoryIndicesStream(data, m_superBlock->blockSize, m_superBlock->directoryBlockIndices, directoryBlockCount * sizeof(uint32_t));

	// these are the indices of blocks making up the directory stream, now guaranteed to be contiguous
	const uint32_t* directoryIndices = directoryIndicesStream.GetDataAtOffset<uint32_t>(0u);

	m_directoryStream = CoalescedMSFStream(data, m_superBlock->blockSize, directoryIndices, m_superBlock->directorySize);

	// https://llvm.org/docs/PDB/MsfFile.html#the-stream-directory
	// parse the directory from its contiguous version. the directory matches the following struct:
	//	struct StreamDirectory
	//	{
	//		uint32_t streamCount;
	//		uint32_t streamSizes[streamCount];
	//		uint32_t streamBlocks[streamCount][];
	//	};
	m_streamCount = *m_directoryStream.GetDataAtOffset<uint32_t>(0u);

	// we can assign pointers into the stream directly, since the RawFile keeps ownership of the directory stream
	m_streamSizes = m_directoryStream.GetDataAtOffset<uint32_t>(sizeof(uint32_t));
	const uint32_t* directoryStreamBlocks = m_directoryStream.GetDataAtOffset<uint32_t>(sizeof(uint32_t) + sizeof(uint32_t) * m_streamCount);

	// prepare indices for directly accessing individual streams
	m_streamBlocks = PDB_NEW_ARRAY(const uint32_t*, m_streamCount);

	const uint32_t* indicesForCurrentBlock = directoryStreamBlocks;
	for (uint32_t i = 0u; i < m_streamCount; ++i)
	{
		const uint32_t sizeInBytes = m_streamSizes[i];
		const uint32_t blockCount = ConvertSizeToBlockCount(sizeInBytes, m_superBlock->blockSize);
		m_streamBlocks[i] = indicesForCurrentBlock;
		
		indicesForCurrentBlock += blockCount;
	}
}


// ------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------
PDB::RawFile::~RawFile(void) PDB_NO_EXCEPT
{
	PDB_DELETE_ARRAY(m_streamBlocks);
}


// ------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------
template <typename T>
PDB_NO_DISCARD T PDB::RawFile::CreateMSFStream(uint32_t streamIndex) const PDB_NO_EXCEPT
{
	return T(m_data, m_superBlock->blockSize, m_streamBlocks[streamIndex], m_streamSizes[streamIndex]);
}


// ------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------
template <typename T>
PDB_NO_DISCARD T PDB::RawFile::CreateMSFStream(uint32_t streamIndex, uint32_t streamSize) const PDB_NO_EXCEPT
{
	PDB_ASSERT(streamSize <= m_streamSizes[streamIndex], "Invalid stream size.");

	return T(m_data, m_superBlock->blockSize, m_streamBlocks[streamIndex], streamSize);
}


// explicit template instantiation
template PDB::CoalescedMSFStream PDB::RawFile::CreateMSFStream<PDB::CoalescedMSFStream>(uint32_t streamIndex) const PDB_NO_EXCEPT;
template PDB::DirectMSFStream PDB::RawFile::CreateMSFStream<PDB::DirectMSFStream>(uint32_t streamIndex) const PDB_NO_EXCEPT;

template PDB::CoalescedMSFStream PDB::RawFile::CreateMSFStream<PDB::CoalescedMSFStream>(uint32_t streamIndex, uint32_t streamSize) const PDB_NO_EXCEPT;
template PDB::DirectMSFStream PDB::RawFile::CreateMSFStream<PDB::DirectMSFStream>(uint32_t streamIndex, uint32_t streamSize) const PDB_NO_EXCEPT;
