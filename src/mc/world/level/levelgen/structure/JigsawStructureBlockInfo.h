#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class CompoundTag;
// clang-format on

class JigsawStructureBlockInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk64a37c;
    ::ll::UntypedStorage<8, 8>  mUnk6e6470;
    ::ll::UntypedStorage<8, 8>  mUnk4093cd;
    // NOLINTEND

public:
    // prevent constructor by default
    JigsawStructureBlockInfo& operator=(JigsawStructureBlockInfo const&);
    JigsawStructureBlockInfo(JigsawStructureBlockInfo const&);
    JigsawStructureBlockInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI JigsawStructureBlockInfo(::BlockPos const& pos, ::std::unique_ptr<::CompoundTag> tag, ::Block const& block);

    MCAPI ::CompoundTag* getNonEmptyTag();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockPos const& pos, ::std::unique_ptr<::CompoundTag> tag, ::Block const& block);
    // NOLINTEND
};
