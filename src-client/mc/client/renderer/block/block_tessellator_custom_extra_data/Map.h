#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
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
    // prevent constructor by default
    Map& operator=(Map const&);
    Map(Map const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Map();

    MCAPI ::BlockTessellatorCustomExtraData::Map& operator=(::BlockTessellatorCustomExtraData::Map&&);

    MCAPI ~Map();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace BlockTessellatorCustomExtraData
