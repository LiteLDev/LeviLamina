#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/IFeature.h"

class OreFeature : public ::IFeature {
public:
    // OreFeature inner types declare
    // clang-format off
    class ReplaceRulesAccelerator;
    // clang-format on

    // OreFeature inner types define
    class ReplaceRulesAccelerator {

    public:
        // prevent constructor by default
        ReplaceRulesAccelerator& operator=(ReplaceRulesAccelerator const&) = delete;
        ReplaceRulesAccelerator(ReplaceRulesAccelerator const&)            = delete;
        ReplaceRulesAccelerator()                                          = delete;

    public:
        // NOLINTBEGIN
        /**
         * @symbol
         * ?setRules\@ReplaceRulesAccelerator\@OreFeature\@\@QEAAXAEBV?$vector\@UReplaceRule\@\@V?$allocator\@UReplaceRule\@\@\@std\@\@\@std\@\@\@Z
         */
        MCAPI void setRules(std::vector<struct ReplaceRule> const&);
        // NOLINTEND
    };

public:
    // prevent constructor by default
    OreFeature& operator=(OreFeature const&) = delete;
    OreFeature(OreFeature const&)            = delete;

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
     * ?place\@OreFeature\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAVRenderParams\@\@\@Z
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
     * @symbol ??0OreFeature\@\@QEAA\@XZ
     */
    MCAPI OreFeature();
    /**
     * @symbol
     * ??0OreFeature\@\@QEAA\@H$$QEAV?$vector\@UReplaceRule\@\@V?$allocator\@UReplaceRule\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI OreFeature(int, std::vector<struct ReplaceRule>&&);
    // NOLINTEND
};
