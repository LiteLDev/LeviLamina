#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Direction.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

class StructurePiece {
public:
    // prevent constructor by default
    StructurePiece& operator=(StructurePiece const&);
    StructurePiece(StructurePiece const&);
    StructurePiece();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1StructurePiece@@UEAA@XZ
    virtual ~StructurePiece();

    // vIndex: 1, symbol: ?moveBoundingBox@StructurePiece@@UEAAXHHH@Z
    virtual void moveBoundingBox(int dx, int dy, int dz);

    // vIndex: 2, symbol: ?getType@StructurePiece@@UEBA?AW4StructurePieceType@@XZ
    virtual ::StructurePieceType getType() const;

    // vIndex: 3, symbol:
    // ?addChildren@StructurePiece@@UEAAXAEAV1@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAVRandom@@@Z
    virtual void addChildren(
        class StructurePiece&                               startPiece,
        std::vector<std::unique_ptr<class StructurePiece>>& pieces,
        class Random&                                       random
    );

    // vIndex: 4, symbol: ?postProcess@PoolElementStructurePiece@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual bool postProcess(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB) = 0;

    // vIndex: 5, symbol: ?postProcessMobsAt@StructurePiece@@UEAAXAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual void postProcessMobsAt(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // vIndex: 6, symbol: ?isInInvalidLocation@StructurePiece@@UEAA_NAEAVBlockSource@@AEBVBoundingBox@@@Z
    virtual bool isInInvalidLocation(class BlockSource& region, class BoundingBox const& chunkBB);

    // vIndex: 7, symbol: ?getWorldX@StructurePiece@@UEAAHHH@Z
    virtual int getWorldX(int x, int z);

    // vIndex: 8, symbol: ?getWorldZ@StructurePiece@@UEAAHHH@Z
    virtual int getWorldZ(int x, int z);

    // vIndex: 9, symbol: ?placeBlock@StructurePiece@@UEAAXAEAVBlockSource@@AEBVBlock@@HHHAEBVBoundingBox@@@Z
    virtual void placeBlock(
        class BlockSource&       region,
        class Block const&       block,
        int                      x,
        int                      y,
        int                      z,
        class BoundingBox const& chunkBB
    );

    // vIndex: 10, symbol: ?canBeReplaced@StructurePiece@@UEAA_NAEAVBlockSource@@HHHAEBVBoundingBox@@@Z
    virtual bool canBeReplaced(class BlockSource&, int, int, int, class BoundingBox const&);

    // vIndex: 11, symbol: ?generateBox@StructurePiece@@UEAAXAEAVBlockSource@@AEBVBoundingBox@@HHHHHHAEBVBlock@@2_N@Z
    virtual void generateBox(
        class BlockSource&       region,
        class BoundingBox const& chunkBB,
        int                      x0,
        int                      y0,
        int                      z0,
        int                      x1,
        int                      y1,
        int                      z1,
        class Block const&       edgeBlock,
        class Block const&       fillBlock,
        bool                     skipAir
    );

    // vIndex: 12, symbol: ?addHardcodedSpawnAreas@StructurePiece@@UEBAXAEAVLevelChunk@@@Z
    virtual void addHardcodedSpawnAreas(class LevelChunk& chunk) const;

    // symbol: ?_getWorldPos@StructurePiece@@QEAA?AVBlockPos@@HHH@Z
    MCAPI class BlockPos _getWorldPos(int x, int y, int z);

    // symbol: ?addTerrainAdjustmentToken@StructurePiece@@QEAAXV?$shared_ptr@_N@std@@@Z
    MCAPI void addTerrainAdjustmentToken(std::shared_ptr<bool> token);

    // symbol: ?generateAirBox@StructurePiece@@QEAAXAEAVBlockSource@@AEBVBoundingBox@@HHHHHH@Z
    MCAPI void generateAirBox(
        class BlockSource&       region,
        class BoundingBox const& chunkBB,
        int                      x0,
        int                      y0,
        int                      z0,
        int                      x1,
        int                      y1,
        int                      z1
    );

    // symbol:
    // ?generateBox@StructurePiece@@QEAAXAEAVBlockSource@@AEBVBoundingBox@@HHHHHH_NAEAVRandom@@AEBVBlockSelector@@@Z
    MCAPI void generateBox(
        class BlockSource&         region,
        class BoundingBox const&   chunkBB,
        int                        x0,
        int                        y0,
        int                        z0,
        int                        x1,
        int                        y1,
        int                        z1,
        bool                       skipAir,
        class Random&              random,
        class BlockSelector const& selector
    );

    // symbol:
    // ?generateMaybeBox@StructurePiece@@QEAAXAEAVBlockSource@@AEBVBoundingBox@@AEAVRandom@@MHHHHHHAEBVBlock@@3_N4@Z
    MCAPI void generateMaybeBox(
        class BlockSource&       region,
        class BoundingBox const& chunkBB,
        class Random&            random,
        float                    probability,
        int                      x0,
        int                      y0,
        int                      z0,
        int                      x1,
        int                      y1,
        int                      z1,
        class Block const&       edgeBlock,
        class Block const&       fillBlock,
        bool                     skipAir,
        bool                     excludeSky
    );

    // symbol: ?generateUpperHalfSphere@StructurePiece@@QEAAXAEAVBlockSource@@AEBVBoundingBox@@HHHHHHAEBVBlock@@_N@Z
    MCAPI void generateUpperHalfSphere(
        class BlockSource&       region,
        class BoundingBox const& chunkBB,
        int                      x0,
        int                      y0,
        int                      z0,
        int                      x1,
        int                      y1,
        int                      z1,
        class Block const&       fillBlock,
        bool                     skipAir
    );

    // symbol: ?getBlock@StructurePiece@@QEAAAEBVBlock@@AEAVBlockSource@@HHHAEBVBoundingBox@@@Z
    MCAPI class Block const& getBlock(class BlockSource& region, int x, int y, int z, class BoundingBox const& chunkBB);

    // symbol: ?getOrientation@StructurePiece@@QEBA?AW4Type@Direction@@XZ
    MCAPI ::Direction::Type getOrientation() const;

    // symbol: ?getOrientationData@StructurePiece@@QEAAGPEBVBlock@@G@Z
    MCAPI ushort getOrientationData(class Block const* block, ushort data);

    // symbol: ?getWorldY@StructurePiece@@QEAAHH@Z
    MCAPI int getWorldY(int y);

    // symbol: ?isAboveGround@StructurePiece@@QEAA_NHHHAEAVBlockSource@@@Z
    MCAPI bool isAboveGround(int x0, int y1, int z, class BlockSource& region);

    // symbol: ?isAir@StructurePiece@@QEAA_NAEAVBlockSource@@HHHAEBVBoundingBox@@@Z
    MCAPI bool isAir(class BlockSource& region, int x, int y, int z, class BoundingBox const& chunkBB);

    // symbol: ?isReplaceableBlock@StructurePiece@@QEAA_NAEBVBlock@@@Z
    MCAPI bool isReplaceableBlock(class Block const& block);

    // symbol: ?maybeGenerateBlock@StructurePiece@@QEAAXAEAVBlockSource@@AEBVBoundingBox@@AEAVRandom@@MHHHAEBVBlock@@@Z
    MCAPI void maybeGenerateBlock(
        class BlockSource&       region,
        class BoundingBox const& chunkBB,
        class Random&            random,
        float                    probability,
        int                      x,
        int                      y,
        int                      z,
        class Block const&       block
    );

    // symbol:
    // ?maybeGenerateBlockIfNotFloating@StructurePiece@@QEAAXAEAVBlockSource@@AEBVBoundingBox@@AEAVRandom@@MHHHAEBVBlock@@@Z
    MCAPI void maybeGenerateBlockIfNotFloating(
        class BlockSource&       region,
        class BoundingBox const& chunkBB,
        class Random&            random,
        float                    probability,
        int                      x,
        int                      y,
        int                      z,
        class Block const&       block
    );

    // symbol:
    // ?findCollisionPiece@StructurePiece@@SAPEAV1@AEBV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEBVBoundingBox@@@Z
    MCAPI static class StructurePiece*
    findCollisionPiece(std::vector<std::unique_ptr<class StructurePiece>> const& pieces, class BoundingBox const& box);

    // symbol: ?getTotalWeight@StructurePiece@@SAHAEBV?$vector@VPieceWeight@@V?$allocator@VPieceWeight@@@std@@@std@@@Z
    MCAPI static int getTotalWeight(std::vector<class PieceWeight> const& pieceWeights);

    // NOLINTEND
};
