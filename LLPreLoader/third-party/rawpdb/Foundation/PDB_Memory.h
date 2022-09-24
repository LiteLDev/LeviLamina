// Copyright 2011-2022, Molecular Matters GmbH <office@molecular-matters.com>
// See LICENSE.txt for licensing details (2-clause BSD License: https://opensource.org/licenses/BSD-2-Clause)

#pragma once


#define PDB_NEW(_type)							new _type
#define PDB_NEW_ARRAY(_type, _length)			new _type[_length]

#define PDB_DELETE(_ptr)						delete _ptr
#define PDB_DELETE_ARRAY(_ptr)					delete[] _ptr
