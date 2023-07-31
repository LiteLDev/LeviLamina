#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BeardAndShaverFeature {

public:
    // prevent constructor by default
    BeardAndShaverFeature& operator=(BeardAndShaverFeature const&) = delete;
    BeardAndShaverFeature(BeardAndShaverFeature const&)            = delete;

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
     * ?place\@BeardAndShaverFeature\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAVRenderParams\@\@\@Z
     */
    virtual std::optional<class BlockPos>
    place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&) const;
    /**
     * @symbol ??0BeardAndShaverFeature\@\@QEAA\@XZ
     */
    MCAPI BeardAndShaverFeature();
    // NOLINTEND
};
