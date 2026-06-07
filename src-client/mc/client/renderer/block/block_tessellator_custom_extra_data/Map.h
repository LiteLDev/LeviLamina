#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
namespace BlockTessellatorCustomExtraData { class CauldronData; }
namespace BlockTessellatorCustomExtraData { class FlowerPotData; }
// clang-format on

namespace BlockTessellatorCustomExtraData {

class Map {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::BlockPos, ::BlockTessellatorCustomExtraData::CauldronData>>
        mExtraCauldronData;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::BlockPos, ::BlockTessellatorCustomExtraData::FlowerPotData>>
        mExtraFlowerPotData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~Map();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace BlockTessellatorCustomExtraData
