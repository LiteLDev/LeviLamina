#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockActor;
class BlockPos;
// clang-format on

namespace Editor::Transactions {

struct BlockChangeIntentData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk7d81fc;
    ::ll::UntypedStorage<4, 4>  mUnkfd388c;
    ::ll::UntypedStorage<8, 8>  mUnka51523;
    ::ll::UntypedStorage<4, 12> mUnka242ca;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockChangeIntentData& operator=(BlockChangeIntentData const&);
    BlockChangeIntentData(BlockChangeIntentData const&);
    BlockChangeIntentData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockChangeIntentData(
        uint                blockRuntimeId,
        uint                extraBlockRuntimeId,
        ::BlockActor const* blockActor,
        ::BlockPos const&   pos
    );

    MCAPI ~BlockChangeIntentData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(uint blockRuntimeId, uint extraBlockRuntimeId, ::BlockActor const* blockActor, ::BlockPos const& pos);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Editor::Transactions
