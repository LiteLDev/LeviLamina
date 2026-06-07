#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class HashedString;
class IBlockWorldGenAPI;
class Random;
// clang-format on

class SpeleothemClusterFeature : public ::IFeature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::HashedString const&>                                                mBaseBlock;
    ::ll::TypedStorage<8, 8, ::HashedString const&>                                                mPointedBlock;
    ::ll::TypedStorage<8, 8, ::std::vector<::std::reference_wrapper<::HashedString const>> const&> mReplaceableBlocks;
    // NOLINTEND

public:
    // prevent constructor by default
    SpeleothemClusterFeature& operator=(SpeleothemClusterFeature const&);
    SpeleothemClusterFeature(SpeleothemClusterFeature const&);
    SpeleothemClusterFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::optional<::BlockPos> place(::IFeature::PlacementContext const& context) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _placeColumn(
        ::IBlockWorldGenAPI& target,
        ::Random&            random,
        ::BlockPos const&    pos,
        int                  dx,
        int                  dz,
        float                chanceOfWater,
        double               chanceOfStalagmiteOrStalactite,
        int                  clusterHeight,
        float                density
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
