#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class CoralFeature : public ::Feature {

public:
    // prevent constructor by default
    CoralFeature& operator=(CoralFeature const&) = delete;
    CoralFeature(CoralFeature const&)            = delete;
    CoralFeature()                               = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 3
     * @symbol ?place\@CoralFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_buildHand\@CoralFeature\@\@AEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAV?$vector\@VBlockPos\@\@V?$allocator\@VBlockPos\@\@\@std\@\@\@std\@\@AEAV?$vector\@U?$pair\@VBlockPos\@\@E\@std\@\@V?$allocator\@U?$pair\@VBlockPos\@\@E\@std\@\@\@2\@\@6\@V?$not_null\@PEBVBlock\@\@\@gsl\@\@\@Z
     */
    MCAPI void
    _buildHand(class BlockSource&, class BlockPos const&, class Random&, std::vector<class BlockPos>&, std::vector<std::pair<class BlockPos, unsigned char>>&, class gsl::not_null<class Block const*>)
        const;
    /**
     * @symbol
     * ?_buildPlantArm\@CoralFeature\@\@AEBAXAEAVBlockSource\@\@AEAVRandom\@\@AEBVBlockPos\@\@V?$not_null\@PEBVBlock\@\@\@gsl\@\@AEAV?$vector\@VBlockPos\@\@V?$allocator\@VBlockPos\@\@\@std\@\@\@std\@\@AEAV?$vector\@U?$pair\@VBlockPos\@\@E\@std\@\@V?$allocator\@U?$pair\@VBlockPos\@\@E\@std\@\@\@2\@\@8\@E_N\@Z
     */
    MCAPI void _buildPlantArm(
        class BlockSource&,
        class Random&,
        class BlockPos const&,
        class gsl::not_null<class Block const*>,
        std::vector<class BlockPos>&,
        std::vector<std::pair<class BlockPos, unsigned char>>&,
        unsigned char,
        bool
    ) const;
    /**
     * @symbol
     * ?_buildPlantLike\@CoralFeature\@\@AEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAV?$vector\@VBlockPos\@\@V?$allocator\@VBlockPos\@\@\@std\@\@\@std\@\@AEAV?$vector\@U?$pair\@VBlockPos\@\@E\@std\@\@V?$allocator\@U?$pair\@VBlockPos\@\@E\@std\@\@\@2\@\@6\@V?$not_null\@PEBVBlock\@\@\@gsl\@\@\@Z
     */
    MCAPI void
    _buildPlantLike(class BlockSource&, class BlockPos const&, class Random&, std::vector<class BlockPos>&, std::vector<std::pair<class BlockPos, unsigned char>>&, class gsl::not_null<class Block const*>)
        const;
    /**
     * @symbol
     * ?_buildSmallClump\@CoralFeature\@\@AEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAV?$vector\@VBlockPos\@\@V?$allocator\@VBlockPos\@\@\@std\@\@\@std\@\@AEAV?$vector\@U?$pair\@VBlockPos\@\@E\@std\@\@V?$allocator\@U?$pair\@VBlockPos\@\@E\@std\@\@\@2\@\@6\@V?$not_null\@PEBVBlock\@\@\@gsl\@\@\@Z
     */
    MCAPI void
    _buildSmallClump(class BlockSource&, class BlockPos const&, class Random&, std::vector<class BlockPos>&, std::vector<std::pair<class BlockPos, unsigned char>>&, class gsl::not_null<class Block const*>)
        const;
    /**
     * @symbol
     * ?_buildSpire\@CoralFeature\@\@AEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAV?$vector\@VBlockPos\@\@V?$allocator\@VBlockPos\@\@\@std\@\@\@std\@\@AEAV?$vector\@U?$pair\@VBlockPos\@\@E\@std\@\@V?$allocator\@U?$pair\@VBlockPos\@\@E\@std\@\@\@2\@\@6\@V?$not_null\@PEBVBlock\@\@\@gsl\@\@\@Z
     */
    MCAPI void
    _buildSpire(class BlockSource&, class BlockPos const&, class Random&, std::vector<class BlockPos>&, std::vector<std::pair<class BlockPos, unsigned char>>&, class gsl::not_null<class Block const*>)
        const;
    /**
     * @symbol ?_canOverwrite\@CoralFeature\@\@AEBA_NAEBVBlockSource\@\@AEBVBlockPos\@\@H\@Z
     */
    MCAPI bool _canOverwrite(class BlockSource const&, class BlockPos const&, int) const;
    /**
     * @symbol ?_placeSideDecorations\@CoralFeature\@\@AEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@E\@Z
     */
    MCAPI void _placeSideDecorations(class BlockSource&, class BlockPos const&, class Random&, unsigned char) const;
    /**
     * @symbol ?_randomDirectionExcept\@CoralFeature\@\@AEBAEAEAVRandom\@\@E\@Z
     */
    MCAPI unsigned char _randomDirectionExcept(class Random&, unsigned char) const;
    /**
     * @symbol
     * ?_setBlock\@CoralFeature\@\@AEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@V?$not_null\@PEBVBlock\@\@\@gsl\@\@H\@Z
     */
    MCAPI bool _setBlock(class BlockSource&, class BlockPos const&, class gsl::not_null<class Block const*>, int) const;
    /**
     * @symbol
     * ?_setBlockOnSolid\@CoralFeature\@\@AEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@V?$not_null\@PEBVBlock\@\@\@gsl\@\@H\@Z
     */
    MCAPI bool
    _setBlockOnSolid(class BlockSource&, class BlockPos const&, class gsl::not_null<class Block const*>, int) const;
    /**
     * @symbol
     * ?_starCorners\@CoralFeature\@\@AEBAXAEAVBlockSource\@\@AEAVRandom\@\@AEBVBlockPos\@\@V?$not_null\@PEBVBlock\@\@\@gsl\@\@MH_N\@Z
     */
    MCAPI void _starCorners(
        class BlockSource&,
        class Random&,
        class BlockPos const&,
        class gsl::not_null<class Block const*>,
        float,
        int,
        bool
    ) const;
    /**
     * @symbol
     * ?_starFormation\@CoralFeature\@\@AEBAXAEAVBlockSource\@\@AEAVRandom\@\@AEBVBlockPos\@\@V?$not_null\@PEBVBlock\@\@\@gsl\@\@MH_N\@Z
     */
    MCAPI void _starFormation(
        class BlockSource&,
        class Random&,
        class BlockPos const&,
        class gsl::not_null<class Block const*>,
        float,
        int,
        bool
    ) const;
    // NOLINTEND
};
