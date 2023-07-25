#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ConditionalListFeature {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONDITIONALLISTFEATURE
public:
    ConditionalListFeature& operator=(ConditionalListFeature const&) = delete;
    ConditionalListFeature(ConditionalListFeature const&)            = delete;
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
     * ?place\@ConditionalListFeature\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAVRenderParams\@\@\@Z
     */
    virtual class std::optional<class BlockPos>
    place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&) const;
    /**
     * @symbol ??0ConditionalListFeature\@\@QEAA\@XZ
     */
    MCAPI ConditionalListFeature();
};
