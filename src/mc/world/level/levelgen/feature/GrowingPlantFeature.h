#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/IFeature.h"

class GrowingPlantFeature : public ::IFeature {
public:
    // GrowingPlantFeature inner types declare
    // clang-format off
    struct WeightedBlockReference;
    // clang-format on

    // GrowingPlantFeature inner types define
    struct WeightedBlockReference {
    public:
        // prevent constructor by default
        WeightedBlockReference& operator=(WeightedBlockReference const&);
        WeightedBlockReference(WeightedBlockReference const&);
        WeightedBlockReference();

    public:
        // NOLINTBEGIN
        // symbol: ??1WeightedBlockReference@GrowingPlantFeature@@QEAA@XZ
        MCAPI ~WeightedBlockReference();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    GrowingPlantFeature& operator=(GrowingPlantFeature const&);
    GrowingPlantFeature(GrowingPlantFeature const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1GrowingPlantFeature@@UEAA@XZ
    virtual ~GrowingPlantFeature() = default;

    // vIndex: 1, symbol:
    // ?place@GrowingPlantFeature@@UEBA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@AEAVRenderParams@@@Z
    virtual std::optional<class BlockPos> place(
        class IBlockWorldGenAPI& target,
        class BlockPos const&    pos,
        class Random&            random,
        class RenderParams&      renderParams
    ) const;

    // vIndex: 2, symbol:
    // ?isValidPlacement@IFeature@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual bool isValidPlacement(std::string const&);

    // symbol: ??0GrowingPlantFeature@@QEAA@XZ
    MCAPI GrowingPlantFeature();

    // NOLINTEND
};
