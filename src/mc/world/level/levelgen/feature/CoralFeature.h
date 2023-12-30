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
    // vIndex: 0, symbol: __gen_??1CoralFeature@@UEAA@XZ
    virtual ~CoralFeature() = default;

    // vIndex: 3, symbol: ?place@CoralFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_buildHand@CoralFeature@@AEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@AEAV?$vector@VBlockPos@@V?$allocator@VBlockPos@@@std@@@std@@AEAV?$vector@U?$pair@VBlockPos@@E@std@@V?$allocator@U?$pair@VBlockPos@@E@std@@@2@@6@V?$not_null@PEBVBlock@@@gsl@@@Z
    MCAPI void _buildHand(
        class BlockSource&                             region,
        class BlockPos const&                          pos,
        class Random&                                  random,
        std::vector<class BlockPos>&                   topDec,
        std::vector<std::pair<class BlockPos, uchar>>& sideDec,
        gsl::not_null<class Block const*>              block
    ) const;

    // symbol:
    // ?_buildPlantArm@CoralFeature@@AEBAXAEAVBlockSource@@AEAVRandom@@AEBVBlockPos@@V?$not_null@PEBVBlock@@@gsl@@AEAV?$vector@VBlockPos@@V?$allocator@VBlockPos@@@std@@@std@@AEAV?$vector@U?$pair@VBlockPos@@E@std@@V?$allocator@U?$pair@VBlockPos@@E@std@@@2@@8@E_N@Z
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

    // symbol:
    // ?_buildPlantLike@CoralFeature@@AEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@AEAV?$vector@VBlockPos@@V?$allocator@VBlockPos@@@std@@@std@@AEAV?$vector@U?$pair@VBlockPos@@E@std@@V?$allocator@U?$pair@VBlockPos@@E@std@@@2@@6@V?$not_null@PEBVBlock@@@gsl@@@Z
    MCAPI void _buildPlantLike(
        class BlockSource&                             region,
        class BlockPos const&                          pos,
        class Random&                                  random,
        std::vector<class BlockPos>&                   topDec,
        std::vector<std::pair<class BlockPos, uchar>>& sideDec,
        gsl::not_null<class Block const*>              block
    ) const;

    // symbol:
    // ?_buildSmallClump@CoralFeature@@AEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@AEAV?$vector@VBlockPos@@V?$allocator@VBlockPos@@@std@@@std@@AEAV?$vector@U?$pair@VBlockPos@@E@std@@V?$allocator@U?$pair@VBlockPos@@E@std@@@2@@6@V?$not_null@PEBVBlock@@@gsl@@@Z
    MCAPI void _buildSmallClump(
        class BlockSource&                             region,
        class BlockPos const&                          pos,
        class Random&                                  random,
        std::vector<class BlockPos>&                   topDec,
        std::vector<std::pair<class BlockPos, uchar>>& sideDec,
        gsl::not_null<class Block const*>              block
    ) const;

    // symbol:
    // ?_buildSpire@CoralFeature@@AEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@AEAV?$vector@VBlockPos@@V?$allocator@VBlockPos@@@std@@@std@@AEAV?$vector@U?$pair@VBlockPos@@E@std@@V?$allocator@U?$pair@VBlockPos@@E@std@@@2@@6@V?$not_null@PEBVBlock@@@gsl@@@Z
    MCAPI void _buildSpire(
        class BlockSource&                             region,
        class BlockPos const&                          pos,
        class Random&                                  random,
        std::vector<class BlockPos>&                   topDec,
        std::vector<std::pair<class BlockPos, uchar>>& sideDec,
        gsl::not_null<class Block const*>              block
    ) const;

    // symbol: ?_canOverwrite@CoralFeature@@AEBA_NAEBVBlockSource@@AEBVBlockPos@@H@Z
    MCAPI bool _canOverwrite(class BlockSource const& region, class BlockPos const& pos, int color) const;

    // symbol: ?_placeSideDecorations@CoralFeature@@AEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@E@Z
    MCAPI void
    _placeSideDecorations(class BlockSource& region, class BlockPos const& pos, class Random& random, uchar dir) const;

    // symbol: ?_randomDirectionExcept@CoralFeature@@AEBAEAEAVRandom@@E@Z
    MCAPI uchar _randomDirectionExcept(class Random& random, uchar except) const;

    // symbol: ?_setBlock@CoralFeature@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@V?$not_null@PEBVBlock@@@gsl@@H@Z
    MCAPI bool
    _setBlock(class BlockSource& region, class BlockPos const& pos, gsl::not_null<class Block const*> block, int color)
        const;

    // symbol: ?_setBlockOnSolid@CoralFeature@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@V?$not_null@PEBVBlock@@@gsl@@H@Z
    MCAPI bool _setBlockOnSolid(
        class BlockSource&                region,
        class BlockPos const&             pos,
        gsl::not_null<class Block const*> block,
        int                               color
    ) const;

    // symbol:
    // ?_starCorners@CoralFeature@@AEBAXAEAVBlockSource@@AEAVRandom@@AEBVBlockPos@@V?$not_null@PEBVBlock@@@gsl@@MH_N@Z
    MCAPI void _starCorners(
        class BlockSource&                region,
        class Random&                     random,
        class BlockPos const&             pos,
        gsl::not_null<class Block const*> block,
        float                             chance,
        int                               iteration,
        bool                              negateChance
    ) const;

    // symbol:
    // ?_starFormation@CoralFeature@@AEBAXAEAVBlockSource@@AEAVRandom@@AEBVBlockPos@@V?$not_null@PEBVBlock@@@gsl@@MH_N@Z
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
};
