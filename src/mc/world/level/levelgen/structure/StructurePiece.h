#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
    virtual void moveBoundingBox(int, int, int);

    // vIndex: 2, symbol: ?getType@StructurePiece@@UEBA?AW4StructurePieceType@@XZ
    virtual ::StructurePieceType getType() const;

    // vIndex: 3, symbol:
    // ?addChildren@StructurePiece@@UEAAXAEAV1@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAVRandom@@@Z
    virtual void addChildren(class StructurePiece&, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&);

    // vIndex: 4, symbol: ?postProcess@TemplateStructurePiece@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&) = 0;

    // vIndex: 5, symbol: ?postProcessMobsAt@StructurePiece@@UEAAXAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual void postProcessMobsAt(class BlockSource&, class Random&, class BoundingBox const&);

    // vIndex: 6, symbol: ?isInInvalidLocation@StructurePiece@@UEAA_NAEAVBlockSource@@AEBVBoundingBox@@@Z
    virtual bool isInInvalidLocation(class BlockSource&, class BoundingBox const&);

    // vIndex: 7, symbol: ?getWorldX@StructurePiece@@UEAAHHH@Z
    virtual int getWorldX(int, int);

    // vIndex: 8, symbol: ?getWorldZ@StructurePiece@@UEAAHHH@Z
    virtual int getWorldZ(int, int);

    // vIndex: 9, symbol: ?placeBlock@StructurePiece@@UEAAXAEAVBlockSource@@AEBVBlock@@HHHAEBVBoundingBox@@@Z
    virtual void placeBlock(class BlockSource&, class Block const&, int, int, int, class BoundingBox const&);

    // vIndex: 10, symbol: ?canBeReplaced@StructurePiece@@UEAA_NAEAVBlockSource@@HHHAEBVBoundingBox@@@Z
    virtual bool canBeReplaced(class BlockSource&, int, int, int, class BoundingBox const&);

    // vIndex: 11, symbol: ?generateBox@StructurePiece@@UEAAXAEAVBlockSource@@AEBVBoundingBox@@HHHHHHAEBVBlock@@2_N@Z
    virtual void generateBox(
        class BlockSource&,
        class BoundingBox const&,
        int,
        int,
        int,
        int,
        int,
        int,
        class Block const&,
        class Block const&,
        bool
    );

    // vIndex: 12, symbol: ?addHardcodedSpawnAreas@StructurePiece@@UEBAXAEAVLevelChunk@@@Z
    virtual void addHardcodedSpawnAreas(class LevelChunk&) const;

    // symbol: ?_getWorldPos@StructurePiece@@QEAA?AVBlockPos@@HHH@Z
    MCAPI class BlockPos _getWorldPos(int, int, int);

    // symbol: ?addTerrainAdjustmentToken@StructurePiece@@QEAAXV?$shared_ptr@_N@std@@@Z
    MCAPI void addTerrainAdjustmentToken(std::shared_ptr<bool>);

    // symbol: ?generateAirBox@StructurePiece@@QEAAXAEAVBlockSource@@AEBVBoundingBox@@HHHHHH@Z
    MCAPI void generateAirBox(class BlockSource&, class BoundingBox const&, int, int, int, int, int, int);

    // symbol:
    // ?generateBox@StructurePiece@@QEAAXAEAVBlockSource@@AEBVBoundingBox@@HHHHHH_NAEAVRandom@@AEBVBlockSelector@@@Z
    MCAPI void
    generateBox(class BlockSource&, class BoundingBox const&, int, int, int, int, int, int, bool, class Random&, class BlockSelector const&);

    // symbol:
    // ?generateMaybeBox@StructurePiece@@QEAAXAEAVBlockSource@@AEBVBoundingBox@@AEAVRandom@@MHHHHHHAEBVBlock@@3_N4@Z
    MCAPI void generateMaybeBox(
        class BlockSource&,
        class BoundingBox const&,
        class Random&,
        float,
        int,
        int,
        int,
        int,
        int,
        int,
        class Block const&,
        class Block const&,
        bool,
        bool
    );

    // symbol: ?generateUpperHalfSphere@StructurePiece@@QEAAXAEAVBlockSource@@AEBVBoundingBox@@HHHHHHAEBVBlock@@_N@Z
    MCAPI void generateUpperHalfSphere(
        class BlockSource&,
        class BoundingBox const&,
        int,
        int,
        int,
        int,
        int,
        int,
        class Block const&,
        bool
    );

    // symbol: ?getBlock@StructurePiece@@QEAAAEBVBlock@@AEAVBlockSource@@HHHAEBVBoundingBox@@@Z
    MCAPI class Block const& getBlock(class BlockSource&, int, int, int, class BoundingBox const&);

    // symbol: ?getOrientationData@StructurePiece@@QEAAGPEBVBlock@@G@Z
    MCAPI ushort getOrientationData(class Block const*, ushort);

    // symbol: ?getWorldY@StructurePiece@@QEAAHH@Z
    MCAPI int getWorldY(int);

    // symbol: ?isAboveGround@StructurePiece@@QEAA_NHHHAEAVBlockSource@@@Z
    MCAPI bool isAboveGround(int, int, int, class BlockSource&);

    // symbol: ?isAir@StructurePiece@@QEAA_NAEAVBlockSource@@HHHAEBVBoundingBox@@@Z
    MCAPI bool isAir(class BlockSource&, int, int, int, class BoundingBox const&);

    // symbol: ?isReplaceableBlock@StructurePiece@@QEAA_NAEBVBlock@@@Z
    MCAPI bool isReplaceableBlock(class Block const&);

    // symbol: ?maybeGenerateBlock@StructurePiece@@QEAAXAEAVBlockSource@@AEBVBoundingBox@@AEAVRandom@@MHHHAEBVBlock@@@Z
    MCAPI void
    maybeGenerateBlock(class BlockSource&, class BoundingBox const&, class Random&, float, int, int, int, class Block const&);

    // symbol:
    // ?maybeGenerateBlockIfNotFloating@StructurePiece@@QEAAXAEAVBlockSource@@AEBVBoundingBox@@AEAVRandom@@MHHHAEBVBlock@@@Z
    MCAPI void
    maybeGenerateBlockIfNotFloating(class BlockSource&, class BoundingBox const&, class Random&, float, int, int, int, class Block const&);

    // symbol:
    // ?findCollisionPiece@StructurePiece@@SAPEAV1@AEBV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEBVBoundingBox@@@Z
    MCAPI static class StructurePiece*
    findCollisionPiece(std::vector<std::unique_ptr<class StructurePiece>> const&, class BoundingBox const&);

    // symbol: ?getTotalWeight@StructurePiece@@SAHAEBV?$vector@VPieceWeight@@V?$allocator@VPieceWeight@@@std@@@std@@@Z
    MCAPI static int getTotalWeight(std::vector<class PieceWeight> const&);

    // NOLINTEND
};
