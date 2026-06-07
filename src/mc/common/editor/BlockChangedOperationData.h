#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class CompoundTag;
// clang-format on

namespace Editor::Transactions {

struct BlockChangedOperationData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkc782e0;
    ::ll::UntypedStorage<4, 4>  mUnkff7df9;
    ::ll::UntypedStorage<8, 8>  mUnk84f84a;
    ::ll::UntypedStorage<4, 4>  mUnkbd361a;
    ::ll::UntypedStorage<4, 4>  mUnk8ddbfd;
    ::ll::UntypedStorage<8, 8>  mUnk3ecc2a;
    ::ll::UntypedStorage<4, 12> mUnk188650;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockChangedOperationData& operator=(BlockChangedOperationData const&);
    BlockChangedOperationData(BlockChangedOperationData const&);
    BlockChangedOperationData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockChangedOperationData(
        uint                             previousBlockRuntimeId,
        uint                             previousExtraBlockRuntimeId,
        ::std::unique_ptr<::CompoundTag> previousBlockData,
        uint                             newBlockRuntimeId,
        uint                             newExtraBlockRuntimeId,
        ::std::unique_ptr<::CompoundTag> newBlockData,
        ::BlockPos const&                pos
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        uint                             previousBlockRuntimeId,
        uint                             previousExtraBlockRuntimeId,
        ::std::unique_ptr<::CompoundTag> previousBlockData,
        uint                             newBlockRuntimeId,
        uint                             newExtraBlockRuntimeId,
        ::std::unique_ptr<::CompoundTag> newBlockData,
        ::BlockPos const&                pos
    );
    // NOLINTEND
};

} // namespace Editor::Transactions
