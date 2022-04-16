// Copyright 2011-2022, Molecular Matters GmbH <office@molecular-matters.com>
// See LICENSE.txt for licensing details (2-clause BSD License: https://opensource.org/licenses/BSD-2-Clause)

#pragma once

#include "Foundation/PDB_Macros.h"
#include "Foundation/PDB_ArrayView.h"
#include "PDB_CoalescedMSFStream.h"
#include "PDB_ModuleSymbolStream.h"


namespace PDB
{
	class PDB_NO_DISCARD DirectMSFStream;


	class PDB_NO_DISCARD ModuleInfoStream
	{
	public:
		class PDB_NO_DISCARD Module
		{
		public:
			Module(void) PDB_NO_EXCEPT;
			explicit Module(const DBI::ModuleInfo* info, const char* name, size_t nameLength, const char* objectName, size_t objectNameLength) PDB_NO_EXCEPT;

			PDB_DEFAULT_MOVE(Module);

			// Returns whether the module has a symbol stream.
			PDB_NO_DISCARD bool HasSymbolStream(void) const PDB_NO_EXCEPT;

			// Creates a symbol stream for the module.
			PDB_NO_DISCARD ModuleSymbolStream CreateSymbolStream(const RawFile& file) const PDB_NO_EXCEPT;

			// Returns the name of the module.
			PDB_NO_DISCARD inline ArrayView<char> GetName(void) const PDB_NO_EXCEPT
			{
				return ArrayView<char>(m_name, m_nameLength);
			}

			// Returns the name of the object file of the module.
			PDB_NO_DISCARD inline ArrayView<char> GetObjectName(void) const PDB_NO_EXCEPT
			{
				return ArrayView<char>(m_objectName, m_objectNameLength);
			}

		private:
			// the module info is stored in variable-length arrays inside the stream, so rather than store an array directly,
			// we need to store pointers to the individual data items inside the stream.
			const DBI::ModuleInfo* m_info;

			// the module name, e.g. the path to an object file or import library such as "Import:kernel32.dll"
			const char* m_name;
			size_t m_nameLength;
			
			// the name of the object file. either the same as the module name, or the path to the archive that contained the module
			const char* m_objectName;
			size_t m_objectNameLength;

			PDB_DISABLE_COPY(Module);
		};

		ModuleInfoStream(void) PDB_NO_EXCEPT;
		ModuleInfoStream(ModuleInfoStream&& other) PDB_NO_EXCEPT;
		ModuleInfoStream& operator=(ModuleInfoStream&& other) PDB_NO_EXCEPT;

		explicit ModuleInfoStream(const DirectMSFStream& directStream, uint32_t size, uint32_t offset) PDB_NO_EXCEPT;

		~ModuleInfoStream(void) PDB_NO_EXCEPT;

		// Tries to find the linker module corresponding to the linker, i.e. the module named "* Linker *".
		PDB_NO_DISCARD const Module* FindLinkerModule(void) const PDB_NO_EXCEPT;

		// Returns the module with the given index.
		PDB_NO_DISCARD inline const Module& GetModule(uint32_t index) const PDB_NO_EXCEPT
		{
			return m_modules[index];
		}

		// Returns a view of all modules in the info stream.
		PDB_NO_DISCARD inline ArrayView<Module> GetModules(void) const PDB_NO_EXCEPT
		{
			return ArrayView<Module>(m_modules, m_moduleCount);
		}

	private:
		CoalescedMSFStream m_stream;
		Module* m_modules;
		size_t m_moduleCount;

		PDB_DISABLE_COPY(ModuleInfoStream);
	};
}
