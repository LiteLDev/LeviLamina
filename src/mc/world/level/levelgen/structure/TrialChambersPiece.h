#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AdjustmentEffect.h"
#include "mc/world/level/biome/VanillaBiomeTypes.h"
#include "mc/world/level/levelgen/structure/PoolElementStructurePiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

class TrialChambersPiece : public ::PoolElementStructurePiece {
public:
    // prevent constructor by default
    TrialChambersPiece& operator=(TrialChambersPiece const&);
    TrialChambersPiece(TrialChambersPiece const&);
    TrialChambersPiece();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1TrialChambersPiece@@UEAA@XZ
    virtual ~TrialChambersPiece() = default;

    // vIndex: 13, symbol:
    // ?generateHeightAtPosition@TrialChambersPiece@@UEBAHAEBVBlockPos@@AEAVDimension@@AEAVBlockVolume@@AEAV?$unordered_map@VChunkPos@@V?$unique_ptr@V?$vector@FV?$allocator@F@std@@@std@@U?$default_delete@V?$vector@FV?$allocator@F@std@@@std@@@2@@std@@U?$hash@VChunkPos@@@3@U?$equal_to@VChunkPos@@@3@V?$allocator@U?$pair@$$CBVChunkPos@@V?$unique_ptr@V?$vector@FV?$allocator@F@std@@@std@@U?$default_delete@V?$vector@FV?$allocator@F@std@@@std@@@2@@std@@@std@@@3@@std@@@Z
    virtual int
    generateHeightAtPosition(class BlockPos const&, class Dimension&, class BlockVolume&, std::unordered_map<class ChunkPos, std::unique_ptr<std::vector<short>>>&)
        const;

    // vIndex: 14, symbol: ?getSupportBlock@TrialChambersPiece@@UEBAPEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@AEBV2@@Z
    virtual class Block const* getSupportBlock(class BlockSource&, class BlockPos const&, class Block const&) const;

    // vIndex: 15, symbol: ?getBeardStabilizeBlock@TrialChambersPiece@@UEBAAEBVBlock@@AEBV2@@Z
    virtual class Block const& getBeardStabilizeBlock(class Block const&) const;

    // vIndex: 16, symbol: ?getTerrainAdjustmentEffect@TrialChambersPiece@@UEBA?AW4AdjustmentEffect@@XZ
    virtual ::AdjustmentEffect getTerrainAdjustmentEffect() const;

    // symbol:
    // ?addPieces@TrialChambersPiece@@SAXVBlockPos@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAVRandom@@AEAVJigsawStructureRegistry@@W4VanillaBiomeTypes@@AEAVDimension@@@Z
    MCAPI static void
    addPieces(class BlockPos, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&, class JigsawStructureRegistry&, ::VanillaBiomeTypes, class Dimension&);

    // symbol:
    // ?ALIAS_BINDINGS@TrialChambersPiece@@2V?$vector@V?$unique_ptr@VPoolAliasBinding@@U?$default_delete@VPoolAliasBinding@@@std@@@std@@V?$allocator@V?$unique_ptr@VPoolAliasBinding@@U?$default_delete@VPoolAliasBinding@@@std@@@std@@@2@@std@@B
    MCAPI static std::vector<std::unique_ptr<class PoolAliasBinding>> const ALIAS_BINDINGS;

    // NOLINTEND
};
