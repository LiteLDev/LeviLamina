#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class DBChunkStorageKey;
// clang-format on

namespace ChunkKeyUtil {
// functions
// NOLINTBEGIN
MCNAPI ::std::optional<::DBChunkStorageKey> tryGetChunkKeyFromString(::std::string_view key);
// NOLINTEND

} // namespace ChunkKeyUtil
