#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/small_vector.h"
#include "mc/world/level/block/BlockDescriptor.h"
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Random;
// clang-format on

class MultifaceFeature : public ::IFeature {
public:
    // MultifaceFeature inner types define
    using ShuffledFaces = ::Bedrock::small_vector<uchar, 6>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 184, ::BlockDescriptor>               mBlock;
    ::ll::TypedStorage<4, 4, int>                               mSearchRange;
    ::ll::TypedStorage<1, 1, bool>                              mCanPlaceOnFloor;
    ::ll::TypedStorage<1, 1, bool>                              mCanPlaceOnCeiling;
    ::ll::TypedStorage<1, 1, bool>                              mCanPlaceOnWall;
    ::ll::TypedStorage<4, 4, float>                             mChanceOfSpreading;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> mCanBePlacedOn;
    ::ll::TypedStorage<8, 24, ::std::vector<uchar>>             mValidDirections;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::optional<::BlockPos> place(::IFeature::PlacementContext const& context) const /*override*/;

    // vIndex: 0
    virtual ~MultifaceFeature() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::optional<::BlockPos> _placeBlockIfPossible(
        ::BlockSource&           region,
        ::BlockPos const&        pos,
        ::Random&                random,
        ::gsl::span<uchar const> placementDirections
    ) const;
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
