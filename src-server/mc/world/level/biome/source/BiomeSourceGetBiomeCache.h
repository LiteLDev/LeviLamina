#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/threading/SpinLockImpl.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BlockPos;
// clang-format on

struct BiomeSourceGetBiomeCache {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::BlockPos, ::Biome const*>> mMap;
    ::ll::TypedStorage<8, 32, ::SpinLockImpl>                                   mLock;
    // NOLINTEND
};
