// Copyright 2011-2022, Molecular Matters GmbH <office@molecular-matters.com>
// See LICENSE.txt for licensing details (2-clause BSD License: https://opensource.org/licenses/BSD-2-Clause)

#include "PDB_PCH.h"
#include "PDB_ModuleInfoStream.h"
#include "Foundation/PDB_Memory.h"
#include "Foundation/PDB_DisableWarningsPush.h"
#include <cstring>
#include "Foundation/PDB_DisableWarningsPop.h"


namespace
{
	static constexpr const char* LinkerSymbolName("* Linker *");


	// ------------------------------------------------------------------------------------------------
	// ------------------------------------------------------------------------------------------------
	PDB_NO_DISCARD static inline size_t EstimateModuleCount(size_t streamSize) PDB_NO_EXCEPT
	{
		// work out how many modules are stored in the stream at most.
		// the module info is stored in variable-length records, so we can't determine the exact number without walking the stream.
		return streamSize / sizeof(PDB::DBI::ModuleInfo);
	}
}


// ------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------
PDB::ModuleInfoStream::Module::Module(void) PDB_NO_EXCEPT
	: m_info(nullptr)
	, m_name(nullptr)
	, m_nameLength(0u)
	, m_objectName(nullptr)
	, m_objectNameLength(0u)
{
}


// ------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------
PDB::ModuleInfoStream::Module::Module(const DBI::ModuleInfo* info, const char* name, size_t nameLength, const char* objectName, size_t objectNameLength) PDB_NO_EXCEPT
	: m_info(info)
	, m_name(name)
	, m_nameLength(nameLength)
	, m_objectName(objectName)
	, m_objectNameLength(objectNameLength)
{
}


// ------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------
PDB_NO_DISCARD bool PDB::ModuleInfoStream::Module::HasSymbolStream(void) const PDB_NO_EXCEPT
{
	const uint16_t streamIndex = m_info->moduleSymbolStreamIndex;

	// some modules don't have a symbol stream, i.e. no additional debug information is present.
	// this usually happens when private symbols are stripped from a PDB.
	return (streamIndex != 0xFFFFu);
}


// ------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------
PDB_NO_DISCARD PDB::ModuleSymbolStream PDB::ModuleInfoStream::Module::CreateSymbolStream(const RawFile& file) const PDB_NO_EXCEPT
{
	PDB_ASSERT(HasSymbolStream(), "Module symbol stream index is invalid.");

	return ModuleSymbolStream(file, m_info->moduleSymbolStreamIndex, m_info->symbolSize);
}


// ------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------
PDB::ModuleInfoStream::ModuleInfoStream(void) PDB_NO_EXCEPT
	: m_stream()
	, m_modules(nullptr)
	, m_moduleCount(0u)
{
}


// ------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------
PDB::ModuleInfoStream::ModuleInfoStream(ModuleInfoStream&& other) PDB_NO_EXCEPT
	: m_stream(PDB_MOVE(other.m_stream))
	, m_modules(PDB_MOVE(other.m_modules))
	, m_moduleCount(PDB_MOVE(other.m_moduleCount))
{
	other.m_modules = nullptr;
	other.m_moduleCount = 0u;
}


// ------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------
PDB::ModuleInfoStream& PDB::ModuleInfoStream::operator=(ModuleInfoStream&& other) PDB_NO_EXCEPT
{
	if (this != &other)
	{
		PDB_DELETE_ARRAY(m_modules);

		m_stream = PDB_MOVE(other.m_stream);
		m_modules = PDB_MOVE(other.m_modules);
		m_moduleCount = PDB_MOVE(other.m_moduleCount);

		other.m_modules = nullptr;
		other.m_moduleCount = 0u;
	}

	return *this;
}


// ------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------
PDB::ModuleInfoStream::ModuleInfoStream(const DirectMSFStream& directStream, uint32_t size, uint32_t offset) PDB_NO_EXCEPT
	: m_stream(directStream, size, offset)
	, m_modules(nullptr)
	, m_moduleCount(0u)
{
	m_modules = PDB_NEW_ARRAY(Module, EstimateModuleCount(size));

	size_t streamOffset = 0u;
	while (streamOffset < size)
	{
		const DBI::ModuleInfo* moduleInfo = m_stream.GetDataAtOffset<const DBI::ModuleInfo>(streamOffset);
		streamOffset += sizeof(DBI::ModuleInfo);

		const char* name = m_stream.GetDataAtOffset<const char>(streamOffset);
		const size_t nameLength = std::strlen(name);
		streamOffset += nameLength + 1u;

		const char* objectName = m_stream.GetDataAtOffset<const char>(streamOffset);
		const size_t objectNameLength = std::strlen(objectName);
		streamOffset += objectNameLength + 1u;

		// the stream is aligned to 4 bytes
		streamOffset = BitUtil::RoundUpToMultiple(streamOffset, 4ull);

		m_modules[m_moduleCount] = Module(moduleInfo, name, nameLength, objectName, objectNameLength);
		++m_moduleCount;
	}
}


// ------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------
PDB::ModuleInfoStream::~ModuleInfoStream(void) PDB_NO_EXCEPT
{
	PDB_DELETE_ARRAY(m_modules);
}


// ------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------
PDB_NO_DISCARD const PDB::ModuleInfoStream::Module* PDB::ModuleInfoStream::FindLinkerModule(void) const PDB_NO_EXCEPT
{
	const size_t count = m_moduleCount;
	for (size_t i = 0u; i < count; ++i)
	{
		// with both MSVC cl.exe and Clang, the linker symbol is the last one to be stored, so start searching from the end
		const Module& module = m_modules[count - i - 1u];

		// check if this is the linker symbol
		if (std::strcmp(module.GetName().Decay(), LinkerSymbolName) == 0)
		{
			return &module;
		}
	}

	return nullptr;
}
