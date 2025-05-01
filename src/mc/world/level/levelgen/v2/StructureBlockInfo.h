#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Block;
class CompoundTag;
// clang-format on

namespace br::worldgen {

struct StructureBlockInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos>                       mPos;
    ::ll::TypedStorage<8, 8, ::Block const*>                    mBlock;
    ::ll::TypedStorage<8, 8, ::Block const*>                    mExtraBlock;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::CompoundTag>> mTag;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~StructureBlockInfo();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::br::worldgen::StructureBlockInfo
    from(::BlockPos pos, ::Block const& state, ::Block const* extraBlockState);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace br::worldgen
