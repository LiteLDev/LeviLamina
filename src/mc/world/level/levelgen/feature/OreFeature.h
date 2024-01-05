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
        ReplaceRulesAccelerator& operator=(ReplaceRulesAccelerator const&);
        ReplaceRulesAccelerator(ReplaceRulesAccelerator const&);
        ReplaceRulesAccelerator();

    public:
        // NOLINTBEGIN
        // symbol:
        // ?setRules@ReplaceRulesAccelerator@OreFeature@@QEAAXAEBV?$vector@UReplaceRule@@V?$allocator@UReplaceRule@@@std@@@std@@@Z
        MCAPI void setRules(std::vector<struct ReplaceRule> const&);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    OreFeature& operator=(OreFeature const&);
    OreFeature(OreFeature const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1OreFeature@@UEAA@XZ
    virtual ~OreFeature() = default;

    // vIndex: 1, symbol:
    // ?place@OreFeature@@UEBA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@AEAVRenderParams@@@Z
    virtual std::optional<class BlockPos> place(
        class IBlockWorldGenAPI& target,
        class BlockPos const&    pos,
        class Random&            random,
        class RenderParams&      renderParams
    ) const;

    // vIndex: 2, symbol:
    // ?isValidPlacement@IFeature@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual bool isValidPlacement(std::string const&);

    // symbol: ??0OreFeature@@QEAA@XZ
    MCAPI OreFeature();

    // symbol: ??0OreFeature@@QEAA@H$$QEAV?$vector@UReplaceRule@@V?$allocator@UReplaceRule@@@std@@@std@@@Z
    MCAPI OreFeature(int count, std::vector<struct ReplaceRule>&&);

    // NOLINTEND
};
