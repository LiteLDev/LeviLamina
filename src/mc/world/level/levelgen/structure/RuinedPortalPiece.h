#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructurePiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

class RuinedPortalPiece : public ::StructurePiece {
public:
    // prevent constructor by default
    RuinedPortalPiece& operator=(RuinedPortalPiece const&);
    RuinedPortalPiece(RuinedPortalPiece const&);
    RuinedPortalPiece();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~RuinedPortalPiece() = default;

    // vIndex: 2, symbol: ?getType@RuinedPortalPiece@@UEBA?AW4StructurePieceType@@XZ
    virtual ::StructurePieceType getType() const;

    // vIndex: 4, symbol: ?postProcess@RuinedPortalPiece@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_addNetherrackDripColumn@RuinedPortalPiece@@AEAAXAEAVRandom@@AEAVBlockSource@@VBlockPos@@@Z
    MCAPI void _addNetherrackDripColumn(class Random&, class BlockSource&, class BlockPos);

    // symbol:
    // ?_maybeReplaceBlock@RuinedPortalPiece@@AEAAXAEAVRandom@@AEAVBlockSource@@VBlockPos@@AEBUPortalEnvironmentModifiers@@@Z
    MCAPI void
    _maybeReplaceBlock(class Random&, class BlockSource&, class BlockPos, struct PortalEnvironmentModifiers const&);

    // symbol:
    // ?_maybeReplaceFullStoneBlock@RuinedPortalPiece@@AEAAXAEAVRandom@@AEAVBlockSource@@VBlockPos@@AEBVBlock@@AEBUPortalEnvironmentModifiers@@@Z
    MCAPI void
    _maybeReplaceFullStoneBlock(class Random&, class BlockSource&, class BlockPos, class Block const&, struct PortalEnvironmentModifiers const&);

    // symbol:
    // ?_maybeReplaceStairs@RuinedPortalPiece@@AEAAXAEAVRandom@@AEAVBlockSource@@VBlockPos@@AEBUPortalEnvironmentModifiers@@@Z
    MCAPI void
    _maybeReplaceStairs(class Random&, class BlockSource&, class BlockPos, struct PortalEnvironmentModifiers const&);

    // symbol:
    // ?_maybeReplaceWall@RuinedPortalPiece@@AEAAXAEAVRandom@@AEAVBlockSource@@VBlockPos@@AEBUPortalEnvironmentModifiers@@@Z
    MCAPI void
    _maybeReplaceWall(class Random&, class BlockSource&, class BlockPos, struct PortalEnvironmentModifiers const&);

    // symbol:
    // ?_moveStructureBoundsToSuitableY@RuinedPortalPiece@@AEAAXAEAVRandom@@AEAVBlockSource@@AEBUPortalEnvironmentModifiers@@@Z
    MCAPI void
    _moveStructureBoundsToSuitableY(class Random&, class BlockSource&, struct PortalEnvironmentModifiers const&);

    // symbol:
    // ?_spreadNetherrack@RuinedPortalPiece@@AEAAXAEAVRandom@@AEAVBlockSource@@AEBUPortalEnvironmentModifiers@@@Z
    MCAPI void _spreadNetherrack(class Random&, class BlockSource&, struct PortalEnvironmentModifiers const&);

    // symbol: ?_getRandomFacingStairs@RuinedPortalPiece@@CAAEBVBlock@@AEAVRandom@@AEBV2@@Z
    MCAPI static class Block const& _getRandomFacingStairs(class Random&, class Block const&);

    // symbol: ?_isLava@RuinedPortalPiece@@CA_NAEAVBlockSource@@VBlockPos@@@Z
    MCAPI static bool _isLava(class BlockSource&, class BlockPos);

    // symbol: ?_willLavaFlowIn@RuinedPortalPiece@@CA_NAEAVBlockSource@@VBlockPos@@@Z
    MCAPI static bool _willLavaFlowIn(class BlockSource&, class BlockPos);

    // NOLINTEND
};
