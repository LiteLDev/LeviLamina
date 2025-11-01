#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/IntRange.h"
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockDescriptor;
class BlockPos;
class IBlockWorldGenAPI;
// clang-format on

class SculkPatchFeature : public ::IFeature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> mCanPlaceSculkPatchOn;
    ::ll::TypedStorage<8, 8, ::Block const*> mBlock;
    ::ll::TypedStorage<4, 4, float> mBlockPlacementChance;
    ::ll::TypedStorage<4, 4, int> mCursorCount;
    ::ll::TypedStorage<4, 4, int> mChargeAmount;
    ::ll::TypedStorage<4, 4, int> mSpreadAttempts;
    ::ll::TypedStorage<4, 4, int> mGrowthRounds;
    ::ll::TypedStorage<4, 4, int> mSpreadRounds;
    ::ll::TypedStorage<4, 8, ::IntRange> mExtraGrowthChance;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SculkPatchFeature() /*override*/ = default;

    // vIndex: 1
    virtual ::std::optional<::BlockPos> place(::IFeature::PlacementContext const& context) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _canSpreadFrom(::IBlockWorldGenAPI& target, ::BlockPos const& originPos) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::optional<::BlockPos> $place(::IFeature::PlacementContext const& context) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
