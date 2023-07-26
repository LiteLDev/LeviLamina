#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StructureTemplateFeature {

public:
    // prevent constructor by default
    StructureTemplateFeature& operator=(StructureTemplateFeature const&) = delete;
    StructureTemplateFeature(StructureTemplateFeature const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?place\@StructureTemplateFeature\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAVRenderParams\@\@\@Z
     */
    virtual class std::optional<class BlockPos>
    place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&) const; // NOLINT
    /**
     * @symbol ??0StructureTemplateFeature\@\@QEAA\@XZ
     */
    MCAPI StructureTemplateFeature(); // NOLINT
};
