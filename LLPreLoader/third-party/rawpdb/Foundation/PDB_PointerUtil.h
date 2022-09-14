// Copyright 2011-2022, Molecular Matters GmbH <office@molecular-matters.com>
// See LICENSE.txt for licensing details (2-clause BSD License: https://opensource.org/licenses/BSD-2-Clause)

#pragma once

#include "PDB_Macros.h"
#include "PDB_DisableWarningsPush.h"
#include <type_traits>
#include "PDB_DisableWarningsPop.h"


namespace PDB
{
	namespace Pointer
	{
		// Offsets any pointer by a given number of bytes.
		template <typename T, typename U, typename V>
		PDB_NO_DISCARD inline T Offset(U* anyPointer, V howManyBytes) PDB_NO_EXCEPT
		{
			static_assert(std::is_pointer<T>::value == true, "Type T must be a pointer type.");
			static_assert(std::is_const<typename std::remove_pointer<T>::type>::value == std::is_const<U>::value, "Wrong constness.");

			union
			{
				T as_T;
				U* as_U_ptr;
				char* as_char_ptr;
			};

			as_U_ptr = anyPointer;
			as_char_ptr += howManyBytes;

			return as_T;
		}
	}
}
