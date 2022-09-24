// Copyright 2011-2022, Molecular Matters GmbH <office@molecular-matters.com>
// See LICENSE.txt for licensing details (2-clause BSD License: https://opensource.org/licenses/BSD-2-Clause)

#pragma once

#include "PDB_Macros.h"


namespace PDB
{
	// A read-only view into arrays of any type and length.
	template <typename T>
	class PDB_NO_DISCARD ArrayView
	{
	public:
		// Constructs an array view from a C array with explicit length.
		inline constexpr explicit ArrayView(const T* const array, size_t length) PDB_NO_EXCEPT
			: m_data(array)
			, m_length(length)
		{
		}

		PDB_DEFAULT_COPY_CONSTRUCTOR(ArrayView);
		PDB_DEFAULT_MOVE_CONSTRUCTOR(ArrayView);

		// Provides read-only access to the underlying array.
		PDB_NO_DISCARD PDB_NO_ALIAS inline constexpr const T* Decay(void) const PDB_NO_EXCEPT
		{
			return m_data;
		}

		// Returns the length of the view.
		PDB_NO_DISCARD inline constexpr size_t GetLength(void) const PDB_NO_EXCEPT
		{
			return m_length;
		}

		// Returns the i-th element.
		PDB_NO_DISCARD inline const T& operator[](size_t i) const PDB_NO_EXCEPT
		{
			PDB_ASSERT(i < GetLength(), "Index %zu out of bounds [0, %zu).", i, GetLength());
			return m_data[i];
		}


		// ------------------------------------------------------------------------------------------------
		// Range-based for-loop support
		// ------------------------------------------------------------------------------------------------

		PDB_NO_DISCARD PDB_NO_ALIAS inline const T* begin(void) const PDB_NO_EXCEPT
		{
			return m_data;
		}

		PDB_NO_DISCARD PDB_NO_ALIAS inline const T* end(void) const PDB_NO_EXCEPT
		{
			return m_data + m_length;
		}

	private:
		const T* const m_data;
		const size_t m_length;

		PDB_DISABLE_MOVE_ASSIGNMENT(ArrayView);
		PDB_DISABLE_COPY_ASSIGNMENT(ArrayView);
	};
}
