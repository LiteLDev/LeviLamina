// Copyright 2011-2022, Molecular Matters GmbH <office@molecular-matters.com>
// See LICENSE.txt for licensing details (2-clause BSD License: https://opensource.org/licenses/BSD-2-Clause)

#pragma once

#include "Foundation/PDB_Macros.h"
#include "Foundation/PDB_BitOperators.h"
#include "Foundation/PDB_DisableWarningsPush.h"
#include <cstdint>
#include "Foundation/PDB_DisableWarningsPop.h"


namespace PDB
{
	namespace DBI
	{
		// https://llvm.org/docs/PDB/DbiStream.html#stream-header
		// https://github.com/microsoft/microsoft-pdb/blob/master/PDB/dbi/dbi.h#L124
		struct StreamHeader
		{
			static const uint32_t Signature;

			enum class PDB_NO_DISCARD Version : uint32_t
			{
				VC41 = 930803u,
				V50 = 19960307u,
				V60 = 19970606u,
				V70 = 19990903u,
				V110 = 20091201u
			};

			uint32_t signature;
			Version version;
			uint32_t age;
			uint16_t globalStreamIndex;						// index of the global symbol stream
			uint16_t toolchain;
			uint16_t publicStreamIndex;						// index of the public symbol stream
			uint16_t pdbDllVersion;
			uint16_t symbolRecordStreamIndex;				// index of the symbol record stream
			uint16_t pdbDllRbld;
			uint32_t moduleInfoSize;
			uint32_t sectionContributionSize;
			uint32_t sectionMapSize;
			uint32_t sourceInfoSize;
			uint32_t typeServerMapSize;
			uint32_t mfcTypeServerIndex;
			uint32_t optionalDebugHeaderSize;
			uint32_t ecSize;
			uint16_t flags;
			uint16_t machine;
			uint32_t padding;
		};

		// https://llvm.org/docs/PDB/DbiStream.html#optional-debug-header-stream
		struct DebugHeader
		{
			static const uint16_t InvalidStreamIndex;

			uint16_t fpoDataStreamIndex;						// IMAGE_DEBUG_TYPE_FPO
			uint16_t exceptionDataStreamIndex;					// IMAGE_DEBUG_TYPE_EXCEPTION
			uint16_t fixupDataStreamIndex;						// IMAGE_DEBUG_TYPE_FIXUP
			uint16_t omapToSrcDataStreamIndex;					// IMAGE_DEBUG_TYPE_OMAP_TO_SRC
			uint16_t omapFromSrcDataStreamIndex;				// IMAGE_DEBUG_TYPE_OMAP_FROM_SRC
			uint16_t sectionHeaderStreamIndex;					// a dump of all section headers (IMAGE_SECTION_HEADER) from the original executable
			uint16_t tokenDataStreamIndex;
			uint16_t xdataStreamIndex;
			uint16_t pdataStreamIndex;
			uint16_t newFpoDataStreamIndex;
			uint16_t originalSectionHeaderDataStreamIndex;
		};

		// https://llvm.org/docs/PDB/DbiStream.html#section-contribution-substream
		struct SectionContribution
		{
			enum class PDB_NO_DISCARD Version : uint32_t
			{
				Ver60 = 0xeffe0000u + 19970605u,
				V2 = 0xeffe0000u + 20140516u
			};

			uint16_t section;
			uint16_t padding;
			uint32_t offset;
			uint32_t size;
			uint32_t characteristics;
			uint16_t moduleIndex;
			uint16_t padding2;
			uint32_t dataCrc;
			uint32_t relocationCrc;
		};

		// https://llvm.org/docs/PDB/DbiStream.html#module-info-substream
		struct ModuleInfo
		{
			uint32_t unused;
			SectionContribution sectionContribution;
			uint16_t flags;
			uint16_t moduleSymbolStreamIndex;
			uint32_t symbolSize;
			uint32_t c11Size;
			uint32_t c13Size;
			uint16_t sourceFileCount;
			uint16_t padding;
			uint32_t unused2;
			uint32_t sourceFileNameIndex;
			uint32_t pdbFilePathNameIndex;
		};
	}


	namespace CodeView
	{
		namespace DBI
		{
			// code view type records that can appear in a DBI stream.
			// this list is not exhaustive, but only contains what we need so far.
			// https://llvm.org/docs/PDB/CodeViewSymbols.html
			// https://llvm.org/docs/PDB/TpiStream.html#tpi-vs-ipi-stream
			// https://github.com/microsoft/microsoft-pdb/blob/master/include/cvinfo.h#L2735
			enum class PDB_NO_DISCARD SymbolRecordKind : uint16_t
			{
				S_END =				0x0006u,		// block, procedure, "with" or thunk end
				S_OBJNAME =			0x1101u,		// full path to the original compiled .obj. can point to remote locations and temporary files, not necessarily the file that was linked into the executable
				S_THUNK32 =			0x1102u,		// thunk start
				S_BLOCK32 =			0x1103u,		// block start
				S_LABEL32 =			0x1105u,		// code label
				S_LDATA32 =			0x110Cu,		// (static) local data
				S_GDATA32 =			0x110Du,		// global data
				S_PUB32 =			0x110Eu,		// public symbol
				S_LPROC32 =			0x110Fu,		// local procedure start
				S_GPROC32 =			0x1110u,		// global procedure start
				S_LTHREAD32 =		0x1112u,		// (static) thread-local data
				S_GTHREAD32 =		0x1113u,		// global thread-local data
				S_PROCREF =			0x1125u,		// reference to function in any compiland
				S_LPROCREF =		0x1127u,		// local reference to function in any compiland
				S_TRAMPOLINE =		0x112Cu,		// incremental linking trampoline
				S_SEPCODE =			0x1132u,		// separated code (from the compiler)
				S_SECTION =			0x1136u,		// a COFF section in an executable
				S_COFFGROUP =		0x1137u,		// original COFF group before it was merged into executable sections by the linker, e.g. .CRT$XCU, .rdata, .bss, .lpp_prepatch_hooks
				S_COMPILE3 =		0x113Cu,		// replacement for S_COMPILE2, more info
				S_ENVBLOCK =		0x113Du,		// environment block split off from S_COMPILE2
				S_LPROC32_ID =		0x1146u,		// S_PROC symbol that references ID instead of type
				S_GPROC32_ID =		0x1147u,		// S_PROC symbol that references ID instead of type
				S_BUILDINFO =		0x114Cu,		// build info/environment details of a compiland/translation unit
				S_INLINESITE =		0x114Du,		// inlined function callsite
				S_INLINESITE_END =	0x114Eu,
				S_PROC_ID_END =		0x114Fu,
				S_LPROC32_DPC =		0x1155u,
				S_LPROC32_DPC_ID =	0x1156u,
				S_INLINESITE2 =		0x115Du			// extended inline site information
			};

			// https://docs.microsoft.com/en-us/visualstudio/debugger/debug-interface-access/thunk-ordinal
			enum class PDB_NO_DISCARD ThunkOrdinal : uint8_t
			{
				NoType,
				ThisAdjustor,
				VirtualCall,
				PCode,
				DelayLoad,
				TrampolineIncremental,
				TrampolineBranchIsland
			};

			enum class PDB_NO_DISCARD TrampolineType : uint16_t
			{
				Incremental,
				BranchIsland
			};

			// https://github.com/microsoft/microsoft-pdb/blob/master/include/cvinfo.h#L3038
			enum class PDB_NO_DISCARD ProcedureFlags : uint8_t
			{
				None = 0u,
				NoFPO = 1u << 0u,
				InterruptReturn = 1u << 1u,
				FarReturn = 1u << 2u,
				NoReturn = 1u << 3u,
				Unreachable = 1u << 4u,
				CustomCallingConvention = 1u << 5u,
				NoInline = 1u << 6u,
				OptimizedDebugInformation = 1u << 7u
			};
			PDB_DEFINE_BIT_OPERATORS(ProcedureFlags);


			// https://github.com/microsoft/microsoft-pdb/blob/master/include/cvinfo.h#L3676
			enum class PDB_NO_DISCARD PublicSymbolFlags : uint32_t
			{
				None = 0u,
				Code = 1u << 0u,					// set if public symbol refers to a code address
				Function = 1u << 1u,				// set if public symbol is a function
				ManagedCode = 1u << 2u,				// set if managed code (native or IL)
				ManagedILCode = 1u << 3u			// set if managed IL code
			};
			PDB_DEFINE_BIT_OPERATORS(PublicSymbolFlags);


			// https://github.com/microsoft/microsoft-pdb/blob/master/include/cvinfo.h#L3341
			enum class PDB_NO_DISCARD CompileSymbolFlags : uint32_t
			{
				None = 0u,
				SourceLanguageMask = 0xFFu,
				EC = 1u << 8u,
				NoDebugInfo = 1u << 9u,
				LTCG = 1u << 10u,
				NoDataAlign = 1u << 11u,
				ManagedCodeOrDataPresent = 1u << 12u,
				SecurityChecks = 1u << 13u,
				HotPatch = 1u << 14u,
				CVTCIL = 1u << 15u,
				MSILModule = 1u << 16u,
				SDL = 1u << 17u,
				PGO = 1u << 18u,
				Exp = 1u << 19u
			};
			PDB_DEFINE_BIT_OPERATORS(CompileSymbolFlags);


			// https://github.com/microsoft/microsoft-pdb/blob/master/include/cvconst.h#L324
			enum class PDB_NO_DISCARD CPUType : uint16_t
			{
				Intel8080 = 0x0,
				Intel8086 = 0x1,
				Intel80286 = 0x2,
				Intel80386 = 0x3,
				Intel80486 = 0x4,
				Pentium = 0x5,
				PentiumII = 0x6,
				PentiumPro = PentiumII,
				PentiumIII = 0x7,
				MIPS = 0x10,
				MIPSR4000 = MIPS,
				MIPS16 = 0x11,
				MIPS32 = 0x12,
				MIPS64 = 0x13,
				MIPSI = 0x14,
				MIPSII = 0x15,
				MIPSIII = 0x16,
				MIPSIV = 0x17,
				MIPSV = 0x18,
				M68000 = 0x20,
				M68010 = 0x21,
				M68020 = 0x22,
				M68030 = 0x23,
				M68040 = 0x24,
				Alpha = 0x30,
				Alpha21164 = 0x31,
				Alpha21164A = 0x32,
				Alpha21264 = 0x33,
				Alpha21364 = 0x34,
				PPC601 = 0x40,
				PPC603 = 0x41,
				PPC604 = 0x42,
				PPC620 = 0x43,
				PPCFP = 0x44,
				PPCBE = 0x45,
				SH3 = 0x50,
				SH3E = 0x51,
				SH3DSP = 0x52,
				SH4 = 0x53,
				SHMedia = 0x54,
				ARM3 = 0x60,
				ARM4 = 0x61,
				ARM4T = 0x62,
				ARM5 = 0x63,
				ARM5T = 0x64,
				ARM6 = 0x65,
				ARM_XMAC = 0x66,
				ARM_WMMX = 0x67,
				ARM7 = 0x68,
				Omni = 0x70,
				IA64 = 0x80,
				IA64_1 = 0x80,
				IA64_2 = 0x81,
				CEE = 0x90,
				AM33 = 0xA0,
				M32R = 0xB0,
				TriCore = 0xC0,
				X64 = 0xD0,
				AMD64 = X64,
				EBC = 0xE0,
				Thumb = 0xF0,
				ARMNT = 0xF4,
				ARM64 = 0xF6,
				HybridX86ARM64 = 0xF7,
				ARM64EC = 0xF8,
				ARM64X = 0xF9,
				D3D11_Shader = 0x100
			};

			// https://llvm.org/docs/PDB/CodeViewTypes.html#leaf-types
			struct RecordHeader
			{
				uint16_t size;					// record length, not including this 2-byte field
				SymbolRecordKind kind;			// record kind
			};

			// all CodeView records are stored as a header, followed by variable-length data.
			// internal Record structs such as S_PUB32, S_GDATA32, etc. correspond to the data layout of a CodeView record of that kind.
			struct Record
			{
				RecordHeader header;
				union Data
				{
#pragma pack(push, 1)
					// https://github.com/microsoft/microsoft-pdb/blob/master/include/cvinfo.h#L3696
					struct
					{
						PublicSymbolFlags flags;
						uint32_t offset;
						uint16_t section;
						PDB_FLEXIBLE_ARRAY_MEMBER(char, name);
					} S_PUB32;

					struct
					{
						uint32_t typeIndex;
						uint32_t offset;
						uint16_t section;
						PDB_FLEXIBLE_ARRAY_MEMBER(char, name);
					} S_GDATA32, S_GTHREAD32, S_LDATA32, S_LTHREAD32;

					struct
					{
						uint32_t signature;
						PDB_FLEXIBLE_ARRAY_MEMBER(char, name);
					} S_OBJNAME;

					struct
					{
						TrampolineType type;
						uint16_t size;
						uint32_t thunkOffset;
						uint32_t targetOffset;
						uint16_t thunkSection;
						uint16_t targetSection;
					} S_TRAMPOLINE;

					struct
					{
						uint16_t sectionNumber;
						uint8_t alignment;
						uint32_t rva;
						uint32_t length;
						uint32_t characteristics;
						PDB_FLEXIBLE_ARRAY_MEMBER(char, name);
					} S_SECTION;

					struct
					{
						uint32_t size;
						uint32_t characteristics;
						uint32_t offset;
						uint16_t section;
						PDB_FLEXIBLE_ARRAY_MEMBER(char, name);
					} S_COFFGROUP;

					struct
					{
						uint32_t parent;
						uint32_t end;
						uint32_t next;
						uint32_t offset;
						uint16_t section;
						uint16_t length;
						ThunkOrdinal thunk;
						PDB_FLEXIBLE_ARRAY_MEMBER(char, name);
					} S_THUNK32;

					struct
					{
						uint32_t parent;
						uint32_t end;
						uint32_t next;
						uint32_t codeSize;
						uint32_t debugStart;
						uint32_t debugEnd;
						uint32_t typeIndex;
						uint32_t offset;
						uint16_t section;
						ProcedureFlags flags;
						PDB_FLEXIBLE_ARRAY_MEMBER(char, name);
					} S_LPROC32, S_GPROC32, S_LPROC32_ID, S_GPROC32_ID, S_LPROC32_DPC, S_LPROC32_DPC_ID;

					struct
					{
						uint32_t parent;
						uint32_t end;
						uint32_t codeSize;
						uint32_t offset;
						uint16_t section;
						PDB_FLEXIBLE_ARRAY_MEMBER(char, name);
					} S_BLOCK32;

					struct
					{
						uint32_t offset;
						uint16_t section;
						ProcedureFlags flags;
						PDB_FLEXIBLE_ARRAY_MEMBER(char, name);
					} S_LABEL32;

					struct
					{
						uint32_t typeIndex;	// refers to a type index in the IPI stream
					} S_BUILDINFO;

					struct
					{
						CompileSymbolFlags flags;
						CPUType machine;
						uint16_t versionFrontendMajor;
						uint16_t versionFrontendMinor;
						uint16_t versionFrontendBuild;
						uint16_t versionFrontendQFE;
						uint16_t versionBackendMajor;
						uint16_t versionBackendMinor;
						uint16_t versionBackendBuild;
						uint16_t versionBackendQFE;
						PDB_FLEXIBLE_ARRAY_MEMBER(char, version);
					} S_COMPILE3;

					// https://github.com/microsoft/microsoft-pdb/blob/master/include/cvinfo.h#L3372
					struct
					{
						uint8_t flags;
						PDB_FLEXIBLE_ARRAY_MEMBER(char, strings);
					} S_ENVBLOCK;
#pragma pack(pop)
				} data;
			};
		}
	}
}
