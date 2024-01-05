#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/IFeature.h"

class LegacyTreeFeature : public ::IFeature {
public:
    // LegacyTreeFeature inner types define
    enum class Type {};

public:
    // prevent constructor by default
    LegacyTreeFeature& operator=(LegacyTreeFeature const&);
    LegacyTreeFeature(LegacyTreeFeature const&);
    LegacyTreeFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1LegacyTreeFeature@@UEAA@XZ
    virtual ~LegacyTreeFeature() = default;

    // vIndex: 1, symbol:
    // ?place@LegacyTreeFeature@@UEBA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@AEAVRenderParams@@@Z
    virtual std::optional<class BlockPos> place(
        class IBlockWorldGenAPI& target,
        class BlockPos const&    pos,
        class Random&            random,
        class RenderParams&      renderParams
    ) const;

    // vIndex: 2, symbol:
    // ?isValidPlacement@IFeature@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual bool isValidPlacement(std::string const&);

    // symbol: ??0LegacyTreeFeature@@QEAA@W4Type@0@AEAVFeatureRegistry@@@Z
    MCAPI LegacyTreeFeature(::LegacyTreeFeature::Type placementType, class FeatureRegistry& registry);

    // NOLINTEND
};
