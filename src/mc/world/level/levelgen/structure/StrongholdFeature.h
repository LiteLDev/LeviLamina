#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureFeature.h"

class StrongholdFeature : public ::StructureFeature {
public:
    // StrongholdFeature inner types declare
    // clang-format off
    struct StrongholdResult;
    // clang-format on

    // StrongholdFeature inner types define
    struct StrongholdResult {
    public:
        // prevent constructor by default
        StrongholdResult& operator=(StrongholdResult const&);
        StrongholdResult(StrongholdResult const&);
        StrongholdResult();
    };

public:
    // prevent constructor by default
    StrongholdFeature& operator=(StrongholdFeature const&);
    StrongholdFeature(StrongholdFeature const&);
    StrongholdFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1StrongholdFeature@@UEAA@XZ
    virtual ~StrongholdFeature() = default;

    // vIndex: 3, symbol:
    // ?getNearestGeneratedFeature@StrongholdFeature@@UEAA_NAEAVDimension@@AEBVBiomeSource@@AEBVBlockPos@@AEAV4@AEBVIPreliminarySurfaceProvider@@_NAEBV?$optional@VHashedString@@@std@@@Z
    virtual bool
    getNearestGeneratedFeature(class Dimension&, class BiomeSource const&, class BlockPos const&, class BlockPos&, class IPreliminarySurfaceProvider const&, bool, std::optional<class HashedString> const&);

    // vIndex: 5, symbol:
    // ?isFeatureChunk@StrongholdFeature@@UEAA_NAEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@IAEBVIPreliminarySurfaceProvider@@AEBVDimension@@@Z
    virtual bool
    isFeatureChunk(class BiomeSource const&, class Random&, class ChunkPos const&, uint, class IPreliminarySurfaceProvider const&, class Dimension const&);

    // vIndex: 6, symbol:
    // ?createStructureStart@StrongholdFeature@@MEAA?AV?$unique_ptr@VStructureStart@@U?$default_delete@VStructureStart@@@std@@@std@@AEAVDimension@@AEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@AEBVIPreliminarySurfaceProvider@@@Z
    virtual std::unique_ptr<class StructureStart>
    createStructureStart(class Dimension&, class BiomeSource const&, class Random&, class ChunkPos const&, class IPreliminarySurfaceProvider const&);

    // symbol: ??0StrongholdFeature@@QEAA@PEAVVillageFeature@@I@Z
    MCAPI StrongholdFeature(class VillageFeature*, uint);

    // symbol: ?START_OFFSET@StrongholdFeature@@2VBlockPos@@B
    MCAPI static class BlockPos const START_OFFSET;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ?generatePositions@StrongholdFeature@@IEAAXAEAVRandom@@AEBVBiomeSource@@IAEBVIPreliminarySurfaceProvider@@AEBVDimension@@@Z
    MCAPI void
    generatePositions(class Random&, class BiomeSource const&, uint, class IPreliminarySurfaceProvider const&, class Dimension const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_generateStronghold@StrongholdFeature@@AEAA?BUStrongholdResult@1@IAEBVChunkPos@@@Z
    MCAPI struct StrongholdFeature::StrongholdResult const _generateStronghold(uint, class ChunkPos const&);

    // symbol: ?_getNearestStronghold@StrongholdFeature@@AEAA_NAEBVDimension@@IAEBVBlockPos@@AEAV3@_N@Z
    MCAPI bool _getNearestStronghold(class Dimension const&, uint, class BlockPos const&, class BlockPos&, bool);

    // NOLINTEND
};
