#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/SubChunkFormat.h"
#include "mc/world/level/chunk/SubChunkStorage.h"

// auto generated forward declare list
// clang-format off
class Block;
class CompoundTag;
class IDataInput;
// clang-format on

namespace SubChunkBlockStorageUtil {
// functions
// NOLINTBEGIN
MCNAPI ::std::unique_ptr<::SubChunkStorage<::Block>> makeDeserialized(
    ::IDataInput&                                                stream,
    ::std::function<::Block const*(uint64)> const&               runtimeLookUp,
    ::std::function<::Block const*(::CompoundTag const&)> const& persistentLookUp,
    ::SubChunkFormat                                             format
);
// NOLINTEND

} // namespace SubChunkBlockStorageUtil
