#pragma once

#include "mc/_HeaderOutputPredefine.h"

class OreFeature {
public:
    // OreFeature inner types declare
    // clang-format off
    class ReplaceRulesAccelerator;
    // clang-format on

    // OreFeature inner types define
    class ReplaceRulesAccelerator {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OREFEATURE_REPLACERULESACCELERATOR
    public:
        ReplaceRulesAccelerator& operator=(ReplaceRulesAccelerator const&) = delete;
        ReplaceRulesAccelerator(ReplaceRulesAccelerator const&)            = delete;
        ReplaceRulesAccelerator()                                          = delete;
#endif

    public:
        /**
         * @symbol
         * ?setRules\@ReplaceRulesAccelerator\@OreFeature\@\@QEAAXAEBV?$vector\@UReplaceRule\@\@V?$allocator\@UReplaceRule\@\@\@std\@\@\@std\@\@\@Z
         */
        MCAPI void setRules(std::vector<struct ReplaceRule> const&);
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OREFEATURE
public:
    OreFeature& operator=(OreFeature const&) = delete;
    OreFeature(OreFeature const&)            = delete;
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
     * ?place\@OreFeature\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAVRenderParams\@\@\@Z
     */
    virtual class std::optional<class BlockPos>
    place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&) const;
    /**
     * @symbol ??0OreFeature\@\@QEAA\@XZ
     */
    MCAPI OreFeature();
    /**
     * @symbol
     * ??0OreFeature\@\@QEAA\@H$$QEAV?$vector\@UReplaceRule\@\@V?$allocator\@UReplaceRule\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI OreFeature(int, std::vector<struct ReplaceRule>&&);
};
