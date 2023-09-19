#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AdjustmentEffect.h"
#include "mc/enums/Rotation.h"
#include "mc/world/level/levelgen/structure/StructurePiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

class PoolElementStructurePiece : public ::StructurePiece {
public:
    // prevent constructor by default
    PoolElementStructurePiece& operator=(PoolElementStructurePiece const&);
    PoolElementStructurePiece(PoolElementStructurePiece const&);
    PoolElementStructurePiece();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?moveBoundingBox@PoolElementStructurePiece@@UEAAXHHH@Z
    virtual void moveBoundingBox(int, int, int);

    // vIndex: 4, symbol: ?postProcess@PoolElementStructurePiece@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);

    // vIndex: 5, symbol:
    // ?postProcessMobsAt@PoolElementStructurePiece@@UEAAXAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual void postProcessMobsAt(class BlockSource&, class Random&, class BoundingBox const&);

    // vIndex: 13, symbol:
    // ?generateHeightAtPosition@VillagePiece@@UEBAHAEBVBlockPos@@AEAVDimension@@AEAVBlockVolume@@AEAV?$unordered_map@VChunkPos@@V?$unique_ptr@V?$vector@FV?$allocator@F@std@@@std@@U?$default_delete@V?$vector@FV?$allocator@F@std@@@std@@@2@@std@@U?$hash@VChunkPos@@@3@U?$equal_to@VChunkPos@@@3@V?$allocator@U?$pair@$$CBVChunkPos@@V?$unique_ptr@V?$vector@FV?$allocator@F@std@@@std@@U?$default_delete@V?$vector@FV?$allocator@F@std@@@std@@@2@@std@@@std@@@3@@std@@@Z
    virtual int
    generateHeightAtPosition(class BlockPos const&, class Dimension&, class BlockVolume&, std::unordered_map<class ChunkPos, std::unique_ptr<std::vector<short>>>&)
        const = 0;

    // vIndex: 14, symbol: ?getSupportBlock@VillagePiece@@UEBAPEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@AEBV2@@Z
    virtual class Block const* getSupportBlock(class BlockSource&, class BlockPos const&, class Block const&) const = 0;

    // vIndex: 15, symbol: ?getBeardStabilizeBlock@VillagePiece@@UEBAAEBVBlock@@AEBV2@@Z
    virtual class Block const& getBeardStabilizeBlock(class Block const&) const = 0;

    // vIndex: 16, symbol: ?getTerrainAdjustmentEffect@VillagePiece@@UEBA?AW4AdjustmentEffect@@XZ
    virtual ::AdjustmentEffect getTerrainAdjustmentEffect() const = 0;

    // vIndex: 17, symbol: ?_needsPostProcessing@PoolElementStructurePiece@@MEAA_NAEAVBlockSource@@@Z
    virtual bool _needsPostProcessing(class BlockSource&);

    // symbol: ??1PoolElementStructurePiece@@UEAA@XZ
    MCVAPI ~PoolElementStructurePiece();

    // symbol:
    // ??0PoolElementStructurePiece@@QEAA@AEBVStructurePoolElement@@VBlockPos@@W4Rotation@@HAEAUJigsawJunction@@AEBVBoundingBox@@1@Z
    MCAPI PoolElementStructurePiece(
        class StructurePoolElement const&,
        class BlockPos,
        ::Rotation,
        int,
        struct JigsawJunction&,
        class BoundingBox const&,
        class BlockPos
    );

    // NOLINTEND
};
