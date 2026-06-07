#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Random.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class LegacyStructureSettings;
class StructurePoolBlockRule;
class StructurePoolBlockTagRule;
// clang-format on

class BlockTypePlacementProcessor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                                                mChance;
    ::ll::TypedStorage<8, 2544, ::Random>                                                          mRandom;
    ::ll::TypedStorage<1, 1, bool>                                                                 mHasGravity;
    ::ll::TypedStorage<8, 8, ::std::vector<::std::unique_ptr<::StructurePoolBlockRule>> const*>    mBlockRules;
    ::ll::TypedStorage<8, 8, ::std::vector<::std::unique_ptr<::StructurePoolBlockTagRule>> const*> mBlockTagRules;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockTypePlacementProcessor();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit BlockTypePlacementProcessor(::LegacyStructureSettings const& settings);

    MCAPI ::Block const*
    applyBlockRules(::BlockSource& region, ::BlockPos& pos, ::Block const* blockToPlace, ::BlockPos const& refPos);

    MCAPI ::BlockPos& applyGravity(::BlockSource& region, int yOffset, ::BlockPos& pos) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::LegacyStructureSettings const& settings);
    // NOLINTEND
};
