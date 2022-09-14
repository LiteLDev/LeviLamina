// Copyright 2011-2022, Molecular Matters GmbH <office@molecular-matters.com>
// See LICENSE.txt for licensing details (2-clause BSD License: https://opensource.org/licenses/BSD-2-Clause)

#pragma once

#include "PDB_Macros.h"
#include "PDB_DisableWarningsPush.h"
#include <type_traits>
#include "PDB_DisableWarningsPop.h"


#define PDB_DEFINE_BIT_OPERATORS(_type)															\
	PDB_NO_DISCARD inline constexpr _type operator|(_type lhs, _type rhs) PDB_NO_EXCEPT			\
	{																							\
		return static_cast<_type>(PDB_AS_UNDERLYING(lhs) | PDB_AS_UNDERLYING(rhs));				\
	}																							\
																								\
	PDB_NO_DISCARD inline constexpr _type operator&(_type lhs, _type rhs) PDB_NO_EXCEPT			\
	{																							\
		return static_cast<_type>(PDB_AS_UNDERLYING(lhs) & PDB_AS_UNDERLYING(rhs));				\
	}																							\
																								\
	PDB_NO_DISCARD inline constexpr _type operator~(_type value) PDB_NO_EXCEPT					\
	{																							\
		return static_cast<_type>(~PDB_AS_UNDERLYING(value));									\
	}
