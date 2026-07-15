#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
// clang-format on

namespace Editor {
// functions
// NOLINTBEGIN
MCNAPI ::std::unordered_set<uint64> _getFilteredBlockSet();

#ifdef LL_PLAT_C
MCNAPI ::Bedrock::Result<::CompoundTag> compoundTagFromString(::std::string_view data);
#endif

MCNAPI ::Bedrock::Result<::std::string> compoundTagToString(::CompoundTag const& tag);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::std::string_view const& EDITOR_PACK_CAPABILITY();
// NOLINTEND

} // namespace Editor
