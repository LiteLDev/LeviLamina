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
    // vIndex: 4
    virtual bool place(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const /*override*/;

    // vIndex: 0
    virtual ~CoralFeature() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _buildHand(
        ::BlockSource&                                 region,
        ::BlockPos const&                              pos,
        ::Random&                                      random,
        ::std::vector<::BlockPos>&                     topDec,
        ::std::vector<::std::pair<::BlockPos, uchar>>& sideDec,
        ::gsl::not_null<::Block const*>                block
    ) const;

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

    MCNAPI void _buildPlantLike(
        ::BlockSource&                                 region,
        ::BlockPos const&                              pos,
        ::Random&                                      random,
        ::std::vector<::BlockPos>&                     topDec,
        ::std::vector<::std::pair<::BlockPos, uchar>>& sideDec,
        ::gsl::not_null<::Block const*>                block
    ) const;

    MCNAPI void
    _buildSmallClump(::BlockSource& region, ::BlockPos const& pos, ::Random& random, ::std::vector<::BlockPos>& topDec, ::std::vector<::std::pair<::BlockPos, uchar>>& block, ::gsl::not_null<::Block const*>)
        const;

    MCNAPI void _buildSpire(
        ::BlockSource&                                 region,
        ::BlockPos const&                              pos,
        ::Random&                                      random,
        ::std::vector<::BlockPos>&                     topDec,
        ::std::vector<::std::pair<::BlockPos, uchar>>& sideDec,
        ::gsl::not_null<::Block const*>                block
    ) const;

    MCNAPI bool _canOverwrite(::BlockSource const& region, ::BlockPos const& pos, int color) const;

    MCNAPI int _getColor(::Block const& block) const;

    MCNAPI void _placeSideDecorations(::BlockSource& region, ::BlockPos const& pos, ::Random& random, uchar dir) const;

    MCNAPI void _placeTopDecorations(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;

    MCNAPI bool
    _setBlock(::BlockSource& region, ::BlockPos const& pos, ::gsl::not_null<::Block const*> block, int color) const;

    MCNAPI bool
    _setBlockOnSolid(::BlockSource& region, ::BlockPos const& pos, ::gsl::not_null<::Block const*> block, int color)
        const;

    MCNAPI void _starCorners(
        ::BlockSource&                  region,
        ::Random&                       random,
        ::BlockPos const&               pos,
        ::gsl::not_null<::Block const*> block,
        float                           iteration,
        int                             chance,
        bool                            negateChance
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
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $place(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
