#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Rotation.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockVolume;
class BoundingBox;
class Dimension;
class JigsawBlockInfo;
class JigsawStructureRegistry;
class PoolElementStructurePiece;
class Random;
class StructurePiece;
class StructurePoolElement;
class StructureTemplatePool;
struct JigsawJunction;
// clang-format on

class LegacyJigsawPlacement {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk4488b6;
    ::ll::UntypedStorage<8, 64> mUnk50e36e;
    ::ll::UntypedStorage<8, 64> mUnk113b09;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyJigsawPlacement& operator=(LegacyJigsawPlacement const&);
    LegacyJigsawPlacement(LegacyJigsawPlacement const&);
    LegacyJigsawPlacement();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LegacyJigsawPlacement(
        int maxDepth,
        ::std::function<::std::unique_ptr<
            ::PoolElementStructurePiece>(::StructurePoolElement const&, ::BlockPos const&, ::Rotation const&, int, ::JigsawJunction&, ::BoundingBox const&, ::BlockPos const&)>
            factory
    );

    MCAPI void _addPiece(
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
        ::PoolElementStructurePiece const&                  sourcePiece,
        ::Random&                                           random,
        ::BlockPos const&                                   position,
        ::Rotation const&                                   rotation,
        ::JigsawStructureRegistry const&                    pools,
        ::Dimension&                                        dimension,
        ::BlockVolume&                                      box,
        ::BlockPos const&                                   refPos
    );

    MCAPI bool _tryPlacingPiece(
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
        ::PoolElementStructurePiece const&                  sourcePiece,
        ::Random&                                           random,
        ::JigsawBlockInfo const&                            sourceJigsaw,
        ::BoundingBox const&                                sourceBB,
        ::std::vector<::BoundingBox>&                       sourceInternalBBs,
        ::BlockPos const&                                   attachPos,
        ::StructureTemplatePool const*                      targetPool,
        ::JigsawStructureRegistry const&                    pools,
        ::Dimension&                                        dimension,
        ::BlockVolume&                                      box,
        ::BlockPos const&                                   refPos
    );

    MCAPI void addPieces(
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
        ::StructurePoolElement const&                       initialElement,
        ::Random&                                           random,
        ::BlockPos const&                                   position,
        ::Rotation const&                                   rotation,
        ::JigsawStructureRegistry const&                    pools,
        ::Dimension&                                        dimension
    );

    MCAPI ~LegacyJigsawPlacement();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        int maxDepth,
        ::std::function<::std::unique_ptr<
            ::PoolElementStructurePiece>(::StructurePoolElement const&, ::BlockPos const&, ::Rotation const&, int, ::JigsawJunction&, ::BoundingBox const&, ::BlockPos const&)>
            factory
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
