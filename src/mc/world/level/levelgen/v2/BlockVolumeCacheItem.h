#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockVolume.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

namespace br::worldgen {

struct BlockVolumeCacheItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::std::vector<::Block const*>>> mBuffer;
    ::ll::TypedStorage<8, 40, ::BlockVolume>                                   mVolume;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~BlockVolumeCacheItem();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace br::worldgen
