#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/util/IntRange.h"
#include "mc/world/level/block/BlockDescriptor.h"
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

class VegetationPatchFeature : public ::IFeature {
public:
    // VegetationPatchFeature inner types define
    enum class Surface : int {
        Ceiling = 0,
        Floor   = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> mReplaceableBlocks;
    ::ll::TypedStorage<8, 176, ::BlockDescriptor>               mGroundBlock;
    ::ll::TypedStorage<8, 24, ::WeakRef<::IFeature>>            mVegetationFeature;
    ::ll::TypedStorage<4, 4, ::VegetationPatchFeature::Surface> mSurface;
    ::ll::TypedStorage<4, 8, ::IntRange>                        mDepth;
    ::ll::TypedStorage<4, 4, float>                             mExtraDeepBlockChance;
    ::ll::TypedStorage<4, 4, int>                               mVerticalRange;
    ::ll::TypedStorage<4, 4, float>                             mVegetationChance;
    ::ll::TypedStorage<4, 8, ::IntRange>                        mHorizontalRadius;
    ::ll::TypedStorage<4, 4, float>                             mExtraEdgeColumnChance;
    ::ll::TypedStorage<1, 1, bool>                              mWaterlogged;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VegetationPatchFeature() /*override*/ = default;

    virtual ::std::optional<::BlockPos> place(::IFeature::PlacementContext const& context) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::optional<::BlockPos> $place(::IFeature::PlacementContext const& context) const;


    // NOLINTEND
};
