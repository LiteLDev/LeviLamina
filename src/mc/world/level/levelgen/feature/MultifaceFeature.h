#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MultifaceFeature {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MULTIFACEFEATURE
public:
    MultifaceFeature& operator=(MultifaceFeature const&) = delete;
    MultifaceFeature(MultifaceFeature const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?place\@MultifaceFeature\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAVRenderParams\@\@\@Z
     */
    virtual class std::optional<class BlockPos>
    place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&) const;
    /**
     * @symbol ??0MultifaceFeature\@\@QEAA\@XZ
     */
    MCAPI MultifaceFeature();

    // private:
    /**
     * @symbol
     * ?_placeBlockIfPossible\@MultifaceFeature\@\@AEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEBV?$vector\@EV?$allocator\@E\@std\@\@\@3\@\@Z
     */
    MCAPI class std::optional<class BlockPos>
    _placeBlockIfPossible(class BlockSource&, class BlockPos const&, class Random&, std::vector<unsigned char> const&)
        const;
    /**
     * @symbol ?_getShuffledDirections\@MultifaceFeature\@\@CA?AV?$vector\@EV?$allocator\@E\@std\@\@\@std\@\@V23\@\@Z
     */
    MCAPI static std::vector<unsigned char> _getShuffledDirections(std::vector<unsigned char>);

private:
};
