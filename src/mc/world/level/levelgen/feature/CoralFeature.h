#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class CoralFeature : public ::Feature {
public:
    // prevent constructor by default
    CoralFeature& operator=(CoralFeature const&);
    CoralFeature(CoralFeature const&);
    CoralFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CoralFeature() = default;

    // vIndex: 3
    virtual bool place(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _buildHand(
        class BlockSource&                             region,
        class BlockPos const&                          pos,
        class Random&                                  random,
        std::vector<class BlockPos>&                   topDec,
        std::vector<std::pair<class BlockPos, uchar>>& sideDec,
        gsl::not_null<class Block const*>              block
    ) const;

    MCAPI void _buildPlantArm(
        class BlockSource&                             region,
        class Random&                                  random,
        class BlockPos const&                          pos,
        gsl::not_null<class Block const*>              block,
        std::vector<class BlockPos>&                   topDec,
        std::vector<std::pair<class BlockPos, uchar>>& sideDec,
        uchar                                          direction,
        bool                                           notTall
    ) const;

    MCAPI void _buildPlantLike(
        class BlockSource&                             region,
        class BlockPos const&                          pos,
        class Random&                                  random,
        std::vector<class BlockPos>&                   topDec,
        std::vector<std::pair<class BlockPos, uchar>>& sideDec,
        gsl::not_null<class Block const*>              block
    ) const;

    MCAPI void _buildSmallClump(
        class BlockSource&           region,
        class BlockPos const&        pos,
        class Random&                random,
        std::vector<class BlockPos>& topDec,
        std::vector<std::pair<class BlockPos, uchar>>&,
        gsl::not_null<class Block const*> block
    ) const;

    MCAPI void _buildSpire(
        class BlockSource&                             region,
        class BlockPos const&                          pos,
        class Random&                                  random,
        std::vector<class BlockPos>&                   topDec,
        std::vector<std::pair<class BlockPos, uchar>>& sideDec,
        gsl::not_null<class Block const*>              block
    ) const;

    MCAPI bool _canOverwrite(class BlockSource const& region, class BlockPos const& pos, int color) const;

    MCAPI void
    _placeSideDecorations(class BlockSource& region, class BlockPos const& pos, class Random& random, uchar dir) const;

    MCAPI uchar _randomDirectionExcept(class Random& random, uchar except) const;

    MCAPI bool
    _setBlock(class BlockSource& region, class BlockPos const& pos, gsl::not_null<class Block const*> block, int color)
        const;

    MCAPI bool _setBlockOnSolid(
        class BlockSource&                region,
        class BlockPos const&             pos,
        gsl::not_null<class Block const*> block,
        int                               color
    ) const;

    MCAPI void _starCorners(
        class BlockSource&                region,
        class Random&                     random,
        class BlockPos const&             pos,
        gsl::not_null<class Block const*> block,
        float                             chance,
        int                               iteration,
        bool                              negateChance
    ) const;

    MCAPI void _starFormation(
        class BlockSource&                region,
        class Random&                     random,
        class BlockPos const&             pos,
        gsl::not_null<class Block const*> block,
        float                             chance,
        int                               iteration,
        bool                              negateChance
    ) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI bool place$(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND
};
