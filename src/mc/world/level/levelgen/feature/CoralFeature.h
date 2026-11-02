#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class Random;
// clang-format on

class CoralFeature : public ::Feature {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool place(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _buildPlantArm(
        ::BlockSource&                                 region,
        ::Random&                                      random,
        ::BlockPos const&                              pos,
        ::gsl::not_null<::Block const*>                block,
        ::std::vector<::BlockPos>&                     topDec,
        ::std::vector<::std::pair<::BlockPos, uchar>>& sideDec,
        uchar                                          direction,
        bool                                           notTall
    ) const;

    MCNAPI void _placeCoral(
        ::BlockSource&                                 region,
        ::BlockPos const&                              pos,
        ::Random&                                      random,
        ::std::vector<::BlockPos>&                     topDec,
        ::std::vector<::std::pair<::BlockPos, uchar>>& sideDec,
        int                                            color
    ) const;

    MCNAPI void _starFormation(
        ::BlockSource&                  region,
        ::Random&                       random,
        ::BlockPos const&               pos,
        ::gsl::not_null<::Block const*> block,
        float                           chance,
        int                             iteration,
        bool                            negateChance
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool _canOverwrite(::BlockSource const& region, ::BlockPos const& pos, int color);

    MCNAPI static int _getColor(::Block const& block);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $place(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;


    // NOLINTEND
};
