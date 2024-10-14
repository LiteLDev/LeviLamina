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
    // vIndex: 0
    virtual ~RuinedPortalPiece() = default;

    // vIndex: 2
    virtual ::StructurePieceType getType() const;

    // vIndex: 4
    virtual bool postProcess(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _addNetherrackDripColumn(class Random& random, class BlockSource& region, class BlockPos pos);

    MCAPI void _maybeReplaceBlock(
        class Random&                            random,
        class BlockSource&                       region,
        class BlockPos                           pos,
        struct PortalEnvironmentModifiers const& modifiers
    );

    MCAPI void _maybeReplaceFullStoneBlock(
        class Random&                            random,
        class BlockSource&                       region,
        class BlockPos                           pos,
        class Block const&                       block,
        struct PortalEnvironmentModifiers const& modifiers
    );

    MCAPI void _maybeReplaceStairs(
        class Random&                            random,
        class BlockSource&                       region,
        class BlockPos                           pos,
        struct PortalEnvironmentModifiers const& modifiers
    );

    MCAPI void _maybeReplaceWall(
        class Random&                            random,
        class BlockSource&                       region,
        class BlockPos                           pos,
        struct PortalEnvironmentModifiers const& modifiers
    );

    MCAPI void _moveStructureBoundsToSuitableY(
        class Random&                            random,
        class BlockSource&                       region,
        struct PortalEnvironmentModifiers const& modifiers
    );

    MCAPI void _spreadNetherrack(
        class Random&                            random,
        class BlockSource&                       region,
        struct PortalEnvironmentModifiers const& modifiers
    );

    MCAPI static class Block const& _getRandomFacingStairs(class Random& random, class Block const& stairBlock);

    MCAPI static bool _isLava(class BlockSource& region, class BlockPos pos);

    MCAPI static bool _willLavaFlowIn(class BlockSource& region, class BlockPos pos);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI ::StructurePieceType getType$() const;

    MCAPI bool postProcess$(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // NOLINTEND
};
