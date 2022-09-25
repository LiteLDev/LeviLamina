// Copyright 2011-2022, Molecular Matters GmbH <office@molecular-matters.com>
// See LICENSE.txt for licensing details (2-clause BSD License: https://opensource.org/licenses/BSD-2-Clause)

#include "PDB_PCH.h"
#include "PDB_Types.h"


// https://github.com/Microsoft/microsoft-pdb/blob/master/PDB/msf/msf.cpp#L962
const char PDB::SuperBlock::MAGIC[30u] = "Microsoft C/C++ MSF 7.00\r\n\x1a\x44\x53";

const uint32_t PDB::HashTableHeader::Signature = 0xffffffffu;
const uint32_t PDB::HashTableHeader::Version = 0xeffe0000u + 19990810u;
