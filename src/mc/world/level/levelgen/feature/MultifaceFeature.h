#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class IBlockWorldGenAPI;
class Random;
class RenderParams;
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

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::optional<::BlockPos>
    place(::IBlockWorldGenAPI&, ::BlockPos const& pos, ::Random& random, ::RenderParams& renderParams) const
        /*override*/;

    // vIndex: 0
    virtual ~MultifaceFeature() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MultifaceFeature();

    MCAPI ::std::optional<::BlockPos> _placeBlockIfPossible(
        ::BlockSource&              region,
        ::BlockPos const&           pos,
        ::Random&                   random,
        ::std::vector<uchar> const& placementDirections
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::vector<uchar> _getShuffledDirections(::std::vector<uchar> faces);

    MCAPI static ::std::vector<uchar> _getShuffledDirectionsExcept(uchar exclude, ::std::vector<uchar> const& faces);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::optional<::BlockPos>
    $place(::IBlockWorldGenAPI&, ::BlockPos const& pos, ::Random& random, ::RenderParams& renderParams) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
