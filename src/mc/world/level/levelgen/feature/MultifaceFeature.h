#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/IFeature.h"

class MultifaceFeature : public ::IFeature {

public:
    // prevent constructor by default
    MultifaceFeature& operator=(MultifaceFeature const&) = delete;
    MultifaceFeature(MultifaceFeature const&)            = delete;

public:
    // NOLINTBEGIN
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
    virtual std::optional<class BlockPos>
    place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&) const;
    /**
     * @vftbl 2
     * @symbol
     * ?isValidPlacement\@IFeature\@\@UEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual bool isValidPlacement(std::string const&);
    /**
     * @symbol ??0MultifaceFeature\@\@QEAA\@XZ
     */
    MCAPI MultifaceFeature();
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_placeBlockIfPossible\@MultifaceFeature\@\@AEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEBV?$vector\@EV?$allocator\@E\@std\@\@\@3\@\@Z
     */
    MCAPI std::optional<class BlockPos>
    _placeBlockIfPossible(class BlockSource&, class BlockPos const&, class Random&, std::vector<unsigned char> const&)
        const;
    /**
     * @symbol ?_getShuffledDirections\@MultifaceFeature\@\@CA?AV?$vector\@EV?$allocator\@E\@std\@\@\@std\@\@V23\@\@Z
     */
    MCAPI static std::vector<unsigned char> _getShuffledDirections(std::vector<unsigned char>);
    // NOLINTEND
};
