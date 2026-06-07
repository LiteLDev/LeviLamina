#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/memory/MemoryCategory.h"

namespace Memory {
// functions
// NOLINTBEGIN
MCNAPI char const* getCategoryNameStatic(::Memory::MemoryCategory category);
// NOLINTEND

// static variables
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCNAPI ::std::add_lvalue_reference_t<char const* const[]> MemoryCategoryStrings();
#endif
// NOLINTEND

} // namespace Memory
