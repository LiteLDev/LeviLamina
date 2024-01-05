#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/IFeature.h"

class StructureTemplateFeature : public ::IFeature {
public:
    // prevent constructor by default
    StructureTemplateFeature& operator=(StructureTemplateFeature const&);
    StructureTemplateFeature(StructureTemplateFeature const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1StructureTemplateFeature@@UEAA@XZ
    virtual ~StructureTemplateFeature() = default;

    // vIndex: 1, symbol:
    // ?place@StructureTemplateFeature@@UEBA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@AEAVRenderParams@@@Z
    virtual std::optional<class BlockPos> place(
        class IBlockWorldGenAPI& target,
        class BlockPos const&    pos,
        class Random&            random,
        class RenderParams&      renderParams
    ) const;

    // vIndex: 2, symbol:
    // ?isValidPlacement@IFeature@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual bool isValidPlacement(std::string const&);

    // symbol: ??0StructureTemplateFeature@@QEAA@XZ
    MCAPI StructureTemplateFeature();

    // NOLINTEND
};
