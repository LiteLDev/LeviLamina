#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class CompoundTag;
// clang-format on

class LegacyStructureBlockInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnkdfefd1;
    ::ll::UntypedStorage<8, 8>  mUnkcf2cd6;
    ::ll::UntypedStorage<8, 8>  mUnk76801c;
    ::ll::UntypedStorage<8, 8>  mUnk453e8e;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyStructureBlockInfo& operator=(LegacyStructureBlockInfo const&);
    LegacyStructureBlockInfo(LegacyStructureBlockInfo const&);
    LegacyStructureBlockInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LegacyStructureBlockInfo(
        ::BlockPos const&                pos,
        ::std::unique_ptr<::CompoundTag> tag,
        ::Block const&                   block,
        ::Block const&                   extraBlock
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::BlockPos const& pos, ::std::unique_ptr<::CompoundTag> tag, ::Block const& block, ::Block const& extraBlock);
    // NOLINTEND
};
