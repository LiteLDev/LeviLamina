#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StructureTemplateFeature {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTURETEMPLATEFEATURE
public:
    StructureTemplateFeature& operator=(StructureTemplateFeature const&) = delete;
    StructureTemplateFeature(StructureTemplateFeature const&)            = delete;
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
     * ?place\@StructureTemplateFeature\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAVRenderParams\@\@\@Z
     */
    virtual class std::optional<class BlockPos>
    place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&) const;
    /**
     * @symbol ??0StructureTemplateFeature\@\@QEAA\@XZ
     */
    MCAPI StructureTemplateFeature();
};
