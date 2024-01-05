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
    // vIndex: 0, symbol: __gen_??1RuinedPortalPiece@@UEAA@XZ
    virtual ~RuinedPortalPiece() = default;

    // vIndex: 2, symbol: ?getType@RuinedPortalPiece@@UEBA?AW4StructurePieceType@@XZ
    virtual ::StructurePieceType getType() const;

    // vIndex: 4, symbol: ?postProcess@RuinedPortalPiece@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual bool postProcess(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_addNetherrackDripColumn@RuinedPortalPiece@@AEAAXAEAVRandom@@AEAVBlockSource@@VBlockPos@@@Z
    MCAPI void _addNetherrackDripColumn(class Random& random, class BlockSource& region, class BlockPos pos);

    // symbol:
    // ?_maybeReplaceBlock@RuinedPortalPiece@@AEAAXAEAVRandom@@AEAVBlockSource@@VBlockPos@@AEBUPortalEnvironmentModifiers@@@Z
    MCAPI void _maybeReplaceBlock(
        class Random&                            random,
        class BlockSource&                       region,
        class BlockPos                           pos,
        struct PortalEnvironmentModifiers const& modifiers
    );

    // symbol:
    // ?_maybeReplaceFullStoneBlock@RuinedPortalPiece@@AEAAXAEAVRandom@@AEAVBlockSource@@VBlockPos@@AEBVBlock@@AEBUPortalEnvironmentModifiers@@@Z
    MCAPI void _maybeReplaceFullStoneBlock(
        class Random&                            random,
        class BlockSource&                       region,
        class BlockPos                           pos,
        class Block const&                       block,
        struct PortalEnvironmentModifiers const& modifiers
    );

    // symbol:
    // ?_maybeReplaceStairs@RuinedPortalPiece@@AEAAXAEAVRandom@@AEAVBlockSource@@VBlockPos@@AEBUPortalEnvironmentModifiers@@@Z
    MCAPI void _maybeReplaceStairs(
        class Random&                            random,
        class BlockSource&                       region,
        class BlockPos                           pos,
        struct PortalEnvironmentModifiers const& modifiers
    );

    // symbol:
    // ?_maybeReplaceWall@RuinedPortalPiece@@AEAAXAEAVRandom@@AEAVBlockSource@@VBlockPos@@AEBUPortalEnvironmentModifiers@@@Z
    MCAPI void _maybeReplaceWall(
        class Random&                            random,
        class BlockSource&                       region,
        class BlockPos                           pos,
        struct PortalEnvironmentModifiers const& modifiers
    );

    // symbol:
    // ?_moveStructureBoundsToSuitableY@RuinedPortalPiece@@AEAAXAEAVRandom@@AEAVBlockSource@@AEBUPortalEnvironmentModifiers@@@Z
    MCAPI void _moveStructureBoundsToSuitableY(
        class Random&                            random,
        class BlockSource&                       region,
        struct PortalEnvironmentModifiers const& modifiers
    );

    // symbol:
    // ?_spreadNetherrack@RuinedPortalPiece@@AEAAXAEAVRandom@@AEAVBlockSource@@AEBUPortalEnvironmentModifiers@@@Z
    MCAPI void _spreadNetherrack(
        class Random&                            random,
        class BlockSource&                       region,
        struct PortalEnvironmentModifiers const& modifiers
    );

    // symbol: ?_getRandomFacingStairs@RuinedPortalPiece@@CAAEBVBlock@@AEAVRandom@@AEBV2@@Z
    MCAPI static class Block const& _getRandomFacingStairs(class Random& random, class Block const& stairBlock);

    // symbol: ?_isLava@RuinedPortalPiece@@CA_NAEAVBlockSource@@VBlockPos@@@Z
    MCAPI static bool _isLava(class BlockSource& region, class BlockPos pos);

    // symbol: ?_willLavaFlowIn@RuinedPortalPiece@@CA_NAEAVBlockSource@@VBlockPos@@@Z
    MCAPI static bool _willLavaFlowIn(class BlockSource& region, class BlockPos pos);

    // NOLINTEND
};
