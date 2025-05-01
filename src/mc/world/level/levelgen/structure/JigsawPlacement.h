#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Rotation.h"
#include "mc/world/level/levelgen/structure/structurepools/alias/PoolAliasBinding.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
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

class JigsawPlacement {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkcc2c4f;
    ::ll::UntypedStorage<4, 4>  mUnk230fb5;
    ::ll::UntypedStorage<8, 64> mUnk40c5ee;
    ::ll::UntypedStorage<8, 8>  mUnke0bb10;
    ::ll::UntypedStorage<8, 8>  mUnk3c1434;
    ::ll::UntypedStorage<8, 8>  mUnkfa3181;
    ::ll::UntypedStorage<8, 8>  mUnk2bf1da;
    ::ll::UntypedStorage<8, 64> mUnk5862e9;
    ::ll::UntypedStorage<8, 40> mUnkdd8234;
    ::ll::UntypedStorage<8, 24> mUnkb1b40e;
    ::ll::UntypedStorage<8, 24> mUnka60e45;
    ::ll::UntypedStorage<8, 40> mUnk747941;
    // NOLINTEND

public:
    // prevent constructor by default
    JigsawPlacement& operator=(JigsawPlacement const&);
    JigsawPlacement(JigsawPlacement const&);
    JigsawPlacement();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI JigsawPlacement(
        uint64                                              maxDepth,
        uint64                                              globalContextSize,
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieceList,
        ::std::function<::std::unique_ptr<
            ::PoolElementStructurePiece>(::StructurePoolElement const&, ::BlockPos const&, ::Rotation const&, int, ::JigsawJunction&, ::BoundingBox const&, ::BlockPos const&)>
                                         factory,
        ::Random&                        random,
        ::JigsawStructureRegistry const& pools,
        ::Dimension&                     dimension
    );

    MCNAPI void _addPiece(
        ::PoolElementStructurePiece const&         sourcePiece,
        ::BlockPos const&                          position,
        ::Rotation const&                          rotation,
        ::BlockPos const&                          refPos,
        uint64                                     contextDepth,
        ::PoolAliasBinding::PoolAliasLookup const& poolAliasLookup
    );

    MCNAPI ::BlockPos _findLocalAnchorOffset(
        ::StructurePoolElement const& initialElement,
        ::BlockPos const&             pieceCornerPosition,
        ::Rotation const&             rotation,
        ::std::string_view            startAnchorName
    ) const;

    MCNAPI bool _tryPlacingPiece(
        ::PoolElementStructurePiece const&         sourcePiece,
        ::BoundingBox const&                       sourceBB,
        ::JigsawBlockInfo const&                   sourceJigsaw,
        ::BlockPos const&                          attachPos,
        ::StructureTemplatePool const*             targetPool,
        ::BlockPos const&                          refPos,
        uint64                                     contextDepth,
        ::PoolAliasBinding::PoolAliasLookup const& poolAliasLookup
    );

    MCNAPI void addPieces(
        ::StructurePoolElement const&              initialElement,
        ::BlockPos const&                          startPosition,
        ::Rotation const&                          rotation,
        ::std::string_view                         startAnchorName,
        ::PoolAliasBinding::PoolAliasLookup const& poolAliasLookup
    );

    MCNAPI ~JigsawPlacement();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        uint64                                              maxDepth,
        uint64                                              globalContextSize,
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieceList,
        ::std::function<::std::unique_ptr<
            ::PoolElementStructurePiece>(::StructurePoolElement const&, ::BlockPos const&, ::Rotation const&, int, ::JigsawJunction&, ::BoundingBox const&, ::BlockPos const&)>
                                         factory,
        ::Random&                        random,
        ::JigsawStructureRegistry const& pools,
        ::Dimension&                     dimension
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
