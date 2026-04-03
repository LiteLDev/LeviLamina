#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/threading/SpinLockImpl.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Biome;
// clang-format on

struct BiomeSourceGetBiomeCache {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::BlockPos, ::Biome const*>> mMap;
    ::ll::TypedStorage<8, 24, ::SpinLockImpl>                                   mLock;
    // NOLINTEND
};
