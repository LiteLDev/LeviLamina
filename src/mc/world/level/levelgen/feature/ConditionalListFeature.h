#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ConditionalListFeature {

public:
    // prevent constructor by default
    ConditionalListFeature& operator=(ConditionalListFeature const&) = delete;
    ConditionalListFeature(ConditionalListFeature const&)            = delete;

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
     * ?place\@ConditionalListFeature\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAVRenderParams\@\@\@Z
     */
    virtual std::optional<class BlockPos>
    place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&) const;
    /**
     * @symbol ??0ConditionalListFeature\@\@QEAA\@XZ
     */
    MCAPI ConditionalListFeature();
    // NOLINTEND
};
