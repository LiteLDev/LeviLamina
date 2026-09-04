#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

class HeightDifferenceFilterFeature : public ::IFeature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakRef<::IFeature>> mFeatureToPlace;
    ::ll::TypedStorage<4, 8, ::std::optional<uint>>  mMinPositiveHeightDiff;
    ::ll::TypedStorage<4, 8, ::std::optional<uint>>  mMaxPositiveHeightDiff;
    ::ll::TypedStorage<4, 8, ::std::optional<uint>>  mMinNegativeHeightDiff;
    ::ll::TypedStorage<4, 8, ::std::optional<uint>>  mMaxNegativeHeightDiff;
    ::ll::TypedStorage<4, 4, uint>                   mSearchRadius;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HeightDifferenceFilterFeature() /*override*/ = default;

    virtual ::std::optional<::BlockPos> place(::IFeature::PlacementContext const& context) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::optional<::BlockPos> $place(::IFeature::PlacementContext const& context) const;


    // NOLINTEND
};
