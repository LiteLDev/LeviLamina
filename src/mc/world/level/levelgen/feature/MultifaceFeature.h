#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/small_vector.h"
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Random;
// clang-format on

class MultifaceFeature : public ::IFeature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 184> mUnk78b3a5;
    ::ll::UntypedStorage<4, 4>   mUnk15d416;
    ::ll::UntypedStorage<1, 1>   mUnk586697;
    ::ll::UntypedStorage<1, 1>   mUnk9bd694;
    ::ll::UntypedStorage<1, 1>   mUnk31ba0b;
    ::ll::UntypedStorage<4, 4>   mUnk953900;
    ::ll::UntypedStorage<8, 24>  mUnkda9de5;
    ::ll::UntypedStorage<8, 24>  mUnk696bc6;
    // NOLINTEND

public:
    // prevent constructor by default
    MultifaceFeature& operator=(MultifaceFeature const&);
    MultifaceFeature(MultifaceFeature const&);
    MultifaceFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::optional<::BlockPos> place(::IFeature::PlacementContext const& context) const /*override*/;

    virtual ~MultifaceFeature() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::optional<::BlockPos> _placeBlockIfPossible(
        ::BlockSource&           region,
        ::BlockPos const&        pos,
        ::Random&                random,
        ::gsl::span<uchar const> placementDirections
    ) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::optional<::BlockPos> $place(::IFeature::PlacementContext const& context) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
