#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockType.h"

struct OverworldBlendRules {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::BlockType const*> const> mBendableBlocks;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::BlockType const*> const> mNoShiftUpBlocks;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::BlockType const*> const> mNoShiftDownBlocks;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::BlockType const*> const> mFloatingOnWaterBlocks;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::BlockType const*> const> mRemoveFloatingBlocksList;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::BlockType const*> const> mLavaBlocks;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::BlockType const*> const> mNotUnderwaterBlocks;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::BlockType const*> const> mWaterBlocks;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~OverworldBlendRules();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
