#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class CoralCrustFeature : public ::Feature {

public:
    // prevent constructor by default
    CoralCrustFeature& operator=(CoralCrustFeature const&) = delete;
    CoralCrustFeature(CoralCrustFeature const&)            = delete;
    CoralCrustFeature()                                    = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 3
     * @symbol ?place\@CoralCrustFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_canOverwrite\@CoralCrustFeature\@\@AEBA_NAEBVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool _canOverwrite(class BlockSource const&, class BlockPos const&) const;
    /**
     * @symbol ?_getCropOffsetFromRot\@CoralCrustFeature\@\@AEBA?AVBlockPos\@\@HH\@Z
     */
    MCAPI class BlockPos _getCropOffsetFromRot(int, int) const;
    /**
     * @symbol ?_getOffsetFromRot\@CoralCrustFeature\@\@AEBA?AVBlockPos\@\@HH\@Z
     */
    MCAPI class BlockPos _getOffsetFromRot(int, int) const;
    /**
     * @symbol
     * ?_placeCoral\@CoralCrustFeature\@\@AEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAV?$vector\@VBlockPos\@\@V?$allocator\@VBlockPos\@\@\@std\@\@\@std\@\@AEAV?$vector\@U?$pair\@VBlockPos\@\@E\@std\@\@V?$allocator\@U?$pair\@VBlockPos\@\@E\@std\@\@\@2\@\@6\@H\@Z
     */
    MCAPI void _placeCoral(
        class BlockSource&,
        class BlockPos const&,
        class Random&,
        std::vector<class BlockPos>&,
        std::vector<std::pair<class BlockPos, unsigned char>>&,
        int
    ) const;
    /**
     * @symbol
     * ?_placeCoralBase\@CoralCrustFeature\@\@AEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAVLegacyStructureTemplate\@\@AEAVLegacyStructureSettings\@\@\@Z
     */
    MCAPI void
    _placeCoralBase(class BlockSource&, class BlockPos const&, class Random&, class LegacyStructureTemplate&, class LegacyStructureSettings&)
        const;
    /**
     * @symbol ?_placeSideDecorations\@CoralCrustFeature\@\@AEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@E\@Z
     */
    MCAPI void _placeSideDecorations(class BlockSource&, class BlockPos const&, class Random&, unsigned char) const;
    // NOLINTEND
};
